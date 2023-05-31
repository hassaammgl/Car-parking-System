#include <iostream>
using namespace std;

class Cars
{
private:
    int totalSpaceAvailable;
    int totalCarsCapacity;
    int totalBikesCapacity;
    int totalRickshawCapacity;
    int category;
    int Check;
    string Password, Name;

public:
    Cars();
    void initialization();
    bool authenticate();
    void admin();
    void custumer();
    void cars();
    void bikes();
    void rickShaws();
};
