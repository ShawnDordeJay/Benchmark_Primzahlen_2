#pragma once
class Config
{
public:
	
	~Config();

	static Config *getInstance(int N, int howmanyvalues);
	int getN();
	int getHowManyValues();

private:
	Config();
	static Config *INSTANCE;
	int N; 
	int howmanyvalues;
};

