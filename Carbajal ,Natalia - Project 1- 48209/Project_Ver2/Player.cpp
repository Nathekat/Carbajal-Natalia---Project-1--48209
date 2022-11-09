/* 
 * File:   main.cpp
 * Author: Natalia Carbajal
 * Purpose: Project 1 - Connect 4 - Version 2
 */

#include "Player.h"

using namespace std;
//Assigns names to wins
Player::Player(string name, int wins) {
  this->name = name;
  this->wins = wins;
}

Player::Player(const Player& player) {
  name = player.getName();
  wins = player.getWins();
}

//Getters and setters
std::string Player::getName() const { return name; }
int Player::getWins() const { return wins; }

void Player::setName(std::string name) { this->name = name; }
void Player::setWins(int wins) { this->wins = wins; };

