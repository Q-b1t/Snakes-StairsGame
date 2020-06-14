/*
 * SnakeBoard.h
 *
 *  Created on: 24 may. 2020
 *      Author: luisd
 */

#ifndef SNAKEBOARD_H_
#define SNAKEBOARD_H_
#include <vector>
#include <string>
#include "GameBoard.h"
#include "TablePlayer.h"
#pragma once

class SnakeBoard: public GameBoard{
public:
	SnakeBoard() = default;
	SnakeBoard(int, int, int,int, vector<int>*,vector<string>*,vector<int>*,vector<int>*);
	virtual ~SnakeBoard();
	// fills the value with encoded int numbers
	void fillSnakeBoard();
	// gets a randoom number between min&max
	int getRanNum(int min, int max);
	// sets the vectors with diferent randon numbers
	void setPositionVectors();
	// printsnakes
	void printSnakes();
	//printladders
	void printLadders();
	void getGameStatus(TablePlayer*,TablePlayer*);
	// enter a player into the vector:
	void enterPlayer(TablePlayer*);
	TablePlayer getPlayer(int index);
	// index corresponds to player position & value corresponds to player table code
	void changeBoardValue(int index, int id);
	void resetValue(int id);
	void checkPosition(TablePlayer *pl);
	bool checkFinalPosition(TablePlayer *pl,TablePlayer *pl2);
	bool checkPosVal(TablePlayer *pl);
	void checkPosLoop(TablePlayer *pl);
	void resetSnakeBoard();
	int  valHolder[2];
	int posHolder[2];
private:
	vector <TablePlayer*> players;
	vector <int> snakes;
	vector <int> ladders;
	vector <string> boardEn;
	int numSL;
};

#endif /* SNAKEBOARD_H_ */
