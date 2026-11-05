#pragma once

class Fighter {
    private:
    int hp_;
    int maxHp_;

    public:
    Fighter(int maxHp);
    void takeDamage(int amount);
    void heal(int amount);
    int hp() const;
    bool alive() const;
}