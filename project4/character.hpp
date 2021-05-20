/*********************************************************************
** Program name : Project 4
** Author : Justin Phillips
** Date : 2 / 19 / 2018
** Description : Fantasy Combat Tournament
*********************************************************************/

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
class Character
{
protected:
	int numOfAttDie;
	int numofDefDie;
	int armor;
	int strength;
	int dieSides;
	std::string name;
public:
	Character();
	~Character();
	int getNumOfAttDie() const { return numOfAttDie; }
	void setAttDie(int inputAttDie) { numOfAttDie = inputAttDie; }
	int getNumOfDefDie() const { return numofDefDie; }
	void setDefDie(int inputDefDie) { numofDefDie = inputDefDie; }
	int getArmor() const { return armor; }
	void setArmor(int inputArmor) { armor = inputArmor; }
	int getStrength() const { return strength; }
	void setStrength(int inputStrength) { strength = inputStrength; }
	int getSides() const { return dieSides; }
	void setSides(int inputSides) { dieSides = inputSides; }
	std::string getName()const { return name; }
	void setName(std::string inputName) { name = inputName; }
	bool alive();
	virtual void strengthDown(int damageRecieved);
	virtual int attack();
	virtual int defense();
	void printChar();
	void heal();

};


#endif
