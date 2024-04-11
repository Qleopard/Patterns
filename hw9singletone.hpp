#include <iostream>
#define hw9singletone_hpp

using namespace std;

//Создаём два вида синглтона для двух видов заклинаний
class AttackSingleton {
public:
    // Доступ к значению синглтона
    static AttackSingleton& getInstance()
    {
        // Если переменная не задана, то её создаём
        if (!instance) {
            instance = new AttackSingleton();
        }
        return *instance;
    }
 
    // Вызов некоторой функции
    void someOperation()
    {
        std::cout
            << "Singleton is performing some operation."
            << std::endl;
    }
 
    // Удаление конструктора и оператора присваивания
    AttackSingleton(const AttackSingleton&) = delete;
    AttackSingleton& operator=(const AttackSingleton&) = delete;
 
private:
    //Приватный конструктор для избежания создания внешнего экземпляра
    AttackSingleton()
    {
        std::cout << "Attack Singleton created."
                  << std::endl;
    }
 
    // Приватный конструктор для избежания внешнего удаления
    ~AttackSingleton()
    {
        std::cout << "Attack Singleton destroyed."
                  << std::endl;
    }
 
    // Приватная статическая переменная
    static AttackSingleton* instance;
};
 
// Инициализация статической переменной на нулевой указатель
AttackSingleton* AttackSingleton::instance = nullptr;

class ShieldSingleton {
public:
    static ShieldSingleton& getInstance()
    {
        if (!instance) {
            instance = new ShieldSingleton();
        }
        return *instance;
    }
 
    void someOperation()
    {
        std::cout
            << "Singleton is performing some operation."
            << std::endl;
    }
 
    ShieldSingleton(const ShieldSingleton&) = delete;
    ShieldSingleton& operator=(const ShieldSingleton&) = delete;
 
private:
    ShieldSingleton()
    {
        std::cout << "Shield Singleton created."
                  << std::endl;
    }
 
    ~ShieldSingleton()
    {
        std::cout << "Shield Singleton instance destroyed."
                  << std::endl;
    }
 
    static ShieldSingleton* instance;
};
 
ShieldSingleton* ShieldSingleton::instance = nullptr;