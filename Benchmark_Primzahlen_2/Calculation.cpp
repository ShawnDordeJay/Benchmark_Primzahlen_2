#include "pch.h"
#include "Calculation.h"
#include <chrono>
#include <iostream>

using namespace std::chrono;

Calculation::Calculation()
{
	
}


Calculation::~Calculation()
{
}

int Calculation::executeBenchmark()
{
	return 0;
}

vector<int> Calculation::getMS()
{
	return this->ms;
}

vector<int> Calculation::getResult()
{
	return this->result;
}

void Calculation::printResult()
{
	for (int i = 0; i < this->ms.size(); i++) {

		cout << "Zeit: " << this->ms[i] << "; Ergebnis: " << this->result[i] << endl;

	}
}

void Calculation::printAverage()
{

	//berechnen durschnittszeit
	double averagetime = 0.0;

	for (int time : this->ms) {

		averagetime += time;

	}
	averagetime /= this->ms.size();

	//berechnen durschnittswert

	double averageresult = 0.0;

	for (int result : this->result) {

		averageresult += result;

	}
	averageresult /= this->result.size();

	cout << "D-Zeit: " << averagetime << " D-Wert: " << averageresult << endl;
}

int Calculation::getTime()
{
	milliseconds ms = duration_cast<milliseconds>(high_resolution_clock::now().time_since_epoch());

	return ms.count();
}
