//#pragma once
// Armor.h
#pragma once
#include "Character.h"

// Base class for all armor types
class Armor {
public:
    Armor(const std::string& name, int damageBonus, int hitBonus, int defenseBonus, const std::string& location);
    virtual void equip(Character& character) const;
    virtual ~Armor();

protected:
    std::string name;
    int damageBonus;
    int hitBonus;
    int defenseBonus;
    std::string location;
};

class PowerArmor : public Armor {
public:
    PowerArmor();
};

class TerminatorArmor : public Armor {
public:
    TerminatorArmor();
};

class AllOrNothingArmor : public Armor {
public:
    AllOrNothingArmor();
};

class TheWallArmor : public Armor {
public:
    TheWallArmor();
};

class ScrapIronArmor : public Armor {
public:
    ScrapIronArmor();
};

class ReactiveShield : public Armor {
public:
    ReactiveShield();
};

class FireResistantArmor : public Armor {
public:
    FireResistantArmor();
};

class DeathsEmbraceArmor : public Armor {
public:
    DeathsEmbraceArmor();
};

class OilArmor : public Armor {
public:
    OilArmor();
};

class TaxEvasionArmor : public Armor {
public:
    TaxEvasionArmor();
};

class MeteoriteShield : public Armor {
public:
    MeteoriteShield();
};

class MakeshiftForcefield : public Armor {
public:
    MakeshiftForcefield();
};
