#pragma once
#include "Fighter.h"

class Game {
    private:
    void printState() const;
    Fighter hero_;
    Fighter enemy_;
    int potions_;

    public:
    Game();
    void run();
};