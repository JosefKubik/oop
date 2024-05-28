#include <string>
#include <vector>
#include "class.h"
#include <iostream>

using namespace std;

Character::Character(const string& name) : name(name) {}

Character::~Character() {}

std::string Character::getName() const {
    return name;
}

Item::Item(const string& name) : itemName(name) {}

const string& Item::getName() const {
    return itemName;
}

Player::Player(const string& name, int damage, int health) : Character(name), damage(damage), health(health) {}

void Player::action() {
    cout << "Player " << name << " is performing an action." << endl;
}

void Player::addItem(const Item& item) {
    inventory.push_back(item);
}

void Player::takeDamage(int damage) {
    health -= damage;
}

int Player::getDamage() const {
    return damage;
}

int Player::getHealth() const {
    return health;
}

Enemy::Enemy(const string& name, int damage, int health) : Character(name), damage(damage), health(health) {}

void Enemy::action() {
    cout << "Enemy " << name << " is performing an action." << endl;
}

void Enemy::takeDamage(int damage) {
    health -= damage;
}

int Enemy::getDamage() const {
    return damage;
}

int Enemy::getHealth() const {
    return health;
}

Warrior::Warrior(const std::string& name) : Player(name, 10, 100) {}

void Warrior::action() {
    cout << "Warrior " << name << " is performing an action." << endl;
}

void Warrior::takeDamage(int damage) {
    Player::takeDamage(damage);
}

Wizard::Wizard(const string& name) : Player(name, 5, 80) {}

void Wizard::action() {
    cout << "Wizard " << name << " is performing an action." << endl;
}

void Wizard::takeDamage(int damage) {
    Player::takeDamage(damage);
}

Monster::Monster(const string& name, int damage, int health) : Enemy(name, damage, health) {}

void Monster::action() {
    cout << "Monster " << name << " is performing an action." << endl;
}

void Monster::takeDamage(int damage) {
    Enemy::takeDamage(damage);
}
