#ifndef STREET_H
#define STREET_H
#include "city.h"


class Street
{
public:
    Street() = default;
    Street(City* city1, City* city2);

    City* getCity1() const;
    City* getCity2() const;
    void draw(QGraphicsScene& scene);
    void drawRed(QGraphicsScene& scene);
    double getLength() const;
private:
    City* _pCity1 = new City;
    City* _pCity2 = new City;
    double _length = 0.;
};

#endif // STREET_H
