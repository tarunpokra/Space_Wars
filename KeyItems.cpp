#include "KeyItems.h"
#include <iostream>

// Implementations for KeyItem class
KeyItem::KeyItem(const std::string& name, const std::string& description) : name(name), description(description) {}

KeyItem::~KeyItem() {
    std::cout << "Destructor for " << name << " called.\n";
}

// Implementations for Flashlight class
Flashlight::Flashlight() : KeyItem("Flashlight", "Found in Dock, used in Desert/Water") {}

void Flashlight::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Flashlight can be added here
}

// Implementations for DoorDeJammer class
DoorDeJammer::DoorDeJammer() : KeyItem("Door-De-Jammer", "Found in Dock, used in Desert/Fire") {}

void DoorDeJammer::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n"; 
    // Additional logic for using the Door-De-Jammer can be added here
}
// Implementations for AmazonPrimeMembership class
AmazonPrimeMembership::AmazonPrimeMembership() : KeyItem("Amazon Prime Membership", "Found in Dock, used in Shop (20% Discount)") {}

void AmazonPrimeMembership::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Amazon Prime Membership can be added here
}

// Implementations for DeepSeaAttachments class
DeepSeaAttachments::DeepSeaAttachments() : KeyItem("Deep Sea Attachments", "Found in Shop#1, used in Water/Ice") {}

void DeepSeaAttachments::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Deep Sea Attachments can be added here
}

// Implementations for TreasureMap class
TreasureMap::TreasureMap() : KeyItem("Treasure Map", "Found in Water, used in Water") {}

void TreasureMap::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Treasure Map can be added here
}

// Implementations for PirateEye class
PirateEye::PirateEye() : KeyItem("Pirate's Eye", "Found in Water, used in Asteroid") {}

void PirateEye::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Pirate's Eye can be added here
}

// Implementations for ErrorCode class
ErrorCode::ErrorCode() : KeyItem("Error Code", "Found in Shop#2, used in Toxic") {}

void ErrorCode::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Error Code can be added here
}

// Implementations for BountyHuntersEye class
BountyHuntersEye::BountyHuntersEye() : KeyItem("Bounty Hunter's Eye", "Found in Fire, used in Asteroid") {}

void BountyHuntersEye::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Bounty Hunter's Eye can be added here
}

// Implementations for SmokeField class
SmokeField::SmokeField() : KeyItem("Smoke Field", "Found in Fire, used in Fire") {}

void SmokeField::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Smoke Field can be added here
}

// Implementations for LoadedDice class
LoadedDice::LoadedDice() : KeyItem("Loaded Dice", "Found in Water, used in Amusement") {}

void LoadedDice::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Loaded Dice can be added here
}

// Implementations for AnimalCommunicationDevice class
AnimalCommunicationDevice::AnimalCommunicationDevice() : KeyItem("Animal Communication Device", "Found in Water, used in Ice") {}

void AnimalCommunicationDevice::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Animal Communication Device can be added here
}

// Implementations for DecontaminationSuit class
DecontaminationSuit::DecontaminationSuit() : KeyItem("Decontamination Suit", "Found in Desert, used in Ice") {}

void DecontaminationSuit::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Decontamination Suit can be added here
}

// Implementations for LongRangeScanner class
LongRangeScanner::LongRangeScanner() : KeyItem("Long Range Scanner", "Found in Shop#1, used in Ice/Water") {}

void LongRangeScanner::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Long Range Scanner can be added here
}

// Implementations for HackingSoftware class
HackingSoftware::HackingSoftware() : KeyItem("Hacking Software", "Found in Fire, used in Fire") {}

void HackingSoftware::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Hacking Software can be added here
}

// Implementations for CircusWinnerTicket class
CircusWinnerTicket::CircusWinnerTicket() : KeyItem("Circus Winner Ticket", "Found in Amusement, used in Amusement") {}

void CircusWinnerTicket::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Circus Winner Ticket can be added here
}

// Implementations for AmazonGiftCard class
AmazonGiftCard::AmazonGiftCard() : KeyItem("Amazon Gift Card", "Found in Toxic, used in Shop") {}

void AmazonGiftCard::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Amazon Gift Card can be added here
}

// Implementations for AdvancedManoeuvrabilitySystems class
AdvancedManoeuvrabilitySystems::AdvancedManoeuvrabilitySystems() : KeyItem("Advanced Manoeuvrability Systems", "Found in Shop#3, used in Asteroid") {}

void AdvancedManoeuvrabilitySystems::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Advanced Manoeuvrability Systems can be added here
}

// Implementations for ResearchBaseLocation class
ResearchBaseLocation::ResearchBaseLocation() : KeyItem("Research Base Location", "Found in Ice, used in Ice") {}

void ResearchBaseLocation::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Research Base Location can be added here
}

// Implementations for AsteroidKeyA class
AsteroidKeyA::AsteroidKeyA() : KeyItem("Asteroid Key-A", "Found in Dock, used in Asteroid") {}

void AsteroidKeyA::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Asteroid Key-A can be added here
}

// Implementations for AsteroidKeyB class
AsteroidKeyB::AsteroidKeyB() : KeyItem("Asteroid Key-B", "Found in Desert/Water, used in Asteroid") {}

void AsteroidKeyB::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Asteroid Key-B can be added here
}

// Implementations for AsteroidKeyC class
AsteroidKeyC::AsteroidKeyC() : KeyItem("Asteroid Key-C", "Found in Ice/Fire, used in Asteroid") {}

void AsteroidKeyC::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Asteroid Key-C can be added here
}

// Implementations for AsteroidKeyD class
AsteroidKeyD::AsteroidKeyD() : KeyItem("Asteroid Key-D", "Found in Toxic/Amusement, used in Asteroid") {}

void AsteroidKeyD::use(Character& character) const {
    std::cout << "Using " << name << ": " << description << "\n";
    // Additional logic for using the Asteroid Key-D can be added here
}
