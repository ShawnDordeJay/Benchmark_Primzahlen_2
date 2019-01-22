#pragma once
#include "DataToFile.h"
class DataToCSV :
	public DataToFile
{
public:
	DataToCSV();
	~DataToCSV();

	void printToFile(vector <int> ms, vector <int> result) override;
};

