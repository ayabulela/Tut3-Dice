#include <iostream>
#include "dice.h"

using namespace std;

int main()
{
	dice Dice1, Dice2;
	int RollNum;
	cout << "Enter number of rolls: " << endl;
	cin >> RollNum;

	float Ave;
	//Overloaded membed
	Ave = Dice1.average(Dice2, RollNum);
	cout << "The average is " << Ave << endl;

	int *ARolls = new int[RollNum];

	for (int i = 0; i < RollNum; ++i)    
	{
		ARolls[i] = Dice2.roll();
	}

	for (int i = 0; i < RollNum; ++i)
	{
		cout << Dice2.roll() << "  ";
	}
	//Overloaded member method
	Ave = Dice1.average(ARolls, RollNum);
	cout << "\n\nThe average is " << Ave << endl;

	return 0;


}

