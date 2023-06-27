#include "city.h"
#include <QDebug>

City::City()
{
    _name = "";
    _x = 0;
    _y = 0;
}

City::City(QString name, int x, int y):_name(name), _x(x), _y(y)
{
}//Konstruktor

//Destructor
City::~City()
{
    //delete _displayCityName;
}
//Draw City
void City::draw(QGraphicsScene& scene)
{
    scene.addEllipse(_x-6 , _y-6, 12, 12, QPen(Qt::blue), QBrush(Qt::blue, Qt::SolidPattern));
    QGraphicsTextItem* _displayCityName = new QGraphicsTextItem;
    _displayCityName->setPos(_x-30,_y-30);
    _displayCityName->setPlainText(_name);
    scene.addItem(_displayCityName);
    qDebug() << QString("The city drawn is %1, the coordinate x: %2, y: %3.").arg(_name).arg(_x).arg(_y);
    //delete displayCityName;//这里加了delete之后就不显示名字了
}

// Set city name
void City::setCityName(const QString& cityName)
{
    _name = cityName;
}

//Set city x coordinate
void City::setCityX(const int& X)
{
    _x = X;
}

//Set city y coordinate
void City::setCityY(const int& Y)
{
    _y = Y;
}

// Get city name
QString City::getCityName() const
{
    return _name;
}

//Get city x coordinate
int City::getCityX() const
{
    return _x;
}

//Get City y coordinate
int City::getCityY() const
{
    return _y;
}

bool City::operator==(const City& comparedCity) const
{
    if((_name==comparedCity.getCityName())&&(_x == comparedCity.getCityX())&&(_y == comparedCity.getCityY())){
        return true;
    }
    return false;
}
