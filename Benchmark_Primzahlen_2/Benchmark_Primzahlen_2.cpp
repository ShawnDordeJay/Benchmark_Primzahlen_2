//Benchmark Primzahlen bisschen anders
/*
- Config Singleton
- N (Durchläufe) in Config. selber parametrisierbar
- int executeBenchmark() -> Berechnung der Primzahlen -> selber erstellen
- Berechnung austauschbar
- Ausgabe aller Berechnungen (Zeit, gefundene Werte)
- Ausgabe Durchschnittszeit & im durchschnitt gefundene Werte
- alle Berechnungen in file schreiben (austauschbar; txt (komma) und csv (semikolon))
- wenn eine Berechnung länger als 200 ms dauert, exception werfen. Auswahlmöglichkeit ob abbrechen oder Berechnungsschleife verkleinern (nicht N sondern die andere)
*/

#include "pch.h"
#include <iostream>
#include "Config.h"
#include "Calculation.h"
#include "PrimCalcuation.h"
#include "DataToFile.h"
#include "DataToCSV.h"
#include "DataToTXT.h"

int main()
{
    //Config singleton mit übergabeparameter für N & howmanyvalues
	Config *config = Config::getInstance(750, 35000);

	//Benchmark erstellen (austauschbar)
	Calculation *calc = new PrimCalcuation(config);
	calc->executeBenchmark();

	//ergebnisse auf konsole ausgeben
	if (calc->getMS().size() > 0) {
		calc->printResult();
		calc->printAverage();

		//in File schreiben (austauschbar)
		DataToFile *file = new DataToTXT;
		file->printToFile(calc->getMS(), calc->getResult());
	}

	

	cin.get();

}
