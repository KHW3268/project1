#pragma once
#include <iostream>
#include "weapon.h"
#include "Gun.h"


Gun::Gun() : Weapon("��", 10, 1) {};

void Weapon::attack() {
    std::cout << "�ѽ��" << std::endl;
}