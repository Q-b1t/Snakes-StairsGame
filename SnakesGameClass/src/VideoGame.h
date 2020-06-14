/*
 * VideoGame.h
 *
 *  Created on: 23 may. 2020
 *      Author: luisd
 */

#ifndef VIDEOGAME_H_
#define VIDEOGAME_H_
#include <string>
using namespace std;
#pragma once

class VideoGame {
public:
	VideoGame(string,string,string,int,int turns);
	VideoGame() = default;
	VideoGame(string username,string ins,string author,bool inGame, int turns);

	virtual ~VideoGame();
	// stars the game with some message
	void startGame();
	// Ends game with message
	virtual void endGame();
	// credits & stuff (thanks for playing)
	void callInstructions();
	string getName();
	string getInstructions();
	int getPlayers();
	bool getInGame();
	int getTurns();
	string getAuthor();
	int getTurnCounter();
	void setInGame(bool);
	// summons instructions
	//turn ++
	void updateTurns(int n);

	void plQuit();
	// sets ingame to false

	//checks in game or if turns are over
	void quitComprobation();
	void moreTurns();
	void updateTurnCounter();


private:

protected:
	string name;
	string instructions;
	string author;
	int players;
	bool inGame;
	int turns;
	int turnCounter;


};

#endif /* VIDEOGAME_H_ */