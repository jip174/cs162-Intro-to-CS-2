/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include "ball.hpp"
#include "space.hpp"

class Player
{
protected:
	int numOfAttDie;
	int numofDefDie;
	//int tackle;
	//int running;
	//int speed;
	int dieSides;
	std::string name;
	int numDowns;
	int strength;
	bool hasBall;
	char markPlayer;
	


public:
	Player();
	~Player();
	Ball ball;
	Space *space;
	int getNumOfAttDie() const { return numOfAttDie; }
	void setAttDie(int inputAttDie) { numOfAttDie = inputAttDie; }
	int getNumOfDefDie() const { return numofDefDie; }
	void setDefDie(int inputDefDie) { numofDefDie = inputDefDie; }
	int getStrength() const { return strength; }
	void setStrength(int inputStrength) { strength = inputStrength; }
	char getMark() const { return markPlayer; }
	void setMark(char inputMark) { markPlayer = inputMark; }
	//int getRunning() const { return running; }
	//void setRunning(int inputRunning) { running = inputRunning; }
	//int getSpeed() const { return speed; }
	//void setSpeed(int inputSpeed) { speed = inputSpeed; }
	int getSides() const { return dieSides; }
	void setSides(int inputSides) { dieSides = inputSides; }
	int getDown() const { return numDowns; }
	void setDown(int inputDown) { numDowns = inputDown; }
	std::string getName()const { return name; }
	void setName(std::string inputName) { name = inputName; }
	bool downs();
	bool getHasBall();
	void move(char direction);
	virtual void strengthDown(int damageRecieved);
	virtual int breakTackle();
	virtual int tackle();
	virtual void touchDown();
	void printChar();

	

};


#endif
