#pragma once
#include <iostream>
#include "weapon.h"


class Gun : public Weapon {
public:
    Gun();

    void attack() override;
};