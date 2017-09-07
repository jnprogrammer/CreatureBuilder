#include "Creature.h"
#include <iostream>
#include <sstream>

using std::cout;
using std::cin;
using std::string;
bool userWantsContinue();
Creature makeCreature(int limbs, int heightOf, int weightOf, int lifeOn, COLOR skinColor, string itsName);
int main(){
	
	int enumCount = 0;
	int limbsOn = 0;
	int heightOf = 0;
	int weightOf = 0;
	int lifeOn = 0;
	COLOR skinColor = Red;
	string itsName = " ";
	Creature thing;

	do{

	
	cout << "Hello Orc-fellow, Lets make a creature!\n";
	cout << "Lets start with its appendages, how many do you want ?\n";
	cin >> limbsOn;
	cout << "How tall should it be?\n";
	cin >> heightOf;
	cout << "How much should this thing weight? \n";
	cin >> weightOf;
	cout << "How many hit points should it have? \n";
	cin >> lifeOn;
	cout << "What color should it be?, pick carfully because this cannot be changed once done\n\n" <<
		"Red, Blue, Green, Orange, Yellow, Black, Teal, White, Gray, Perrywinkle, Pink\n";
	cout << "0  , 1   , 2   ,  3   ,   4   ,   5   ,   6  ,   7   ,   8   ,   9   ,  10  \n";
	cin >> enumCount;
	skinColor = static_cast<COLOR>(enumCount);
	cout << "Now lastly what would you name this creature? \n";
	cin >> itsName;
	cout << "You entered: " << itsName << "\n";
	
	thing = makeCreature(limbsOn, heightOf, weightOf, lifeOn, skinColor, itsName);
	cout << "You new creature, " << thing.getName() << " is Ready !\n";
	cout << "The stats for this creature is as follows\n\n";
	cout << "Limbs: " << thing.getLimbs() << "\n";
	cout << "Height: " << thing.getHeight() << "ft \n";
	cout << "Weight: " << thing.getWeight() << "lbs \n";
	cout << "It's you picked color scheme # " <<skinColor << "\n";
	} while (userWantsContinue());

	return 0;
}

Creature makeCreature(int limbs, int heightOf, int weightOf, int lifeOn, COLOR skinColor, string itsName)
{
	Creature NewCreature;
	NewCreature.setLimbs(limbs);
	NewCreature.setHeight(heightOf);
	NewCreature.setWeight(weightOf);
	NewCreature.setHealth(lifeOn);
	NewCreature.setColor(skinColor);
	NewCreature.setName(itsName);
	
	return NewCreature;
}
bool userWantsContinue(){
	char userInput = ' ';
	bool isValidInput = false;

	do{
		cout << "Would you like to do anotheor lot? \n";
		cout << "Enter y for yeah and enter n for nay\n";
		cin >> userInput;

		isValidInput = (userInput == 'y') || (userInput == 'n');
		if (!isValidInput)
		{
			cout << "Try again you orc-fodder! \n";
		}
	} while (!isValidInput);

	return (userInput == 'y');

}