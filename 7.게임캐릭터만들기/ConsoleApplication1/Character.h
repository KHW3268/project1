#pragma once
#include <iostream>
#include <vector>
#include "weapon.h"


class Character {
public:
    int hp;
    int level;
    std::vector<Weapon*> weapons;

    Character(int hp, int level) : hp(hp), level(level) {}


    void pickUpWeapon(Weapon* weapon);


    void attack(Character& target, Weapon* weapon);
};
