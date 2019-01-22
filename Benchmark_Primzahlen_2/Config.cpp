#include "pch.h"
#include "Config.h"


Config::Config()
{
}


Config::~Config()
{
}

Config *Config::INSTANCE = 0;

Config * Config::getInstance(int N, int howmanyvalues)
{
	if (INSTANCE == 0) {
		INSTANCE = new Config;
		INSTANCE->N = N;
		INSTANCE->howmanyvalues = howmanyvalues;

	}

	return INSTANCE;
}

int Config::getN()
{
	return this->N;
}

int Config::getHowManyValues()
{
	return this->howmanyvalues;;
}
