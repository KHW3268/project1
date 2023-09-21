#pragma once
#include <iostream>
#include "weapon.h"
#include "Knife.h"

Knife::Knife() : Weapon("Ä®", 5, 20000) {};

void Knife::attack() {
    std::cout << "Âî¸£±â" << std::endl;
}