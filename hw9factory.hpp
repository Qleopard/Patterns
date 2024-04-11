#include <iostream>
#define hw9factory_hpp

using namespace std;


class Perfume {
public:
    virtual void make() = 0;
};

class AttackPerfume : public Perfume {
public:
    void make() override {
        std::cout << "You've made an attack perfume.\n";
    }
};

class ShieldPerfume : public Perfume {
public:
    void make() override {
        std::cout << "You've made an shield perfume.\n";
    }
};

class HomePerfume : public Perfume {
public:
    void make() override {
        std::cout << "You've made an home perfume.\n";
    }
};

class NotsorryPerfume : public Perfume {
public:
    void make() override {
        std::cout << "You've made an not sorry perfume.\n";
    }
};

class NovayaZarya {
public:
    virtual Perfume* createPerfume() = 0;
};

class AttackFactory : public NovayaZarya {
public:
    Perfume* createPerfume() override
    {
        return new AttackPerfume();
    }
};

class ShieldFactory : public NovayaZarya {
public:
    Perfume* createPerfume() override
    {
        return new ShieldPerfume();
    }
};

class HomeFactory : public NovayaZarya {
public:
    Perfume* createPerfume() override
    {
        return new HomePerfume();
    }
};

class NotsorryFactory : public NovayaZarya {
public:
    Perfume* createPerfume() override
    {
        return new NotsorryPerfume();
    }
};