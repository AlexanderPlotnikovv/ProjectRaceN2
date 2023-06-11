#include "Broomstick.h"
#include <iostream>
Broomstick::Broomstick(float a)
{
	Name = "Broomstick";
	TransportNum = 7;
	distance(a);
	Speed = 20;
	Index = Distance / 1000;
}