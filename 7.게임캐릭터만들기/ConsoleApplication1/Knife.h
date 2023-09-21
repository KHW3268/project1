#pragma once
#include <iostream>
#include "weapon.h"

class Knife : public Weapon {
public:
    Knife();

    void attack() override;
};