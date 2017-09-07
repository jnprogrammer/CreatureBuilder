#include "Creature.h"
#include <iostream>

using std::string;

Creature::Creature()
{
	appendages = 4;
	height = 7;
	weight = 250;
	health = 300;
	skin = Gray;
	identity = "Orc-Clone ";
}

Creature::Creature(int limbs, int ht, int wt, int life, COLOR hideColor, string name)
{
	appendages = limbs;
	height = ht;
	weight = wt;
	health = life;
	skin = hideColor;
	identity = name;
}



int Creature::getLimbs() const
{
	return appendages;
}
int Creature::getHeight() const
{
	return height;
}
int Creature::getWeight() const
{
	return weight;
}
int Creature::getHealth() const
{
	return health;
}
COLOR Creature::getColor() const
{
	return skin;
}
string Creature::getName() const
{
	return identity;
}



bool Creature::setLimbs(int limbs)
{
	bool validLimbs = (limbs > 0);
	if (validLimbs){
		appendages = limbs;
	}
	return validLimbs;
}

bool Creature::setHeight(int ht)
{
	bool validHeight = (ht > 0);
		if (validHeight){
			height = ht;
		}
	return validHeight;

	
}
bool Creature::setWeight(int wt)
{
	bool validWeight = (wt > 0);
	if (validWeight)
	{
		weight = wt;
	}
	return validWeight;
}
bool Creature::setHealth(int life)
{
	bool validHealth = (life > 0);
	if (validHealth){
		health = life;

	}
	return validHealth;
}
bool Creature::setColor(COLOR hideColor)
{
	bool validColor = (hideColor >= 1) && (hideColor <= 10);
	if (validColor){

		skin = hideColor;
	}
	return validColor;
}
string Creature::setName(string name)
{
	identity = name;
	return name;
}
//enum is creating my own type simiular to how int is a type. 

