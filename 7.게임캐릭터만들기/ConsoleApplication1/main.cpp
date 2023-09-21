#pragma once
#include "Character.h"
#include "Knife.h"
#include "Gun.h"
#include "Weapon.h"

int main() {
    Character character1(100, 1);
    Character character2(100, 1);

    Knife knife;
    Gun gun;

    character1.pickUpWeapon(&knife);
    character2.pickUpWeapon(&gun);


    character1.attack(character2, &knife);
    character2.attack(character1, &gun);

    return 0;
}