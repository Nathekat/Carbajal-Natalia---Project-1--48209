/* 
 * File:   main.cpp
 * Author: Natalia Carbajal
 * Purpose: Game source
 * Created: October 2022 
 */

#include "Game.h"
#include "GameState.h"

using namespace std;

//Constructor
Game::Game() {
  
}

// Deconstructor
Game::~Game() {
  
}

// Should only be called once!
void Game::start() {
  GameState* menu = new MenuState(this);
  gameState.push(menu);
}

void Game::run() {
  gameState.top()->run();
}