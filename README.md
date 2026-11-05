# duel-game

## Классы

**Fighter** - состояние бойца: текущее и максимальное HP (private).
  - Fighter(int maxHp) - инициализирует полным здоровьем.
  - void takeDamage(int amount) - уменьшает HP, не ниже 0. amount <= 0
    игнорируется.
  - void heal(int amount) - увеличивает HP, не выше максимума. amount <= 0
    игнорируется.
  - int hp() const, bool alive() const - чтение состояния (HP и жив ли боец) без изменения.

**Game** - создание двух Fighter (герой 20/20, противник 24/24) и счётчикв
  зелий (2). run() читает команды и ведёт бой. printState() печатает
  STATE H E P (HP hero, HP enemy, potion amount).


## Команды

ATTACK, HEAL, STATUS, QUIT - точное совпадение, верхний регистр.
Любая другая строка (включая пустую, пробелы, другой регистр) - ERROR.
После WIN, LOSE, BYE программа завершается. при EOF - выход молча.


## Сборка

g++ -std=c++17 -Wall -Wextra -Wpedantic \
    main.cpp Fighter.cpp Game.cpp -o game
