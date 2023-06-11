#pragma once
#include <string>
class Transport
{
protected:
	std::string Name;
	int TransportNum = 0;
	float Distance = 0;
	float Time = 0;
	float Speed = 0;
public:
	virtual float time();
	void distance(float a);
	std::string name();
};