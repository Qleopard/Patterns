#include <iostream>
#include "hw9factory.hpp"

using namespace std;

//Код запуска нашей парфюмерной фабрики
int main()
{
    NovayaZarya* Schit = new ShieldFactory();
    NovayaZarya* Atakka = new AttackFactory();
    Perfume* Krasnaya_Moskva = Schit->createPerfume();
    Perfume* Pot_Olenya = Atakka->createPerfume();
    Krasnaya_Moskva->make();
    Pot_Olenya->make();
    delete Krasnaya_Moskva;
    delete Pot_Olenya;
    std::cout << "Fabric is closed. Apartments are building here.";
    return 0;
}