#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Character {
protected:
    string name;
    double health;

    Character(const string& n, double h) : name(n), health(h) {}

public:
    virtual ~Character() = default;

    virtual double attack() const = 0;

    void takeDamage(double damage) {
        health -= damage;
    }

    const string& getName() const {
        return name;
    }

    double getHealth() const {
        return health;
    }
};

class Warrior : public Character {
public:
    Warrior(const string& n, double h) : Character(n, h) {}

    double attack() const override {
        cout << name << " swings a sword!\n";
        return 50.0;
    }
};

class Mage : public Character {
public:
    Mage(const string& n, double h) : Character(n, h) {}

    double attack() const override {
        cout << name << " casts a spell!\n";
        return 37.7;
    }
};

class Archer : public Character {
public:
    Archer(const string& n, double h) : Character(n, h) {}

    double attack() const override {
        cout << name << " fires an arrow!\n";
        return 36.5;
    }
};

int main() {
    Warrior warrior("Warrior", 100.0);
    Mage mage("Mage", 100.0);
    Archer archer("Archer", 100.0);

    vector<Character*> characters{&warrior, &mage, &archer};
    Character* target = characters.front();

    for (int round = 1; round <= 3; ++round) {
        cout << "Round " << round << ":\n";

        for (Character* attacker : characters) {
            const double damage = attacker->attack();
            target->takeDamage(damage);

            cout << target->getName() << "'s health: "
                 << target->getHealth() << "\n";
        }
    }

    return 0;
}