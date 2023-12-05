#pragma once
#include <iostream>
#include <string>

class Character {
public:
    Character(const std::string& name);

    // Getters
    const std::string& getName() const;
    int getHP() const;
    int getArmor() const;
    int getDamage() const;
    int getHit() const;
    int getMoney() const;

    // Setters
    void setHP(int hp);
    void setArmor(int armor);
    void setDamage(int damage);
    void setHit(int hit);
    void setMoney(int money);

    // Other functions
    void displayInfo() const;

private:
    std::string name;
    int hp;
    int armor;
    int damage;
    int hit;
    int money;
};
