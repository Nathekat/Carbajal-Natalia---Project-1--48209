/* 
 * Author: Natalia Carbajal
 * Purpose: Project 1 - Connect 4 - Version 3
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
//Keeps track of player name and wins/inputs.
class Player {
private:
  std::string name;
  int wins;
public:
  Player(std::string name, int wins=0);
  Player(const Player& player);
  std::string getName() const;
  int getWins() const;
  void setName(std::string name);
  void setWins(int wins);
};

#endif // PLAYER_H