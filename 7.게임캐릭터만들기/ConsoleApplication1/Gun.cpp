#pragma once
#include <iostream>
#include "weapon.h"
#include "Gun.h"


Gun::Gun() : Weapon("��", 10, 20000) {};

void Gun::attack() {
    std::cout << "�ѽ��" << std::endl;
}