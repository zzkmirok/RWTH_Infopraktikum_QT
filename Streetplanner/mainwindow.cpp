#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&_scene);//initial qGraphicsScene
    MapIoNrw *mapNrw = new MapIoNrw;
    _mapIo = mapNrw;
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_pushButton_test_input_clicked
 */
void MainWindow::on_pushButton_test_input_clicked()
{
    QString str = ui->lineEdit_test_input->text();
    //test of line edit and push button

    bool isInt;
    int Zahl = str.toInt(&isInt);
    QString str1;
    if(!str.isEmpty()){
        if(isInt){
            str1 = QString("The button is clicked! The input is an integer %1, and plus 4 the result is %2.").arg(Zahl).arg(Zahl+4);
        }
        else{
            str1 = QString("The button is clicked! The input city is %1.").arg(str);
        }
    }
    else{
        str1 = QString("The button is clicked. No input found!");
    }
    //qDebug()<<str1;//output by qdebug
    //Debug by messagebox
    QMessageBox msgBox;
    msgBox.setText(str1);
    msgBox.exec();
    //Zusaetzlich ein zufaellig positioniertes Rechteck
    _scene.addRect(rand()*9/RAND_MAX, rand()*9/RAND_MAX,20,20,QPen(Qt::blue),QBrush(Qt::yellow,Qt::SolidPattern));
    _scene.addLine(10,10,190,10,QPen(Qt::blue));

}


/**
 * @brief MainWindow::on_actionExit_triggered
 */
void MainWindow::on_actionExit_triggered()
{
    close();
}

/**
 * @brief MainWindow::on_actionClear_Scene_triggered shortcut Alt+s
 */
void MainWindow::on_actionClear_Scene_triggered()
{
    _scene.clear();
}

//Menu info static Member function from class QMessageBox about()
void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About", "This is a test window");
}

//Random test for draw city
void MainWindow::on_pushButton_test_draw_button_clicked()
{
    int x = rand()%100;
    int y = rand()%100;
    QString  cityName;
    cityName = QString("City %1").arg(rand()%100);//0-100 int generate
    City testcity(cityName, x, y);
    testcity.draw(_scene);
}


void MainWindow::on_actionScene_Test_triggered()
{

}

//Test add City
void MainWindow::on_pushButton_clicked()
{
    City* pTestCity = new City;
    //Map testMap; //For test
    QString newCityName = ui->lineEdit_test_input->text();
    //Console Test not done
    if(!newCityName.isEmpty()){
        pTestCity->setCityName(newCityName);
        _citiesMap.addCity(pTestCity);
    }

}

//Test draw cities
void MainWindow::on_pushButton_2_clicked()
{
    // 为什么外面赋值的city传不进来
    City test("testCity", 50, 20);
    _citiesMap.addCity(&test);
    City test1("Ghdasf",100,90);
    _citiesMap.addCity(&test1);
    _citiesMap.draw(_scene);
}

/**
 * @brief MainWindow::on_pushButton_test_draw_street_clicked
 */
void MainWindow::on_pushButton_test_draw_street_clicked()
{
    City test("Aachen", 50, 20);
    City test1("Koeln",100,90);
    Street testStreet(&test, &test1);
    testStreet.draw(_scene);
    qDebug()<<QString("The length of street is %1").arg(testStreet.getLength());
}

/**
 * @brief MainWindow::on_pushButton_test_add_street_clicked
 */
void MainWindow::on_pushButton_test_add_street_clicked()
{
    City test("Aachen", 50, 20);
    City test1("Koeln",100,90);
    City test2("Duesseldorf", 10, 30);
    City test3("Dortmond",200,80);
    _citiesMap.addCity(&test);
    _citiesMap.addCity(&test1);
    _citiesMap.addCity(&test2);
    Street testStreet(&test, &test1);
    Street testStreet1(&test, &test2);
    Street testStreet2(&test, &test3);
    if(_citiesMap.addStreet(&testStreet)){
        testStreet.draw(_scene);
    }
    if(_citiesMap.addStreet(&testStreet1)){
        testStreet1.draw(_scene);
    }
    if(_citiesMap.addStreet(&testStreet2)){
        testStreet2.draw(_scene);
    }
}


/**
 * @brief MainWindow::on_HideTestButtonCheckBox_clicked
 */
