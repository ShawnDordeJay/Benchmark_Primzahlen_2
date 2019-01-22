#include "pch.h"
#include "PrimCalcuation.h"
#include "Exception.h"


PrimCalcuation::PrimCalcuation(Config *config)
{
	this->N = config->getN();
	this->howmanyvalues = config->getHowManyValues();
}


PrimCalcuation::~PrimCalcuation()
{
}

int PrimCalcuation::executeBenchmark()
{

	for (int i = 0; i < this->N; i++) {

		int start = getTime();

		int found = 0;

		for (int j = 2; j < this->howmanyvalues; j++) {

			for (int k = 2; k <= j; k++) {

				if ((j!=k) && (j%k == 0)) {
					break;
				}
				else if ((j == k) && (j%k == 0)) {
					found++;
				}
			}

		}

		int end = getTime();
		int duration = end - start;
		try {
			if (duration > 200) {
				throw Exception();
			}
		}
		catch (Exception &ex) {

			cout << ex.what() << endl;
			cout << "Um abzubrechen druecken Sie 'E'. Um den Schleifenwert zu aendern druecken Sie 'C'" << endl;
			char choise;
			cin >> choise;

			toupper(choise);

			switch (choise) {
			case 'E': {
				return -1;
			}break;
			case 'C': {
				cout << "Welchen Schleifenwert wollen Sie setzen?" << endl;
				cin >> this->howmanyvalues;
				cout << "Starte Benchmark" << endl;
				this->executeBenchmark();
				return 0;
			}
			default: {
				cout << "Falsche Eingabe, Programm wird beendet!" << endl;
				return -1;
			}
			}
		}

		this->ms.push_back(duration);
		this->result.push_back(found);
	}


	return 0;
}
