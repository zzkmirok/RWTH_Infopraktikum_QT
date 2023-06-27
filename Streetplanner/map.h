#ifndef MAP_H
#define MAP_H
#include "city.h"
#include "abstractmap.h"
#include <QList>
#include <QTextStream>
#include <algorithm>


class Map: public AbstractMap
{
public:
    Map() = default;

    /**
     * @brief addCity
     * @param newCity
     */
    void addCity(City* newCity) override;

    /**
     * @brief addStreet
     * @return
     */
    bool addStreet(Street*) override;

    /**
     * @brief findCity
     * @param cityName
     * @return
     */
    City* findCity(const QString cityName) const override;

    /**
     * @brief getStreetList
     * @param city
     * @return
     */
    QVector<Street*> getStreetList(const City* city) const override;
    /**
     * @brief getOppositeCity
     * @param street
     * @param city
     * @return
     */
    City* getOppositeCity(const Street* street, const City* city) const override;
    /**
     * @brief getLength
     * @param street
     * @return
     */
    double getLength(const Street* street) const override;
    /**
     * @brief draw
     * @param scene
     */
    void draw(QGraphicsScene& scene);
    /**
     * @brief getCityList
     * @return
     */
    QVector<City*> getCityList() const;
private:
    QVector<City*> _cityList;//可能需要new
    QVector<Street*> _streetList;
};

#endif // MAP_H
