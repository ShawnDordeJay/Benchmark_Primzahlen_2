#pragma once
#include <iostream>
#include <exception>

using namespace std;

class Exception : public exception
{

public:

	virtual const char* what() const throw() {
		return "Der Geraet ist zu langsam fuern Benchmark";
	}

};
