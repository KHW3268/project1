#pragma once
#include <iostream>
#include "weapon.h"
#include "Knife.h"

Knife::Knife() : Weapon("Į", 5, 20000) {};

void Knife::attack() {
    std::cout << "���" << std::endl;
}