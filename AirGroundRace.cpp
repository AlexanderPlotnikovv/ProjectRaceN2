#include "AirGroundRace.h"
#include <iostream>

void AirGroundRace::helperfoo(float a, int Log, int TransportNumber, int ka, int arrground[7], Transport* transports[7])
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
			helperfoo(a, Log, TransportNumber, ka, arrground, transports);
		}
		else
		{
			for (int i = 0; i < ka; i++)
			{
				for (int j = 0; j < ka - 1 - i; j++)
				{
					if ((transports[j]->time()) > (transports[j + 1]->time()))
					{
						Transport* temp = transports[j];
						transports[j] = transports[j + 1];
						transports[j + 1] = temp;
					}
				}
			}
			std::cout << "Results of race:" << std::endl;
			for (int i = 0; i < ka; i++)
			{
				std::cout << i + 1 << ". " << transports[i]->name() << ". Time: " << transports[i]->time() << std::endl;
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
			if (TransportNumber == 1)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Camel has already logged!" << std::endl;
				}
				else
				{
					transports[ka] = new Camel(a);
					ka++;
					arrground[TransportNumber - 1]++;
					std::cout << "Camel has logged successfully!" << std::endl;
				}
			}
			else if (TransportNumber == 2)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Fastmotion camel has already logged!" << std::endl;
				}
				else
				{
					transports[ka] = new FastmotionCamel(a);
					ka++;
					std::cout << "Fastmotion camel has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else if (TransportNumber == 3)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Centaur has already logged!" << std::endl;
				}
				else
				{
					transports[ka] = new Centaur(a);
					ka++;
					std::cout << "Centaur has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else if (TransportNumber == 4)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "ATVBoots has already logged!" << std::endl;
				}
				else
				{
					transports[ka] = new ATVBoots(a);
					ka++;
					std::cout << "ATVBoots has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else if (TransportNumber == 5)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Carpet plane has already logged!" << std::endl;
				}
				else
				{
					transports[ka] = new CarpetPlane(a);
					ka++;
					arrground[TransportNumber - 1]++;
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
					transports[ka] = new Eagle(a);
					ka++;
					std::cout << "Eagle has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else if (TransportNumber == 7)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Broomstick has already logged!" << std::endl;
				}
				else
				{
					transports[ka] = new Broomstick(a);
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
		helperfoo(a, Log, TransportNumber, ka, arrground, transports);
	}
}

AirGroundRace::AirGroundRace(float a, int Log, int TransportNumber, int ka)
{
	int arrground[7];
	for (int i = 0; i < 7; i++)
	{
		arrground[i] = 0;
	}
	Transport* transports[7];
	for (int i = 0; i < 7; i++)
	{
		transports[i] = nullptr;
	}
	helperfoo(a, Log, TransportNumber, ka, arrground, transports);
}

