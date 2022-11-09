/* 
 * File:   main.cpp
 * Author: Natalia Carbajal
 * Purpose: Game state Header
 * Created: October 2022 
 */


#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "Game.h"

class Game;

class GameState {
public:
  virtual void run() = 0;
};

class MenuState : public GameState {
private:
  Game* game;
public:
  MenuState(Game* game);
  void run();
};

class CreateState : public GameState {
private:
  Game* game;
public:
  CreateState(Game* game);
  void run();
};

class PlayState : public GameState {
private:
  Game* game;
public:
  PlayState(Game* game);
  void run();
};

class RuleState : public GameState {
private:
  Game* game;
public:
  RuleState(Game* game);
  void run();
};
#endif // GAMESTATE_H