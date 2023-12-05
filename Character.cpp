#include "Character.h"

Character::Character(const std::string& name)
    : name(name), hp(100), armor(10), damage(2), hit(0), money(20) {}

const std::string& Character::getName() const {
    return name;
}

int Character::getHP() const {
    return hp;
}

int Character::getArmor() const {
    return armor;
}

int Character::getDamage() const {
    return damage;
}

int Character::getHit() const {
    return hit;
}

int Character::getMoney() const {
    return money;
}

void Character::setHP(int hp) {
    this->hp = hp;
}

void Character::setArmor(int armor) {
    this->armor = armor;
}

void Character::setDamage(int damage) {
    this->damage = damage;
}

void Character::setHit(int hit) {
    this->hit = hit;
}

void Character::setMoney(int money) {
    this->money = money;
}

void Character::displayInfo() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "HP: " << hp << "\n";
    std::cout << "Armor: " << armor << "\n";
    std::cout << "Damage: " << damage << "\n";
    std::cout << "Hit: " << hit << "\n";
    std::cout << "Money: " << money << "\n";
}
