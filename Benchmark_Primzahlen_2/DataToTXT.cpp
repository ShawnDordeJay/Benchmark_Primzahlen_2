#include "pch.h"
#include "DataToTXT.h"
#include <fstream>


DataToTXT::DataToTXT()
{
}


DataToTXT::~DataToTXT()
{
}

void DataToTXT::printToFile(vector<int> ms, vector<int> result)
{
	fstream txt;

	txt.open("Data.txt", ios::out);

	for (int i = 0; i < ms.size(); i++) {
		txt << ms[i] << "," << result[i] << endl;
	}

	txt.close();

}
