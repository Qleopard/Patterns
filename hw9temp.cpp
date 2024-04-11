#include <iostream>
#include "hw9template.hpp"

using namespace std;

//Разливаем наш парфюм, позволяя делать этикетки разного типа (численные, строковые и т.д.)
int main()
{
    AttackPerfume Krasn("Krasnaya_Moskva", 15);    
    Krasn.make();
    return 0;
}