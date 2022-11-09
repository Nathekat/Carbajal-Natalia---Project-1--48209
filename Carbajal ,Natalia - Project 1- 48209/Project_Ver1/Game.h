/* 
 * Author: Natalia Carbajal
 * Purpose: Game Header File
 */

#ifndef GAME_H
#define GAME_H

#include <stack>
#include <list>
#include "Player.h"

class GameState;
//Keeps track of game state and players
class Game {
public:
  std::stack<GameState*> gameState;  // Container Adaptor: stack
  std::list<Player> players;  // Sequence: list
public:
  Game();
  void start();
  void run();
};

#endif
