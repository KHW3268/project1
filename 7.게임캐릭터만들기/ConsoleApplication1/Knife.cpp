#pragma once
#include <iostream>
#include "weapon.h"
#include "Knife.h"

Knife::Knife() : Weapon("Į", 5, 3) {};

void Weapon::attack() {
    std::cout << "���" << std::endl;
}