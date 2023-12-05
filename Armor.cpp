//
//Armor stuff
// Armor.cpp
#include "Armor.h"
#include <iostream> 

// Implementations for Armor class
Armor::Armor(const std::string& name, int damageBonus, int hitBonus, int defenseBonus, const std::string& location)
    : name(name), damageBonus(damageBonus), hitBonus(hitBonus), defenseBonus(defenseBonus), location(location) {}

Armor::~Armor() {
    std::cout << "Destructor for " << name << " called.\n";
}

void Armor::equip(Character& character) const {
    std::cout << "Equipping " << name << ": Damage +" << damageBonus << ", Hit +" << hitBonus << ", Defense +" << defenseBonus << "\n";
    character.setDamage(character.getDamage() + damageBonus);
    character.setHit(character.getHit() + hitBonus);
    character.setArmor(character.getArmor() + defenseBonus);
}

// Implementations for each armor type
PowerArmor::PowerArmor() : Armor("Power Armor", 0, 1, 2, "Dock") {}

TerminatorArmor::TerminatorArmor() : Armor("Terminator Armor", 2, 0, 5, "Ice") {}

AllOrNothingArmor::AllOrNothingArmor() : Armor("All Or Nothing", 3, 3, -2, "Amusement") {}

TheWallArmor::TheWallArmor() : Armor("The Wall", -2, -2, 6, "Shop#3") {}

ScrapIronArmor::ScrapIronArmor() : Armor("Scrap Iron Armor", 0, 0, 1, "Desert") {}

ReactiveShield::ReactiveShield() : Armor("Reactive Shield", 1, 1, 3, "Desert") {}

FireResistantArmor::FireResistantArmor() : Armor("Fire Resistant Armor", 1, 1, 3, "Desert") {}

DeathsEmbraceArmor::DeathsEmbraceArmor() : Armor("Death's Embrace", 1, 1, 3, "Ice") {}

OilArmor::OilArmor() : Armor("Oil Armor", 0, 0, 3, "Fire") {}

TaxEvasionArmor::TaxEvasionArmor() : Armor("Tax Evasion", 0, 0, 2, "Toxic") {}

MeteoriteShield::MeteoriteShield() : Armor("Meteorite Shield", 0, 0, 8, "Asteroid") {}

MakeshiftForcefield::MakeshiftForcefield() : Armor("Makeshift Forcefield", 0, 0, 6, "Shop#2") {}
