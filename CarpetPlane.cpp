#include "CarpetPlane.h"
#include <iostream>
CarpetPlane::CarpetPlane(float a)
{
	Name = "Carpet plane";
	TransportNum = 5;
	distance(a);
	Speed = 10;
	if (Distance < 1000.0)
	{
		Index = 0.0;
	}
	else if (Distance >= 1000.0 && Distance < 5000.0)
	{
		Index = 3.0;
	}
	else if (Distance >= 5000.0 && Distance < 10000.0)
	{
		Index = 10.0;
	}
	else
	{
		Index = 5.0;
	}
}