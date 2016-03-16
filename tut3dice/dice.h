#ifndef DICE_H
#define DICE_H

class dice
{
public:
	dice();
	int roll();
	float average(dice, int);
	float average(int[], int);
	~dice();

};

#endif  //DICE_H