void MainWindow::on_HideTestButtonCheckBox_clicked()
{
    if(ui->HideTestButtonCheckBox->isChecked()){
        ui->pushButton->hide();
        ui->pushButton_2->hide();
        ui->pushButton_test_add_street->hide();
        ui->pushButton_test_draw_street->hide();
        ui->pushButton_test_draw_button->hide();
        ui->pushButton_test_input->hide();
        ui->pushButton_test_abstract_map->hide();
        ui->pushButton_test_simple_dijkstra->hide();
        ui->lineEdit_test_input->hide();
    }
    else{
        ui->pushButton->show();
        ui->pushButton_2->show();
        ui->pushButton_test_add_street->show();
        ui->pushButton_test_draw_street->show();
        ui->pushButton_test_draw_button->show();
        ui->pushButton_test_input->show();
        ui->pushButton_test_abstract_map->show();
        ui->pushButton_test_simple_dijkstra->show();
        ui->lineEdit_test_input->show();
    }

}


/**
 * @brief MainWindow::on_pushButton_add_city_clicked
 */
void MainWindow::on_pushButton_add_city_clicked()
{
    Dialog dialog;
    int result = dialog.exec();
    qDebug() << QString("Dialog result: %1").arg(result);
    if(result==1){
        City* inputCity = dialog.userDefinedCity();
        if(inputCity != nullptr){
            _citiesMap.addCity(inputCity);
            qDebug()<<QString("The return value is %1").arg((*(_citiesMap.getCityList().end()-1))->getCityName());
            inputCity->draw(_scene);
        }
    }
}

/**
 * @brief Fill_Map by clicking
 */
void MainWindow::on_pushButton_Fill_Map_clicked()
{
    _mapIo->fillMap(_citiesMap);
    _citiesMap.draw(_scene);
}

// Diese Funktion testet, ob die Klasse Map das Interface "AbstractMap" korrekt implementiert. 都是他给的，不是我自己写的
void MainWindow::testAbstractMap()
{
    Map testMap;
    City *a = new City("a", 0, 0);
    City *b = new City("b", 0, 100);
    City *c = new City("c", 100, 300);
    Street *s = new Street(a, b);
    Street *s2 = new Street(b, c);


    qDebug() << "MapTest: Start Test of the Map";
    {
        qDebug() << "MapTest: adding wrong street";
        bool t1 = testMap.addStreet(s);
        if (t1) {
            qDebug() << "-Error: Street should not bee added, if cities have not been added.";
        }
    }

    {
        qDebug() << "MapTest: adding correct street";
        testMap.addCity(a);
        testMap.addCity(b);
        bool t1 = testMap.addStreet(s);
        if (!t1) {
            qDebug() << "-Error: It should be possible to add this street.";
        }
    }

    {
        qDebug() << "MapTest: findCity";
        City* city = testMap.findCity("a");
        if (city != a)
            qDebug() << "-Error: City a could not be found.";

        city = testMap.findCity("b");
        if (city != b)
            qDebug() << "-Error: City b could not be found.";

        city = testMap.findCity("c");
        if (city != nullptr)
            qDebug() << "-Error: If city could not be found 0 should be returned.";
    }

    testMap.addCity(c);
    testMap.addStreet(s2);

    {
        qDebug() << "MapTest: getOppositeCity";
        const City *city = testMap.getOppositeCity(s, a);
        if (city != b)
            qDebug() << "-Error: Opposite city should be b.";

        city = _citiesMap.getOppositeCity(s, c);
        if (city != nullptr)
            qDebug() << "-Error: Opposite city for a city which is not linked by given street should be 0.";
    }

    {
        qDebug() << "MapTest: streetLength";
        double l = testMap.getLength(s2);
        double expectedLength = 223.6;
        // compare doubles with 5% tolerance
        if (l < expectedLength * 0.95 || l > expectedLength *1.05)
            qDebug() << "-Error: Street Length is not equal to the expected.";

    }

    {
        qDebug() << "MapTest: getStreetList";
        QVector<Street*> streetList1 = testMap.getStreetList(a);
        QVector<Street*> streetList2 = testMap.getStreetList(b);
        if (streetList1.size() != 1) {
            qDebug() << "-Error: One street should be found for city a.";
        }
        else if (*streetList1.begin() != s) {
                qDebug() << "-Error: The wrong street has been found for city a.";
        }

        if (streetList2.size() != 2)
            qDebug() << "-Error: Two streets should be found for city b.";
    }

    qDebug() << "MapTest: End Test of the Map.";
}



