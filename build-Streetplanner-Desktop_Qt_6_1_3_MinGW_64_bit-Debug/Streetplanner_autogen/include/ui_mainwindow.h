/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionTrenner;
    QAction *actionExit;
    QAction *actionClear_Scene;
    QAction *actionAbout;
    QAction *actionScene_Test;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QCheckBox *HideTestButtonCheckBox;
    QLineEdit *lineEdit_end_city;
    QPushButton *pushButton_add_city;
    QPushButton *pushButton_test_draw_street;
    QLabel *label_input;
    QPushButton *pushButton_test_abstract_map;
    QPushButton *pushButton_test_draw_button;
    QPushButton *pushButton_Fill_Map;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_add_street;
    QLineEdit *lineEdit_test_input;
    QPushButton *pushButton_test_input;
    QPushButton *pushButton_2;
    QPushButton *pushButton_test_add_street;
    QPushButton *pushButton;
    QPushButton *pushButton_test_simple_dijkstra;
    QLineEdit *lineEdit_start_city;
    QPushButton *pushButton_search_shortest_path;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuScene;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1101, 816);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setEnabled(false);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        actionTrenner = new QAction(MainWindow);
        actionTrenner->setObjectName(QString::fromUtf8("actionTrenner"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionClear_Scene = new QAction(MainWindow);
        actionClear_Scene->setObjectName(QString::fromUtf8("actionClear_Scene"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionScene_Test = new QAction(MainWindow);
        actionScene_Test->setObjectName(QString::fromUtf8("actionScene_Test"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setVerticalSpacing(15);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMaximumSize(QSize(3000, 3000));
        graphicsView->setSizeIncrement(QSize(0, 0));
        graphicsView->setSceneRect(QRectF(0, 0, 0, 0));

        gridLayout->addWidget(graphicsView, 0, 1, 23, 1);

        HideTestButtonCheckBox = new QCheckBox(centralwidget);
        HideTestButtonCheckBox->setObjectName(QString::fromUtf8("HideTestButtonCheckBox"));

        gridLayout->addWidget(HideTestButtonCheckBox, 21, 0, 1, 1, Qt::AlignLeft);

        lineEdit_end_city = new QLineEdit(centralwidget);
        lineEdit_end_city->setObjectName(QString::fromUtf8("lineEdit_end_city"));

        gridLayout->addWidget(lineEdit_end_city, 4, 0, 1, 1);

        pushButton_add_city = new QPushButton(centralwidget);
        pushButton_add_city->setObjectName(QString::fromUtf8("pushButton_add_city"));

        gridLayout->addWidget(pushButton_add_city, 7, 0, 1, 1);

        pushButton_test_draw_street = new QPushButton(centralwidget);
        pushButton_test_draw_street->setObjectName(QString::fromUtf8("pushButton_test_draw_street"));

        gridLayout->addWidget(pushButton_test_draw_street, 18, 0, 1, 1);

        label_input = new QLabel(centralwidget);
        label_input->setObjectName(QString::fromUtf8("label_input"));

        gridLayout->addWidget(label_input, 2, 0, 1, 1);

        pushButton_test_abstract_map = new QPushButton(centralwidget);
        pushButton_test_abstract_map->setObjectName(QString::fromUtf8("pushButton_test_abstract_map"));

        gridLayout->addWidget(pushButton_test_abstract_map, 13, 0, 1, 1);

        pushButton_test_draw_button = new QPushButton(centralwidget);
        pushButton_test_draw_button->setObjectName(QString::fromUtf8("pushButton_test_draw_button"));

        gridLayout->addWidget(pushButton_test_draw_button, 15, 0, 1, 1);

        pushButton_Fill_Map = new QPushButton(centralwidget);
        pushButton_Fill_Map->setObjectName(QString::fromUtf8("pushButton_Fill_Map"));

        gridLayout->addWidget(pushButton_Fill_Map, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 22, 0, 1, 1);

        pushButton_add_street = new QPushButton(centralwidget);
        pushButton_add_street->setObjectName(QString::fromUtf8("pushButton_add_street"));

        gridLayout->addWidget(pushButton_add_street, 8, 0, 1, 1);

        lineEdit_test_input = new QLineEdit(centralwidget);
        lineEdit_test_input->setObjectName(QString::fromUtf8("lineEdit_test_input"));
        lineEdit_test_input->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit_test_input, 19, 0, 1, 1);

        pushButton_test_input = new QPushButton(centralwidget);
        pushButton_test_input->setObjectName(QString::fromUtf8("pushButton_test_input"));

        gridLayout->addWidget(pushButton_test_input, 14, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 17, 0, 1, 1);

        pushButton_test_add_street = new QPushButton(centralwidget);
        pushButton_test_add_street->setObjectName(QString::fromUtf8("pushButton_test_add_street"));

        gridLayout->addWidget(pushButton_test_add_street, 20, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 16, 0, 1, 1);

        pushButton_test_simple_dijkstra = new QPushButton(centralwidget);
        pushButton_test_simple_dijkstra->setObjectName(QString::fromUtf8("pushButton_test_simple_dijkstra"));

        gridLayout->addWidget(pushButton_test_simple_dijkstra, 11, 0, 1, 1);

        lineEdit_start_city = new QLineEdit(centralwidget);
        lineEdit_start_city->setObjectName(QString::fromUtf8("lineEdit_start_city"));

        gridLayout->addWidget(lineEdit_start_city, 3, 0, 1, 1);

        pushButton_search_shortest_path = new QPushButton(centralwidget);
        pushButton_search_shortest_path->setObjectName(QString::fromUtf8("pushButton_search_shortest_path"));

        gridLayout->addWidget(pushButton_search_shortest_path, 5, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1101, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuScene = new QMenu(menubar);
        menuScene->setObjectName(QString::fromUtf8("menuScene"));
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuScene->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionTrenner);
        menuFile->addAction(actionExit);
        menuScene->addAction(actionClear_Scene);
        menuScene->addAction(actionScene_Test);
        menuInfo->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionTrenner->setText(QCoreApplication::translate("MainWindow", "Trenner hinzufuegen", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear_Scene->setText(QCoreApplication::translate("MainWindow", "Clear Scene", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionScene_Test->setText(QCoreApplication::translate("MainWindow", "Scene Test", nullptr));
        HideTestButtonCheckBox->setText(QCoreApplication::translate("MainWindow", "Hide test buttons", nullptr));
        lineEdit_end_city->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter an end city", nullptr));
        pushButton_add_city->setText(QCoreApplication::translate("MainWindow", "Add City", nullptr));
        pushButton_test_draw_street->setText(QCoreApplication::translate("MainWindow", "Test Draw Streets", nullptr));
        label_input->setText(QCoreApplication::translate("MainWindow", "Your Input", nullptr));
        pushButton_test_abstract_map->setText(QCoreApplication::translate("MainWindow", "Test Abstract Map", nullptr));
        pushButton_test_draw_button->setText(QCoreApplication::translate("MainWindow", "Test Draw City", nullptr));
        pushButton_Fill_Map->setText(QCoreApplication::translate("MainWindow", "Fill Map", nullptr));
        pushButton_add_street->setText(QCoreApplication::translate("MainWindow", "Add Street", nullptr));
        lineEdit_test_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "Test line editor", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_test_input->setToolTip(QCoreApplication::translate("MainWindow", "Test Input", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_test_input->setText(QCoreApplication::translate("MainWindow", "Test Input", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Test Draw Cities", nullptr));
        pushButton_test_add_street->setText(QCoreApplication::translate("MainWindow", "Test Add Streets", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Test Add City", nullptr));
        pushButton_test_simple_dijkstra->setText(QCoreApplication::translate("MainWindow", "Test simple Dijkstra", nullptr));
        lineEdit_start_city->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter a start city", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_search_shortest_path->setToolTip(QCoreApplication::translate("MainWindow", "Search shortest path with Dijkstra", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_search_shortest_path->setText(QCoreApplication::translate("MainWindow", "Search shortest path", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuScene->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
