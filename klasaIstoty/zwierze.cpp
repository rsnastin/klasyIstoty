#include "komorka.h"
#include "istota.h"
#include "zwierze.h"

#include <iostream>
using namespace std;
zwierze::zwierze()
{
	nazwaObiektu = "Nieznany";
	statusZycia = "Nieznany";
	statusSwiadomosci = "Nieznany";
	srodowisko = "Nieznany";
	liczbaKonczyn = 0;
	pozywienie = "Nieznany";

}

zwierze::zwierze(string nazwa, string statusZ, string statusS, string env, int koncz, string jedz)
{
	nazwaObiektu = nazwa;
	statusZycia = statusZ;
	statusSwiadomosci = statusS;
	srodowisko = env;
	liczbaKonczyn = koncz;
	pozywienie = jedz;
}


void zwierze::wyswietlZwierze()
{
	cout << "Liczba konczyn: " << liczbaKonczyn << endl;
	cout << "Rodzaj pozywienia: " << pozywienie << endl;
}