#pragma once
#include "GroundTransport.h"
class Centaur : public GroundTransport
{
	float relaxduration(int RelaxAmount) override;
public:
	Centaur(float a);
};