void MainWindow::on_pushButton_test_abstract_map_clicked()
{
    testAbstractMap();
}


void MainWindow::on_pushButton_test_simple_dijkstra_clicked()
{
    _mapIo->fillMap(_citiesMap);
    _citiesMap.draw(_scene);
    //QVector<Street*> resultSimpleDijkstrat = Dijkstra::search(_citiesMap,"Aachen","Köln");
    QVector<Street*> resultSimpleDijkstrat = Dijkstra::search(_citiesMap,"Aachen","Bonn");
    if(!resultSimpleDijkstrat.isEmpty()){
        qDebug()<<QString("There is a path: ");
        for(auto it = resultSimpleDijkstrat.begin(); it != resultSimpleDijkstrat.end(); ++it){
            City* city1 = (*it)->getCity1();
            City* city2 = (*it)->getCity2();
            qDebug()<<QString("street: From %1 to %2, length is %3").arg(city1->getCityName()).arg(city2->getCityName()).arg((*it)->getLength());
            (*it)->drawRed(_scene);
        }
        qDebug()<<QString("Path is searched! ");
    }
}


void MainWindow::on_pushButton_search_shortest_path_clicked()
{
    QString nameStartCity = ui->lineEdit_start_city->text();
    QString nameEndCity = ui->lineEdit_end_city->text();
    if(nameStartCity.isEmpty()||nameEndCity.isEmpty()){
        QString errMsg = QString("Please input cities' names!");
        QMessageBox msgBox;
        msgBox.setText(errMsg);
        msgBox.exec();
    }
    else{
        City* startCity = _citiesMap.findCity(nameStartCity);
        City* endCity = _citiesMap.findCity(nameEndCity);
        if(startCity == nullptr){
            QString errMsg = QString("City %1 is not on the map. \nEnter an existing city or add the city to the map.").arg(nameStartCity);
            QMessageBox msgBox;
            msgBox.setText(errMsg);
            msgBox.exec();
        }
        else if(endCity == nullptr){
            QString errMsg = QString("City %1 is not on the map. \nEnter an existing city or add the city to the map.").arg(nameEndCity);
            QMessageBox msgBox;
            msgBox.setText(errMsg);
            msgBox.exec();
        }
        else{
            if(startCity == endCity){
                QString errMsg = QString("Both city names are the same.");
                QMessageBox msgBox;
                msgBox.setText(errMsg);
                msgBox.exec();
            }
            else{
                QVector<Street*> result = Dijkstra::search(_citiesMap,nameStartCity,nameEndCity);
                if(!result.isEmpty()){
                    double pathLength = 0.0;
                    qDebug()<<QString("The shortest path between %1 and %2: ").arg(nameStartCity).arg(nameEndCity);
                    for(auto it = result.begin(); it != result.end(); ++it){
                        City* city1 = (*it)->getCity1();
                        City* city2 = (*it)->getCity2();
                        qDebug()<<QString("street: From %1 to %2, length is %3").arg(city1->getCityName()).arg(city2->getCityName()).arg((*it)->getLength());
                        pathLength += (*it)->getLength();
                        (*it)->drawRed(_scene);
                    }
                    QString resultMsg = QString("Shortest path between %1 and %2 is found. \nThe distance is %3.").arg(nameStartCity).arg(nameEndCity).arg(pathLength);
                    QMessageBox msgBox;
                    msgBox.setText(resultMsg);
                    msgBox.exec();
                    qDebug()<<QString("Shortest path successfully searched! ");
                }
            }
        }
    }
}


void MainWindow::on_pushButton_add_street_clicked()
{
    DialogAddStreet dialog;
    int result = dialog.exec();
    qDebug() << QString("Dialog result: %1").arg(result);
    if(result==1){
        Street* inputStreet = dialog.userDefinedStreet(_citiesMap);
        if(inputStreet != nullptr){
            _citiesMap.addStreet(inputStreet);
            inputStreet->draw(_scene);
        }
    }
}

