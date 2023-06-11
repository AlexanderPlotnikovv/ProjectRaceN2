#pragma once
#include "GroundTransport.h"
class Camel : public GroundTransport
{
	float relaxduration(int RelaxAmount) override;
public:
	Camel(float a);
};
