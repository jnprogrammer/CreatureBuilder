#ifndef _CREATURE_CLASS
#define _CREATURE_CLASS
#include <iostream>

using std::string;
//enum is creating my own type simiular to how int is a type. 
enum COLOR {Red, Blue, Green, Orange, Yellow, Black, Teal, White, Gray, Perrywinkle,Pink};

class Creature
{

	//I chose to use ints for the data fields because they are simplier than floats and easier to 
	//keep track of.
private:
	int appendages;
	int height;
	int weight;
	int health;
	COLOR skin;
	string identity;

public:
	Creature();
	Creature(int limbs, int ht, int wt, int life, COLOR hideColor, string name);

	int getLimbs() const;
	int getHeight() const;
	int getWeight() const;
	int getHealth() const;
	COLOR getColor() const;
	string getName() const;
	

	bool setLimbs(int limbs);
	bool setHeight(int ht);
	bool setWeight(int wt);
	bool setHealth(int life);
	bool setColor(COLOR hideColor);
	string setName(string name);

};
#endif