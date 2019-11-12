#include "czastka.h"
#include <iostream>
using namespace std;
czastka::czastka()
{
	nazwaCzastka = "Nieznany";
	pochodzenieCzastka = "Nieznany";
}

czastka::czastka(string nazwaC, string poch)
{
	nazwaCzastka = nazwaC;
	pochodzenieCzastka = poch;
}

void czastka::wyswietlCzastka()
{
	cout << "Nazwa: " << nazwaCzastka << endl;
	cout << "Pochodzenie: " << pochodzenieCzastka << endl;
}