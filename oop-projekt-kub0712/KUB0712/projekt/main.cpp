#include "class.h"
#include <iostream>

int main() {
    // Vytvoření hráčů
    Warrior warrior("Warrior 1");
    Wizard wizard("Wizard 1");

    // Vytvoření nepřátel
    Monster monster1("Monster 1", 10, 50);
    Monster monster2("Monster 2", 15, 60);

    // Přidání předmětů do inventáře hráčů
    Item sword("Sword");
    Item wand("Magic Wand");
    warrior.addItem(sword);
    wizard.addItem(wand);

    // Výpis jmen hráčů a nepřátel
    std::cout << "Warrior name: " << warrior.getName() << std::endl;
    std::cout << "Wizard name: " << wizard.getName() << std::endl;
    std::cout << "Monster 1 name: " << monster1.getName() << std::endl;
    std::cout << "Monster 2 name: " << monster2.getName() << std::endl;

    // První souboj: Warrior vs Monster 1
    std::cout << "\n--- Warrior vs Monster 1 ---\n";
    warrior.action();
    monster1.action();
    warrior.takeDamage(monster1.getDamage());
    std::cout << "Warrior health after Monster 1 attack: " << warrior.getHealth() << std::endl;
    monster1.takeDamage(warrior.getDamage());
    std::cout << "Monster 1 health after Warrior attack: " << monster1.getHealth() << std::endl;

    // Druhý souboj: Wizard vs Monster 2
    std::cout << "\n--- Wizard vs Monster 2 ---\n";
    wizard.action();
    monster2.action();
    wizard.takeDamage(monster2.getDamage());
    std::cout << "Wizard health after Monster 2 attack: " << wizard.getHealth() << std::endl;
    monster2.takeDamage(wizard.getDamage());
    std::cout << "Monster 2 health after Wizard attack: " << monster2.getHealth() << std::endl;

    // Třetí souboj: Warrior a Wizard vs Monster 1 a Monster 2
    std::cout << "\n--- Warrior and Wizard vs Monster 1 and Monster 2 ---\n";
    warrior.action();
    wizard.action();
    monster1.action();
    monster2.action();

    // Warrior útočí na Monster 1
    monster1.takeDamage(warrior.getDamage());
    std::cout << "Monster 1 health after Warrior attack: " << monster1.getHealth() << std::endl;

    // Wizard útočí na Monster 2
    monster2.takeDamage(wizard.getDamage());
    std::cout << "Monster 2 health after Wizard attack: " << monster2.getHealth() << std::endl;

    // Monster 1 útočí na Warrior
    warrior.takeDamage(monster1.getDamage());
    std::cout << "Warrior health after Monster 1 attack: " << warrior.getHealth() << std::endl;

    // Monster 2 útočí na Wizard
    wizard.takeDamage(monster2.getDamage());
    std::cout << "Wizard health after Monster 2 attack: " << wizard.getHealth() << std::endl;

    return 0;
}
