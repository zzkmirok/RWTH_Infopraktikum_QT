#include "map.h"

//Add city pointer into cityList
void Map::addCity(City* newCity)
{

    //For test
    //newCity->setCityX(rand()%100);
    //newCity->setCityY(rand()%100);
    _cityList.push_back(newCity);
    City outputTest = **(_cityList.end()-1);
    qDebug() << QString("Test: The city added successfully is %1, the coordinate x: %2, y: %3.").arg(outputTest.getCityName()).arg(outputTest.getCityX()).arg(outputTest.getCityY());
}

/**
 * @brief Map::addStreet
 * @param newStreet
 * @return
 */
bool Map::addStreet(Street* newStreet)
{
    QVector<City*>::iterator iter1 = std::find(_cityList.begin(), _cityList.end(),findCity(newStreet->getCity1()->getCityName()));
    QVector<City*>::iterator iter2 = std::find(_cityList.begin(), _cityList.end(),findCity(newStreet->getCity2()->getCityName()));
    if((iter1 != _cityList.end())&&(iter2 != _cityList.end())){
        _streetList.push_back(newStreet);
        qDebug()<<QString("Street from %1 to %2 added, length is %3").arg((*iter1)->getCityName()).arg((*iter2)->getCityName()).arg(newStreet->getLength());
        return true;
    }
    else{
        qDebug()<<QString("Street not added");
        return false;
    }
}

/**
 * @brief Map::getCityList
 * @return
 */
QVector<City*> Map::getCityList() const
{
    return _cityList;
}

/**
 * @brief Map::draw
 * @param scene
 */
void Map::draw(QGraphicsScene& scene)
{
    for(auto iter = _cityList.begin(); iter != _cityList.end(); ++iter){
        qDebug()<<QString("The city in list is %1").arg((*iter)->getCityName());
        (*iter)->draw(scene);
    }
    for(auto iter = _streetList.begin();iter != _streetList.end(); ++iter){
        qDebug()<<QString("Drawing Street");
        (*iter)->draw(scene);
    }
    qDebug()<<"Drew all the cites!";
}

/**
 * @brief Map::findCity
 * @param cityName
 * @return city*
 */
City* Map::findCity(const QString cityName) const
{
    auto iter = std::find_if(_cityList.begin(), _cityList.end(),[cityName](City* pcity){return cityName == pcity->getCityName();});
    if(iter != _cityList.end()){
        return *iter;
    }
    return nullptr;
}


QVector<Street*> Map::getStreetList(const City* city) const
{
    QVector<Street*> resultStreetList;
    for(auto it = _streetList.begin(); it != _streetList.end(); it++){
        City* itCity1 = (*it)->getCity1();
        City* itCity2 = (*it)->getCity2();
        if((*city == *itCity1)||(*city == *itCity2)){
            resultStreetList.push_back(*it);
        }
    }
    if(resultStreetList.isEmpty()){
        qDebug()<<QString("City %1 has no connection to street").arg(city->getCityName());
    }
    return resultStreetList;
}

City* Map::getOppositeCity(const Street* street, const City* city) const
{
    City* city1 = street->getCity1();
    City* city2 = street->getCity2();
    if((*city == *city1) || (*city == *city2)){
        if(*city == *city1){
            return city2;
        }
        else{
            return city1;
        }
    }
    return nullptr;
}


double Map::getLength(const Street* street) const
{
    return street->getLength();
}
