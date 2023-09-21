#pragma once
#include "Character.h"
#include "Knife.h"
#include "Gun.h"
#include "Weapon.h"

int main() {
    Character character1("character1", 100, 1);
    Character character2("character2", 100, 1);

    Knife knife;
    Gun gun;

    character1.pickUpWeapon(&knife, character2);
    character2.pickUpWeapon(&gun, character1);

    while (character1.hp > 0 && character2.hp > 0, knife.attackCount > 0 && gun.attackCount > 0) {
        character1.attack(character2, &knife); 
        if (character2.hp <= 0) {
            std::cout << "character2가 승리했습니다!" << std::endl;
            break;
        }

        character2.attack(character1, &gun);
        if (character1.hp <= 0) {
            std::cout << "character1이 승리했습니다!" << std::endl;
            break;
        }
    }

    return 0;
}