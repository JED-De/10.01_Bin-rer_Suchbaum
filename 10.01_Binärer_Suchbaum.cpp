#include <iostream>
#include "binaerer_suchbaum.h"
using namespace std;

int main()
{
	suchbaum::BaumKnoten *anker = nullptr;
	int eingabe = 0;
	suchbaum::ausgeben(anker);
	while (eingabe != 99)
	{
		cout << "Naechster Wert (99 beendet): ? ";
		cin >> eingabe;
		if (eingabe != 99)
		{
			suchbaum::einfuegen(anker,eingabe);
		}
	} 
	suchbaum::ausgeben(anker);
	system("Pause");
	return 0;
}