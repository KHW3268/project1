#include <iostream>
#include <vector>
#include <string>

// 무기 클래스
class Weapon {
public:
    std::string name;
    int damage;
    int attackCount;

    Weapon(std::string name, int damage, int attackCount) : name(name), damage(damage), attackCount(attackCount) {}

    virtual void attack() = 0; // 순수 가상 함수
};

// 칼 클래스
class Knife : public Weapon {
public:
    Knife() : Weapon("칼", 5, 3) {}

    void attack() override {
        std::cout << "찌르기" << std::endl;
    }
};

// 총 클래스
class Gun : public Weapon {
public:
    Gun() : Weapon("총", 10, 1) {}

    void attack() override {
        std::cout << "총쏘기" << std::endl;
    }
};

// 캐릭터 클래스
class Character {
public:
    int hp;
    int level;
    std::vector<Weapon*> weapons;

    Character(int hp, int level) : hp(hp), level(level) {}

    // 무기 줍기 메소드
    void pickUpWeapon(Weapon* weapon) {
        weapons.push_back(weapon);
        std::cout << weapon->name << "을(를) 주웠습니다." << std::endl;
    }

    // 공격하기 메소드
    void attack(Character& target, Weapon* weapon) {
        if (weapon->attackCount > 0) {
            target.hp -= weapon->damage;
            weapon->attackCount--;
            weapon->attack();
            std::cout << weapon->name << "으로 공격하여 상대의 HP가 " << target.hp << "가 되었습니다." << std::endl;
        }
        else {
            std::cout << weapon->name << "은(는) 더 이상 사용할 수 없습니다." << std::endl;
        }
    }
};

int main() {
    // 캐릭터 생성
    Character character1(100, 1);
    Character character2(100, 1);

    // 무기 생성
    Knife knife;
    Gun gun;

    // 무기 줍기
    character1.pickUpWeapon(&knife);
    character2.pickUpWeapon(&gun);

    // 공격하기
    character1.attack(character2, &knife);
    character2.attack(character1, &gun);

    return 0;
}
