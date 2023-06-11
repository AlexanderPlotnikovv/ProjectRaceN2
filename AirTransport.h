#pragma once
#include "Transport.h"
class AirTransport : public Transport
{
protected:
	int Index = 0;
public:
	float time() override;
	AirTransport& operator=(AirTransport& p);
};

