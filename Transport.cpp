#include "Transport.h"
#include <iostream>
float Transport::time() { return Time; }
void Transport::distance(float a)
{
	Distance = a;
}

std::string Transport::name()
{
	return Name;
}