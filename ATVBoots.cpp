#include "ATVBoots.h"
#include <iostream>
float ATVBoots::relaxduration(int RelaxAmount)
{
	if (RelaxAmount == 0)
	{
		RelaxDuration = 10;
	}
	else
	{
		RelaxDuration = 5;
	}
	return RelaxDuration;
}
ATVBoots::ATVBoots(float a)
{
	Name = "ATV boots";
	TransportNum = 4;
	distance(a);
	Speed = 6;
	TimeBeforeRelax = 60;
}