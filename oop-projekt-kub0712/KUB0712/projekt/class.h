#ifndef CLASSES_H
#define CLASSES_H

#include <string>
#include <vector>

class Character {
protected:
    std::string name;

public:
    Character(const std::string& name);
    virtual ~Character();
    virtual void action() = 0;
    virtual void takeDamage(int damage) = 0;
    std::string getName() const;
};

class Item {
protected:
    std::string itemName;

public:
    Item(const std::string& name);

    const std::string& getName() const;
};

class Player : public Character {
protected:
    std::vector<Item> inventory;
    int damage;
    int health;

public:
    Player(const std::string& name, int damage, int health);

    void action() override;
    void addItem(const Item& item);
    void takeDamage(int damage) override;
    int getDamage() const;
    int getHealth() const;
};

class Enemy : public Character {
protected:
    int damage;
    int health;

public:
    Enemy(const std::string& name, int damage, int health);
    void action() override;
    void takeDamage(int damage) override;
    int getDamage() const;
    int getHealth() const;
};

class Warrior : public Player {
public:
    Warrior(const std::string& name);

    void action() override;
    void takeDamage(int damage) override;
};

class Wizard : public Player {
public:
    Wizard(const std::string& name);

    void action() override;
    void takeDamage(int damage) override;
};

class Monster : public Enemy {
public:
    Monster(const std::string& name, int damage, int health);

    void action() override;
    void takeDamage(int damage) override;
};

#endif
