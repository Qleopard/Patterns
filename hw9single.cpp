#include <iostream>
#include "hw9singletone.hpp"

using namespace std;

//Код запуска нашей парфюмерной фабрики
int main()
{
    // Доступ и использование
    AttackSingleton& Krasnaya_Moskva = AttackSingleton::getInstance();
    Krasnaya_Moskva.someOperation();

    ShieldSingleton& Pot_Olenya = ShieldSingleton::getInstance();
    Pot_Olenya.someOperation();
 
    // Задать другие переменные не получится, можно это интегрировать в основной класс, но мне лень)
 
    return 0;
}