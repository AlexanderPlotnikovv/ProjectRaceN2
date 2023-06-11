#include "AirTransport.h"
float AirTransport::time()
{
	Time = (Distance * (1.0 - (Index / 100.0))) / Speed;

	return Time;
}

AirTransport& AirTransport::operator=(AirTransport& p)
{
	AirTransport p1;
	p.Name = p1.Name;
	p.TransportNum = p1.TransportNum;
	p.Distance = p1.Distance;
	p.Time = p1.Time;
	p.Speed = p1.Speed;
	p.Index = p1.Index;
	return p;
}
