#pragma once
#include <iostream>
#include <vector>
#include "weapon.h"
#include "Character.h"


void Character::pickUpWeapon(Weapon* weapon, Character& user) {
    weapons.push_back(weapon);
    user.user_name;
    std::cout << user.user_name << "가" << weapon->name << "을(를) 주웠습니다." << std::endl;
}


void Character::attack(Character& target, Weapon* weapon) {
    if (weapon->attackCount > 0) {
        target.hp -= weapon->damage;
        weapon->attackCount--;
        weapon->attack();
        target.user_name;
        std::cout << target.user_name << "이" << weapon->name << "으로 공격하여 상대의 HP가 " << target.hp << "가 되었습니다." << std::endl;
    }
    else {
        std::cout << weapon->name << "은(는) 더 이상 사용할 수 없습니다." << std::endl;
    }
}