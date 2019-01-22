#pragma once
#include <vector>
#include "Config.h"

using namespace std;

class Calculation
{
public:
	Calculation();
	~Calculation();

	virtual int executeBenchmark();
	vector <int> getMS();
	vector <int> getResult();
	void printResult();
	void printAverage();
	
protected:
	vector <int> ms;
	vector <int> result;
	int getTime();
	int N;
	int howmanyvalues;
};

