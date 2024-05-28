# RPG Hra

Tento projekt je jednoduchá RPG hra v jazyce C++.

## Třídy

### Character
- Základní třída pro všechny postavy.
- Metody: `getName()`, `action()`, `takeDamage()`

### Item
- Reprezentuje předmět.
- Metody: `getName()`

### Player
- Dědí z `Character`.
- Metody: `action()`, `addItem()`, `takeDamage()`, `getDamage()`, `getHealth()`

### Enemy
- Dědí z `Character`.
- Metody: `action()`, `takeDamage()`, `getDamage()`, `getHealth()`

### Warrior
- Dědí z `Player`.

### Wizard
- Dědí z `Player`.

### Monster
- Dědí z `Enemy`.

