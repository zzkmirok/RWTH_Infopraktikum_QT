#ifndef CITY_H
#define CITY_H
#include <QString>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>


class City
{
public:
    City();
    City(QString name, int x, int y);//Konstruktor
    ~City();
    void draw(QGraphicsScene& scene);
    //Ergaenzen bei Bedarf die Klasse City um entsprechende Zugriffsfunktionen.
    void setCityName(const QString& cityName);
    void setCityX(const int& X);
    void setCityY(const int& Y);

    QString getCityName() const;
    int getCityX() const;
    int getCityY() const;

    bool operator==(const City& comparedCity) const;

private:
    QString _name;
    int _x;
    int _y;
};

#endif // CITY_H
