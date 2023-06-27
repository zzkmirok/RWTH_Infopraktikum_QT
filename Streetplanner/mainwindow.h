#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtGlobal>
#include <iostream>
#include "city.h"
#include "map.h"
#include "dialog.h"
#include "mapio.h"
#include "mapionrw.h"
#include "dijkstra.h"
#include "dialogaddstreet.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_test_input_clicked();

    void on_actionExit_triggered();

    void on_actionClear_Scene_triggered();

    void on_actionAbout_triggered();

    void on_actionScene_Test_triggered();

    void on_pushButton_test_draw_button_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_test_draw_street_clicked();

    void on_pushButton_test_add_street_clicked();

    void on_HideTestButtonCheckBox_clicked();

    void on_pushButton_add_city_clicked();

    void on_pushButton_Fill_Map_clicked();

    void on_pushButton_test_abstract_map_clicked();

    void testAbstractMap();

    void on_pushButton_test_simple_dijkstra_clicked();

    void on_pushButton_search_shortest_path_clicked();

    void on_pushButton_add_street_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene _scene;
    Map _citiesMap;
    MapIo* _mapIo;

};
#endif // MAINWINDOW_H
