/*
 * VideoGame.cpp
 *
 *  Created on: 23 may. 2020
 *      Author: luisd
 */

#include "VideoGame.h"
# include <iostream>
using namespace std;

VideoGame::VideoGame(string name,string ins, string author, int players, int turns)
:name(name),instructions(ins),author(author),players(players),inGame(false),turns(turns),turnCounter(0)
{
	// TODO Auto-generated constructor stub

}

VideoGame::VideoGame(string name, string ins,string author,bool inGame,int turns)
:name(name),instructions(ins),author(author),inGame(inGame),turnCounter(turns)
{

}

VideoGame::~VideoGame() {
	// TODO Auto-generated destructor stub
}

void VideoGame::startGame(){
	if (this->inGame == false){
	this->inGame = true;
	cout << name << " \(*~*)/" << endl;
	cout << "by: " << this->author << endl;

	}
}
void VideoGame::endGame(){
	cout << "Thanks for playing" << endl;
}

void VideoGame::callInstructions(){
	cout << "Instructions" << endl;
}


 void VideoGame::setInGame(bool stuff){
	 this->inGame = stuff;
 }

 bool VideoGame::getInGame(){
	 return this->inGame;
 }

 string VideoGame::getName(){
	 return this->name;
 }

 string VideoGame::getInstructions(){
	 return this->instructions;
 }

 int VideoGame::getPlayers(){
	 return this->players;
 }

 int VideoGame::getTurns(){
	 return this->turns;
 }


 int VideoGame::getTurnCounter(){
	 return this->turnCounter;
 }

 void VideoGame::updateTurns(int n){
	 turns += n;
 }

 void VideoGame::moreTurns(){
	 if(this->turnCounter == this->turns){

	 cout << "You have run out of turns" << endl;
	 string res;
	 cout << "more turns?" << "\n" << "yes|no" << endl;
	 cin >> res;
	 if (res == "yes"){
		 updateTurns(5);
	 }
	 else if(res == "no"){
		 setInGame(false);
	 }
	 else{
		 cout << "Invalid answer" << endl;
		 cout << "please try again" << endl;
		 moreTurns();
	 }
	 }
 }

void VideoGame::quitComprobation(){
	if (this->inGame == false){
		endGame();
	}
}


void VideoGame::plQuit(){
	cout << "Type quit to end game:" << endl;
	string res;
	cin>> res;
	if (res == "quit"){
		setInGame(false);
	}
	else{
		while(res != "quit"){
			cout << "Incorrect Command, please type quit:" << endl;
			cin >> res;
		}
		setInGame(false);

	}
}

void VideoGame::updateTurnCounter(){
	this->turnCounter ++;
}



string VideoGame::getAuthor(){
	return this->author;
}

