#pragma once
#include "GroundTransport.h"
class FastmotionCamel : public GroundTransport
{
	float relaxduration(int RelaxAmount) override;
public:
	FastmotionCamel(float a);
};

