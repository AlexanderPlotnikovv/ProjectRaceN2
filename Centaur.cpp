#include "Centaur.h"
#include <iostream>
float Centaur::relaxduration(int RelaxAmount)
{
	return 2;
}
Centaur::Centaur(float a)
{
	Name = "Centaur";
	TransportNum = 3;
	distance(a);
	Speed = 15;
	TimeBeforeRelax = 8;
}