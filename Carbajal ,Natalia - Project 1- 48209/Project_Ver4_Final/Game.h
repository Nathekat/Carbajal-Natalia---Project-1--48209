/* 
 * File:   main.cpp
 * Author: Natalia Carbajal
 * Purpose: Game Header
 * Created: October 2022 
 */
#ifndef GAME_H
#define GAME_H

#include <stack>
#include <list>
#include "Player.h"

class GameState;

class Game {
public:
  std::stack<GameState*> gameState;  // Container Adaptor: stack
  std::list<Player> players;  // Sequence: list
public:
  Game();
  ~Game();
  void start();
  void run();
};

#endif
