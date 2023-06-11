#include "Race.h"

#include <iostream>

void Race::racehelper()
{
	int button;
	int ka = 0;
	int RacingType;
	int Log = 0;
	int TransportNumber = 1;
	float a;
	std::cout << "Welcome in racing simulator!" << std::endl;
	std::cout << "1. Racing for ground transport" << std::endl;
	std::cout << "1. Racing for air transport" << std::endl;
	std::cout << "1. Racing for ground and air transport" << std::endl;
	std::cout << "Enter type of race: ";
	std::cin >> RacingType;
	std::cout << "Enter distance: ";
	std::cin >> a;
	if (RacingType == 1)
	{
		GroundRace p(a, Log, TransportNumber, ka);
	}
	else if (RacingType == 2)
	{
		AirRace p1(a, Log, TransportNumber, ka);
	}
	else if (RacingType == 3)
	{
		AirGroundRace p2(a, Log, TransportNumber, ka);
	}
	else
	{
		std::cout << "Incorrect type of race!" << std::endl;
	}
	std::cout << "Do you want to repeat race?" << std::endl << "1. Yes" << std::endl << "2. No" << std::endl;
	std::cin >> button;
	if (button == 2) {}
	else if (button == 1)
	{
		racehelper();
	}
	else
	{
		std::cout << "You added incorrect value!";
	}
}

Race::Race()
{
	racehelper();
}
