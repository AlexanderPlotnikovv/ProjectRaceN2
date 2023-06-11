#include "Camel.h"
#include <iostream>
float Camel::relaxduration(int RelaxAmount)
{
	if (RelaxAmount == 0)
	{
		RelaxDuration = 5;
	}
	else
	{
		RelaxDuration = 8;
	}
	return RelaxDuration;
}
Camel::Camel(float a)
{
	Name = "Camel";
	TransportNum = 1;
	distance(a);
	Speed = 10;
	TimeBeforeRelax = 30;
}