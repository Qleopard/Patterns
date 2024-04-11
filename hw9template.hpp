#include <iostream>
#define hw9template_hpp

using namespace std;


template <typename N>
class Perfume {
public:
    Perfume(N p_Name, int p_HP) : Name{p_Name}, HP{p_HP} { }
    virtual void make() = 0;
protected:
    N Name;
    int HP;
};

template <typename N>
class AttackPerfume : public Perfume<N> {
public:
    AttackPerfume(N p_Name, int p_HP) : Perfume<N>{p_Name, p_HP} { };
    AttackPerfume(){};
    void make() {
        std::cout << "You've made an attack perfume.";
    }
};

template <typename N>
class ShieldPerfume : public Perfume<N> {
public:
    ShieldPerfume(N p_Name, int p_HP) : Perfume<N>{p_Name, p_HP} { };
    ShieldPerfume(){};
    void make() {
        std::cout << "You've made a shield perfume.";
    }
};

template <typename N>
class HomePerfume : public Perfume<N> {
public:
    HomePerfume(N p_Name, int p_HP) : Perfume<N>{p_Name, p_HP} { };
    HomePerfume(){};
    void make() {
        std::cout << "You've made a home perfume.";
    }
};

template <typename N>
class NotsorryPerfume : public Perfume<N> {
public:
    NotsorryPerfume(N p_Name, int p_HP) : Perfume<N>{p_Name, p_HP} { };
    NotsorryPerfume(){};
    void make() {
        std::cout << "You've made a not sorry perfume.";
    }
};
