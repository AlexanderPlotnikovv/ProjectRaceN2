#pragma once
#include "Transport.h"
class GroundTransport : public Transport
{
protected:
	float TimeBeforeRelax = 0;
	float RelaxDuration = 0;
	int RelaxAmount = 0;
	virtual float relaxduration(int RelaxAmount);
public:
	float time() override;
	GroundTransport& operator=(GroundTransport& p);
};
