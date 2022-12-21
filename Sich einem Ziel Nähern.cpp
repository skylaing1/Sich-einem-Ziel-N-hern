/*Für ein selbstfahrendes Auto soll ein Programm geschrieben werden, das feststellt, ob ein beliebig weit entferntes Ziel erreicht wurde.
Dafür ist folgendes Programm vorgesehen:
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int entfernung = rand() % 6;                                  // Entfernung wird Festgelegt zufällig zwischen 0-5
	cout << "Die Entfernung betraegt " << entfernung << " m.\n";

	if (entfernung > 0)                                           // Wenn größer als 0 dann wird 0-2 Meter gefahren. Wird 10x Wiederholt
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl <<  "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}

	if (entfernung > 0)
	{
		int strecke = rand() % 3;
		entfernung = entfernung - strecke;
		cout << endl << endl << "Das Auto faehrt " << strecke << " Meter" << endl << endl;
		cout << "Noch " << entfernung << " bis zum Ziel";

	}


	if (entfernung <= 0) {												// Wenn 0 oder weniger (-1) wird "Das Ziel wurde erreicht ausgegeben
		cout << endl << endl << "Das Ziel wurde erreicht" << endl;
	} else {															// Wenn Mehr als 10 Schritte gefahren werden müssen wird ein Error ausgegeben
		cout << endl << endl << "Error: Zu viele Schritte";
	}
	 
	

}