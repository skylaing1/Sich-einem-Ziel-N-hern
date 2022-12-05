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
	int entfernung = rand() % 6;
	cout << "Die Entfernung betraegt " << entfernung << " m.\n";
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

	if (entfernung <= 0) {
		cout << endl << endl << "Das Ziel wurde erreicht";
	}

	

}