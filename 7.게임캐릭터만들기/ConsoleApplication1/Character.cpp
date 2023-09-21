#pragma once
#include <iostream>
#include <vector>
#include "weapon.h"
#include "Character.h"


void Character::pickUpWeapon(Weapon* weapon) {
    weapons.push_back(weapon);
    std::cout << weapon->name << "��(��) �ֿ����ϴ�." << std::endl;
}


void Character::attack(Character& target, Weapon* weapon) {
    if (weapon->attackCount > 0) {
        target.hp -= weapon->damage;
        weapon->attackCount--;
        weapon->attack();
        std::cout << weapon->name << "���� �����Ͽ� ����� HP�� " << target.hp << "�� �Ǿ����ϴ�." << std::endl;
    }
    else {
        std::cout << weapon->name << "��(��) �� �̻� ����� �� �����ϴ�." << std::endl;
    }
}