//#pragma once
#pragma once
#include "Character.h"
#include <string> 

class KeyItem {
public:
    KeyItem(const std::string& name, const std::string& description);
    virtual void use(Character& character) const = 0;
    virtual ~KeyItem();

protected:
    std::string name;
    std::string description;
};

class Flashlight : public KeyItem {
public:
    Flashlight();
    void use(Character& character) const override;
};

class DoorDeJammer : public KeyItem {
public:
    DoorDeJammer();
    void use(Character& character) const override;
};

class AmazonPrimeMembership : public KeyItem {
public:
    AmazonPrimeMembership();
    void use(Character& character) const override;
};

class DeepSeaAttachments : public KeyItem {
public:
    DeepSeaAttachments();
    void use(Character& character) const override;
};

class TreasureMap : public KeyItem {
public:
    TreasureMap();
    void use(Character& character) const override;
};

class PirateEye : public KeyItem {
public:
    PirateEye();
    void use(Character& character) const override;
};

class ErrorCode : public KeyItem {
public:
    ErrorCode();
    void use(Character& character) const override;
};

class BountyHuntersEye : public KeyItem {
public:
    BountyHuntersEye();
    void use(Character& character) const override;
};

class SmokeField : public KeyItem {
public:
    SmokeField();
    void use(Character& character) const override;
};

class LoadedDice : public KeyItem {
public:
    LoadedDice();
    void use(Character& character) const override;
};

class AnimalCommunicationDevice : public KeyItem {
public:
    AnimalCommunicationDevice();
    void use(Character& character) const override;
};

class DecontaminationSuit : public KeyItem {
public:
    DecontaminationSuit();
    void use(Character& character) const override;
};

class LongRangeScanner : public KeyItem {
public:
    LongRangeScanner();
    void use(Character& character) const override;
};

class HackingSoftware : public KeyItem {
public:
    HackingSoftware();
    void use(Character& character) const override;
};

class CircusWinnerTicket : public KeyItem {
public:
    CircusWinnerTicket();
    void use(Character& character) const override;
};

class AmazonGiftCard : public KeyItem {
public:
    AmazonGiftCard();
    void use(Character& character) const override;
};

class AdvancedManoeuvrabilitySystems : public KeyItem {
public:
    AdvancedManoeuvrabilitySystems();
    void use(Character& character) const override;
};

class ResearchBaseLocation : public KeyItem {
public:
    ResearchBaseLocation();
    void use(Character& character) const override;
};

class AsteroidKeyA : public KeyItem {
public:
    AsteroidKeyA();
    void use(Character& character) const override;
};

class AsteroidKeyB : public KeyItem {
public:
    AsteroidKeyB();
    void use(Character& character) const override;
};

class AsteroidKeyC : public KeyItem {
public:
    AsteroidKeyC();
    void use(Character& character) const override;
};

class AsteroidKeyD : public KeyItem {
public:
    AsteroidKeyD();
    void use(Character& character) const override;
};
