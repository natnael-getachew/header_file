#include <string> 
using namespace std;
class Car
{
public:
    void setCarName(string); 
    void setCarPrice(int);
    void setCarColor(string);
    string getCarName();
    int getCarPrice();
    string getCarColor(); 
private:
    string carName;
    string carColor;
    int carPrice; 
}; 