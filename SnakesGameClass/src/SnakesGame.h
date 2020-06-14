/*
 * SnakesGame.h
 *
 *  Created on: 26 may. 2020
 *      Author: luisd
 */

#ifndef SNAKESGAME_H_
#define SNAKESGAME_H_
#include "SnakesGame.h"
#include "Videogame.h"
#include "Dice.h"
#include "TablePlayer.h"
#include "SnakeBoard.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
#pragma once


class SnakesGame: public VideoGame {
public:
	SnakesGame() = default;
	SnakesGame(string name, string ins, string author);

	virtual ~SnakesGame();
	void intitalizeGame();
	// At the end we should only run this piece of code in main
	void game();
	void initializeGame();
	void startMenu();
	void startGameplay();
	void instructionsMenu();
	int diceTurn(TablePlayer*);
	int diceThrow();
	TablePlayer* getPlayer1();
	TablePlayer* getPlayer2();
	void firstTurn();
	void turn();
	void coutInformation(int turn, int pos1, int dice,string chr, TablePlayer* pl);
	void gamePlay();
	void endGame() override;
	void printWinner(TablePlayer *);
	void gameQuit();
	void posQuit();
	void menuOptions(char opt);

private:
	TablePlayer* pl1;
	TablePlayer* pl2;
	Dice dice;
	SnakeBoard snakes;
	int diceValues[2];
};

#endif /* SNAKESGAME_H_ */
