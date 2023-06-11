#pragma once
#include "GroundTransport.h"
class ATVBoots : public GroundTransport
{
	float relaxduration(int RelaxAmount) override;
public:
	ATVBoots(float a);
};

