#pragma once
#include "Calculation.h"

class PrimCalcuation :
	public Calculation
{
public:
	PrimCalcuation(Config *config);
	~PrimCalcuation();

	int executeBenchmark() override;
};

