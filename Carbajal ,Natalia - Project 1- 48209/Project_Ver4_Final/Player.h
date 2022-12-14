/* 
 * File:   main.cpp
 * Author: Natalia Carbajal
 * Purpose: Player Header
 * Created: October 2022 
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
  std::string name;
  int wins;
public:
  Player(std::string name);
  Player(std::string name, int wins);
  Player(const Player& player);

  std::string getName() const;
  int getWins() const;

  void setName(std::string name);
  void setWins(int wins);

  std::string data();

  int getInput();
};

#endif // PLAYER_H