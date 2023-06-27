#include "mainwindow.h"

#include <QApplication>//大写Q开头都是Q

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
/*
 * 这里大致总结各个文件的作用：
 *      1. 与GUI有关： 全部.ui文件，双击可进入交互界面编辑
 *          与主界面GUI有关： mainwindow.ui .h .cpp 尤其mainwindow.cpp， 按钮的slot 函数全部都在里面。功能的添加和测试都在slot里进行
 *          与两个dialog有关： 小窗口 分别用来 添加城市 和 给城市连线
 *      2. 与地图相关
 *          City 是城市类 包括坐标和名字 及相应函数
 *          street 街道类 即两个城市间的连线
 *          map 地图类 包括存储city和street的Vector 是abstractmap的派生类 重写了基类的全部功能
 *          abstract map 抽象地图类 是个抽象类
*/
