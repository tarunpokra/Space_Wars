//#pragma once
#pragma once
#include "Character.h"

// Base class for all useable items
class UseableItem {
public:
    UseableItem(const std::string& name, const std::string& description);
    virtual void use(Character& character) const = 0;
    virtual ~UseableItem();

protected:
    std::string name;
    std::string description;
};

// Healing Kit: +10 HP
class HealingKit : public UseableItem {
public:
    HealingKit();
    void use(Character& character) const override;
};

// Warp: +1 MOVE
class Warp : public UseableItem {
public:
    Warp();
    void use(Character& character) const override;
};

// Stimpack: +25 HP
class Stimpack : public UseableItem {
public:
    Stimpack();
    void use(Character& character) const override;
};

// Revitalizer: +50 HP
class Revitalizer : public UseableItem {
public:
    Revitalizer();
    void use(Character& character) const override;
};

// Combat Enhancers: +1 Action in combat
class CombatEnhancers : public UseableItem {
public:
    CombatEnhancers();
    void use(Character& character) const override;
};

// Blood Transfusion: +40 HP 
class BloodTransfusion : public UseableItem {
public:
    BloodTransfusion();
    void use(Character& character) const override;
};

// Nanomachines: +2 WARP, +BOUNTY HUNTER'S EYE
class Nanomachines : public UseableItem {
public:
    Nanomachines();
    void use(Character& character) const override;
};

// Kraken Egg: +50 HP
class KrakenEgg : public UseableItem {
public:
    KrakenEgg();
    void use(Character& character) const override;
};
