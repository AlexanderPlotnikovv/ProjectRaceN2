#include "AirRace.h"
#include <iostream>
void AirRace::helperfoo(float a, int Log, int TransportNumber, int ka, int arrground[3], AirTransport* airtransports[3])
{
	TransportNumber = 1;
	std::cout << "1. Log transport" << std::endl;
	std::cout << "2. Start racing" << std::endl;
	std::cout << "Enter action: ";
	std::cin >> Log;
	if (Log == 2)
	{
		if (ka == 0 || ka == 1)
		{
			std::cout << "You didn't logged any transport or logged too few!" << std::endl;
			helperfoo(a, Log, TransportNumber, ka, arrground, airtransports);
		}
		else
		{
			for (int i = 0; i < ka; i++)
			{
				for (int j = 0; j < ka - 1 - i; j++)
				{
					if ((airtransports[j]->time()) > (airtransports[j + 1]->time()))
					{
						AirTransport* temp = airtransports[j];
						airtransports[j] = airtransports[j + 1];
						airtransports[j + 1] = temp;
					}
				}
			}
			std::cout << "Results of race:" << std::endl;
			for (int i = 0; i < ka; i++)
			{
				std::cout << i + 1 << ". " << airtransports[i]->name() << ". Time: " << airtransports[i]->time() << std::endl;
			}
		}
	}
	else if (Log == 1)
	{
		while (TransportNumber != 0)
		{
			std::cout << "What type of transport do you want to choose?" << std::endl;
			std::cout << "1. Camel" << std::endl;
			std::cout << "2. Fastmotion camel" << std::endl;
			std::cout << "3. Centaur" << std::endl;
			std::cout << "4. ATV boots" << std::endl;
			std::cout << "5. Carpet plane" << std::endl;
			std::cout << "6. Eagle" << std::endl;
			std::cout << "7. Broomstick" << std::endl;
			std::cout << "Enter 0 if you want to exit from choosing" << std::endl;
			std::cin >> TransportNumber;
			if (TransportNumber == 5)
			{
				if (arrground[TransportNumber - 5] == 1)
				{
					std::cout << "Carpet plane has already logged!" << std::endl;
				}
				else
				{
					airtransports[ka] = new CarpetPlane(a);
					ka++;
					arrground[TransportNumber - 5]++;
					std::cout << "Carpet plane has logged successfully!" << std::endl;
				}
			}
			else if (TransportNumber == 6)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Eagle has already logged!" << std::endl;
				}
				else
				{
					airtransports[ka] = new Eagle(a);
					ka++;
					std::cout << "Eagle has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else if (TransportNumber == 7)
			{
				if (arrground[TransportNumber - 5] == 1)
				{
					std::cout << "Broomstick has already logged!" << std::endl;
				}
				else
				{
					airtransports[ka] = new Broomstick(a);
					ka++;
					std::cout << "Broomstick has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else if (TransportNumber == 0) {}
			else
			{
				std::cout << "Incorrect type of transport" << std::endl;
			}
		}
		helperfoo(a, Log, TransportNumber, ka, arrground, airtransports);
	}
}

AirRace::AirRace(float a, int Log, int TransportNumber, int ka)
{
	int arrground[3];
	for (int i = 0; i < 3; i++)
	{
		arrground[i] = 0;
	}
	AirTransport* airtransports[3];
	for (int i = 0; i < 3; i++)
	{
		airtransports[i] = nullptr;
	}
	helperfoo(a, Log, TransportNumber, ka, arrground, airtransports);
}
