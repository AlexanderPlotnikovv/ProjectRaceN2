#include "GroundRace.h"
#include<iostream>
void GroundRace::helperfoo(float a, int Log, int TransportNumber, int ka, int arrground[4], GroundTransport*groundtransports[4])
{
	TransportNumber = 1;
	std::cout << "1. Log transport" << std::endl;
	std::cout << "2. Start racing" << std::endl;
	std::cout << "Enter action: ";
	std::cin >> Log;
	if (Log == 2)
	{
			for (int i = 0; i < ka; i++)
			{
				for (int j = 0; j < ka - 1 - i; j++)
				{
					if ((groundtransports[j]->time()) > (groundtransports[j + 1]->time()))
					{
						GroundTransport* temp = groundtransports[j];
						groundtransports[j] = groundtransports[j + 1];
						groundtransports[j + 1] = temp;
					}
				}
			}
			std::cout << "Results of race:" << std::endl;
			for (int i = 0; i < ka; i++)
			{
				std::cout << i + 1 << ". " << groundtransports[i]->name() << ". Time: " << groundtransports[i]->time() << std::endl;
			}
	}
	else if (Log == 1)
	{
		while (TransportNumber != 0)
		{
			std::cout << "What type of transport do you want to choose?" << std::endl;
			std::cin >> TransportNumber;
			if (TransportNumber == 1)
			{
				if (arrground[TransportNumber - 1] == 1)
				{
					std::cout << "Camel has already logged!" << std::endl;
				}
				else
				{
					groundtransports[ka] = new Camel(a);
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
					groundtransports[ka] = new FastmotionCamel(a);
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
					groundtransports[ka] = new Centaur(a);
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
					groundtransports[ka] = new ATVBoots(a);
					ka++;
					std::cout << "ATVBoots has logged successfully!" << std::endl;
					arrground[TransportNumber - 1]++;
				}
			}
			else
			{
				std::cout << "Incorrect type of transport" << std::endl;
			}
		}
		helperfoo(a, Log, TransportNumber, ka, arrground, groundtransports);
	}
}
GroundRace::GroundRace(float a, int Log, int TransportNumber, int ka)
{
	int arrground[4];
	for (int i = 0; i < 4; i++)
	{
		arrground[i] = 0;
	}
	GroundTransport* groundtransports[4];
	for (int i = 0; i < 4; i++)
	{
		groundtransports[i] = nullptr;
	}
	helperfoo(a, Log, TransportNumber, ka, arrground, groundtransports);
}