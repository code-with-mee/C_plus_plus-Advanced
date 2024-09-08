#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motobike.h"

using namespace std;

int main()
{
    
    //Vehicle* vehicle = new Vehicle(); not allow
    Car* car = new Car("BMW");
    car->StartEngine();
    car->StopEngine();

    Motobike* motoBike = new Motobike("Royal");
    motoBike->StartEngine();
    motoBike->StopEngine();
}