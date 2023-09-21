#pragma once
#include <iostream>
#include "weapon.h"
#include "Gun.h"


Gun::Gun() : Weapon("ÃÑ", 10, 20000) {};

void Gun::attack() {
    std::cout << "ÃÑ½î±â" << std::endl;
}