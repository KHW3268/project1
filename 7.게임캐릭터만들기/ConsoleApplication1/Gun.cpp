#pragma once
#include <iostream>
#include "weapon.h"
#include "Gun.h"


Gun::Gun() : Weapon("ÃÑ", 10, 1) {};

void Weapon::attack() {
    std::cout << "ÃÑ½î±â" << std::endl;
}