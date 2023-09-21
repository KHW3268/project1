#pragma once
#include <iostream>
#include <vector>
#include "weapon.h"


class Character {
public:
    std::string user_name;
    int hp;
    int level;
    std::vector<Weapon*> weapons;

    Character(std::string user_name, int hp, int level) : user_name(user_name),hp(hp), level(level) {}
    

    void pickUpWeapon(Weapon* weapon,Character& user);


    void attack(Character& target, Weapon* weapon);
};
