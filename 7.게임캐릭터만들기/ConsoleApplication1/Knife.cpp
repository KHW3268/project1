#pragma once
#include <iostream>
#include "weapon.h"
#include "Knife.h"

Knife::Knife() : Weapon("Ä®", 5, 3) {};

void Weapon::attack() {
    std::cout << "Âî¸£±â" << std::endl;
}