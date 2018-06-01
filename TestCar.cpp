#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car car1();
    car1.setCarName("Toyota, Corola"); 
    car1.setCarPrice(400000);
    car1.setCarColor("Black");

    cout << "The car of choice is a " << car1.getCarColor() << " " << car1.getCarName() << " which costs "
        << car1.getCarPrice() << end1;     
}
