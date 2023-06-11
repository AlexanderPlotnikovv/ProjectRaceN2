#include "FastmotionCamel.h"
#include <iostream>
float FastmotionCamel::relaxduration(int RelaxAmount)
{
	if (RelaxAmount == 0)
	{
		RelaxDuration = 5;
	}
	else if (RelaxAmount == 1)
	{
		RelaxDuration = 6.5;
	}
	else
	{
		RelaxDuration = 8;
	}
	return RelaxDuration;
}
FastmotionCamel::FastmotionCamel(float a)
{
	Name = "Fastmotion camel";
	TransportNum = 2;
	distance(a);
	Speed = 40;
	TimeBeforeRelax = 10;
}