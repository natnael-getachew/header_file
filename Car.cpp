#include <iostream>
#include "Car.h"
using namespace std;

void Car::setCarName(string name)
{
    carName = name;
}
void Car::setCarPrice(int price)
{
    carPrice = price;
}
void Car::setCarColor(string color)
{
    carColor = color;
}
string Car::getCarName()
{
    return carName;
}
int Car::getCarPrice()
{
    return carPrice;
}
string Car::getCarColor()
{
    return carColor;
}