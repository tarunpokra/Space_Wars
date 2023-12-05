#include "UseableItems.h"
#include <iostream>

// Implementations for UseableItem class 
UseableItem::UseableItem(const std::string& name, const std::string& description) : name(name), description(description) {}

UseableItem::~UseableItem() {
    std::cout << "Destructor for " << name << " called.\n";
}

// Implementations for HealingKit class
HealingKit::HealingKit() : UseableItem("Healing Kit", "Restores 10 HP.") {}

void HealingKit::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    character.setHP(character.getHP() + 10);
}

// Implementations for Warp class
Warp::Warp() : UseableItem("Warp", "Allows movement to another planet.") {}

void Warp::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using Warp can be added here
}

// Implementations for Stimpack class
Stimpack::Stimpack() : UseableItem("Stimpack", "Restores 25 HP.") {}

void Stimpack::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    character.setHP(character.getHP() + 25);
} 

// Implementations for Revitalizer class
Revitalizer::Revitalizer() : UseableItem("Revitalizer", "Restores 50 HP.") {}

void Revitalizer::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    character.setHP(character.getHP() + 50);
}

// Implementations for CombatEnhancers class
CombatEnhancers::CombatEnhancers() : UseableItem("Combat Enhancers", "Grants an extra action in combat.") {}

void CombatEnhancers::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using Combat Enhancers can be added here
}

// Implementations for BloodTransfusion class
BloodTransfusion::BloodTransfusion() : UseableItem("Blood Transfusion", "Restores 40 HP.") {}

void BloodTransfusion::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    character.setHP(character.getHP() + 40);
}

// Implementations for Nanomachines class
Nanomachines::Nanomachines() : UseableItem("Nanomachines", "Grants +2 WARP and Bounty Hunter's Eye.") {}

void Nanomachines::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using Nanomachines can be added here
}

// Implementations for KrakenEgg class
KrakenEgg::KrakenEgg() : UseableItem("Kraken Egg", "Restores 50 HP.") {}

void KrakenEgg::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    character.setHP(character.getHP() + 50);
}
