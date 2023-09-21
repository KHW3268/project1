#pragma once

class Weapon {
public:
    std::string name;
    int damage;
    int attackCount;

    Weapon(std::string name, int damage, int attackCount) : name(name), damage(damage), attackCount(attackCount) {};

    virtual void attack() = 0;
};