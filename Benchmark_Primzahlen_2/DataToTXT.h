#pragma once
#include "DataToFile.h"
class DataToTXT :
	public DataToFile
{
public:
	DataToTXT();
	~DataToTXT();

	void printToFile(vector <int> ms, vector <int> result) override;
};

