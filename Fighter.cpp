#include <iostream>
#include <Fighter.h>

Fighter::Fighter(int maxHp) 
    : hp_(maxHp), maxHp_(maxHp) {}

void Fighter::takeDamage(int amount) {
    if (amount <= 0) return;
    hp_ -= amount;
    if (hp_ < 0) hp_ = 0;
}

void Fighter::heal(int amount) {
    if (amount <= 0) return;
    hp_ += amount;
    if (hp_ > maxHp_) hp_ = maxHp_;
}

int Fighter::hp() const {
    return hp_;
}

bool Fighter::alive() const {
    return hp_ > 0;
}