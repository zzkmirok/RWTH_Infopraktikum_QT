#include "street.h"

Street::Street(City* city1, City* city2): _pCity1(city1), _pCity2(city2)
{
    _length = sqrt((city1->getCityX()-city2->getCityX())*(city1->getCityX()-city2->getCityX())+(city1->getCityY()-city2->getCityY())*(city1->getCityY()-city2->getCityY()));
}

/**
 * @brief Street::getLength
 * @return
 */
double Street::getLength() const
{
    return _length;
}

/**
 * @brief Street::getCity1
 * @return new City*
 */
City* Street::getCity1() const
{
    return _pCity1;
}
/**
 * @brief Street::getCity2
 * @return new City*
 */
City* Street::getCity2() const
{
    return _pCity2;
}

/**
 * @brief Draw a street
 * @param scene
 */
void Street::draw(QGraphicsScene& scene)
{
    //For test, in practical we draw cities in cities.draw
    //_pCity1->draw(scene);
    //_pCity2->draw(scene);
    QPen pen;
    pen.setWidth(2);
    pen.setColor(Qt::magenta);
    scene.addLine(_pCity1->getCityX(), _pCity1->getCityY(), _pCity2->getCityX(), _pCity2->getCityY(),pen);
}

/**
 * @brief Street::drawRed
 * @param scene
 */
void Street::drawRed(QGraphicsScene& scene)
{
    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    scene.addLine(_pCity1->getCityX(), _pCity1->getCityY(), _pCity2->getCityX(), _pCity2->getCityY(),pen);
}
