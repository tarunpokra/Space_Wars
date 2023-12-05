//#pragma once
#pragma once
#include "Character.h"
#include <string>

// Base class for all weapons
class Weapon {
public:
    Weapon(const std::string& name, int damage, int hit, int defense, const std::string& location);
    virtual void use(Character& character) const = 0;
    virtual ~Weapon();

protected:
    std::string name;
    int damage;
    int hit;
    int defense;
    std::string location;
};

// Worm's Tooth
class WormsTooth : public Weapon {
public:
    WormsTooth();
    void use(Character& character) const override;
};

// Fire Sword
class FireSword : public Weapon {
public:
    FireSword();
    void use(Character& character) const override;
};

// Spiked Shield
class SpikedShield : public Weapon {
public:
    SpikedShield();
    void use(Character& character) const override;
};

// Narwhal's Horn
class NarwhalsHorn : public Weapon {
public:
    NarwhalsHorn();
    void use(Character& character) const override;
};

// Gatling Gun
class GatlingGun : public Weapon {
public:
    GatlingGun();
    void use(Character& character) const override;
};

// Chainsaw
class Chainsaw : public Weapon {
public:
    Chainsaw();
    void use(Character& character) const override;
};

// Winner's Choice
class WinnersChoice : public Weapon {
public:
    WinnersChoice();
    void use(Character& character) const override;
};

// Plasma Rifle
class PlasmaRifle : public Weapon {
public:
    PlasmaRifle();
    void use(Character& character) const override;
};

// Chain Axe
class ChainAxe : public Weapon {
public:
    ChainAxe();
    void use(Character& character) const override;
};

// Scrap Iron Pistol
class ScrapIronPistol : public Weapon {
public:
    ScrapIronPistol();
    void use(Character& character) const override;
};

// Fist
class Fist : public Weapon {
public:
    Fist();
    void use(Character& character) const override;
};

// Power Sword
class PowerSword : public Weapon {
public:
    PowerSword();
    void use(Character& character) const override;
};

// Blood Thirster
class BloodThirster : public Weapon {
public:
    BloodThirster();
    void use(Character& character) const override;
};

// Oil Sword
class OilSword : public Weapon {
public:
    OilSword();
    void use(Character& character) const override;
};

// Capitalism
class Capitalism : public Weapon {
public:
    Capitalism();
    void use(Character& character) const override;
};

// Revolution 
class Revolution : public Weapon {
public:
    Revolution();
    void use(Character& character) const override;
};

// Meteorite Blade
class MeteoriteBlade : public Weapon {
public:
    MeteoriteBlade();
    void use(Character& character) const override;
};

