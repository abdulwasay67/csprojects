#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Make a base "template" class Character with a name and health. Every character type must have its own attack() that returns
how much damage it deals, but the base class doesn't say how.
Make three types: Warrior, Mage, Archer. Each has its own damage number (you pick them), and each prints a different attack message.
In the base class, add one shared method takeDamage(...) that reduces health. It works the same for every type, so write it once.
Make a list of pointers to characters holding one of each type.
Run 3 rounds. In each round, every character attacks the first character in the list, using the damage its own attack() returns. 
Print the target's health after each hit.*/

class Abstracttemplate {
public:
    virtual ~Abstracttemplate() = default;

    virtual double attack() const = 0;

    virtual double health() const = 0;


    double attackdamage() const {
        return attack();
    }

    double takedamage() const {
        return health();
    }

};

class Character {
protected:
    string name;
    double health;

    Character(string n, double h) : name(n), health(h) {}

public:
    virtual double attack() const = 0;

    void takeDamage(double dmg) {
        health -= dmg;
    }

    double getHealth() const { return health; }
};

class Warrior : public Character {
    double attackValue;
public:
    Warrior(string n, double h, double a) : Character(n, h), attackValue(a) {}
    double attack() const override { return attackValue; }
};

class Mage : public Character {
    double attackValue;
public:
    Mage(string n, double h, double a) : Character(n, h), attackValue(a) {}
    double attack() const override { return attackValue; }
};

class Archer : public Character {
    double attackValue;
public:
    Archer(string n, double h, double a) : Character(n, h), attackValue(a) {}
    double attack() const override { return attackValue; }
};

int main(){
    Warrior W(w, 100, 50.0);
    Mage M(m, 100, 37.7);
    Archer A(a, 100, 36.5 );
    

}