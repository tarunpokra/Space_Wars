#include <iostream>
#include "KeyItems.h"
#include "UseableItems.h"
#include "Armor.h" 
#include "Weapons.h"

int main() {
    // Example instances of derived classes
    KeyItem* keyItem1 = new ConcreteKeyItem("Golden Key", "A mysterious golden key.", "Mansion");
    KeyItem* keyItem2 = new ConcreteKeyItem("Silver Key", "An ancient silver key.", "Castle");

    Armor* allOrNothing = new ConcreteArmor("All or Nothing", "Damage: +3, Hit: +3, Defense: -2", "Amusement");
    Armor* theWall = new ConcreteArmor("The Wall", "Damage: -1, Hit: +2, Defense: +5", "Fire");

    Weapon* wormstooth = new ConcreteWeapon("Worm's Tooth", "Damage: +2, Hit: +1, Defense: +0", "Desert");
    Weapon* firesword = new ConcreteWeapon("Fire Sword", "Damage: +4, Hit: +3, Defense: +0", "Fire");

    // Display details
    keyItem1->displayDetails();
    keyItem2->displayDetails();

    allOrNothing->displayDetails();
    theWall->displayDetails();

    wormstooth->displayDetails();
    firesword->displayDetails(); 

    // Remember to delete dynamically allocated memory
    delete keyItem1;
    delete keyItem2;
    delete allOrNothing;
    delete theWall;
    delete wormstooth;
    delete firesword;

    return 0;
}
