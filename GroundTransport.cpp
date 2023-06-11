#include "GroundTransport.h"
float GroundTransport::relaxduration(int RelaxAmount)
{
	return RelaxAmount;
}
float GroundTransport::time()
{
	RelaxAmount = 0;
	Time = 0;
		float a = 0;
		while (a <= Distance-Speed*TimeBeforeRelax)
		{
			if (a > Distance)
			{
				Time -= (TimeBeforeRelax + relaxduration(RelaxAmount));
				a -= Speed * TimeBeforeRelax;
				break;
			}
			else {
				Time += (TimeBeforeRelax + relaxduration(RelaxAmount));
				a += Speed * TimeBeforeRelax;
				RelaxAmount++;
			}
		}
		Time += (Distance - a) / Speed;
		return Time;
}

GroundTransport& GroundTransport::operator=(GroundTransport& p)
{
	GroundTransport p1;
	p.Name = p1.Name;
	p.TransportNum = p1.TransportNum;
	p.Distance = p1.Distance;
	p.Time = p1.Time;
	p.Speed = p1.Speed;
	p.TimeBeforeRelax = p1.TimeBeforeRelax;
	p.RelaxDuration = p1.RelaxDuration;
	p.RelaxAmount = p1.RelaxAmount;
	return p;
}