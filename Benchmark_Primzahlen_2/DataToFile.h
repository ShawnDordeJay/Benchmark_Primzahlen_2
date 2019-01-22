#pragma once
#include <vector>

using namespace std;

class DataToFile
{
public:
	DataToFile();
	~DataToFile();

	virtual void printToFile(vector <int> ms, vector <int> result);
};

