#include <iostream>
#include "IPrinter.h"
#include "LaserJetPrinter.h"
#include "EpsonPrinter.h"

using namespace std;

int main()
{
    LaserJetPrinter* laserPrinter = new LaserJetPrinter("LaserJet");
    laserPrinter->TurnOn();
    laserPrinter->Print();
    laserPrinter->TurnOff();

    cout << "==============" << endl;

    EpsonPrinter* epsonPrinter = new EpsonPrinter("Epson");
    epsonPrinter->TurnOn();
    epsonPrinter->Print();
    epsonPrinter->Print("welcome to class");
    epsonPrinter->Print(1990);
    epsonPrinter->TurnOff();
}
