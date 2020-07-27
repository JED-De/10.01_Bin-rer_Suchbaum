#pragma once
/*
Deklarieren Sie die Datenstruktur BaumKnoten sowie die Funktionsprototypen
f�r einfuegen() und ausgeben() in einer Headerdatei binaerer_suchbaum.h,
und innerhalb eines Namespaces suchbaum.
*/
namespace suchbaum
{
	struct BaumKnoten //Datenstuktur
	{
		int data; // Wert der Datenstruktur
		BaumKnoten *lower; // h�herer Integerwert
		BaumKnoten *higher; // niedrigerer Integerwert
	};
	void einfuegen(BaumKnoten* &anker, int neuer_Wert);
	void ausgeben(BaumKnoten* &anker);
	/*
	...  Sie k�nnen gerne zus�tzliche Hilfsfunktionen definieren,
	dann aber innerhalb des Namespaces suchbaum. ...

	Realisieren Sie die Ausgabe �ber eine rekursive Funktion
	void suchbaum::knoten_ausgeben(BaumKnoten* knoten, int tiefe);
	*/
	void knoten_ausgeben(BaumKnoten* knoten, int tiefe);
}
