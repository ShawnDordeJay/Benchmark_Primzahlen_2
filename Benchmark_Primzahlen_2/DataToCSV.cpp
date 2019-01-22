#include "pch.h"
#include "DataToCSV.h"
#include <fstream>


DataToCSV::DataToCSV()
{
}


DataToCSV::~DataToCSV()
{
}

void DataToCSV::printToFile(vector<int> ms, vector<int> result)
{

	fstream csv;

	csv.open("Data.csv", ios::out);

	for (int i = 0; i < ms.size(); i++) {
		csv << ms[i] << ";" << result[i];
	}

	csv.close();

}
