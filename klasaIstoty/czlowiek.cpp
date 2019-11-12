#include "komorka.h"
#include "istota.h"
#include "czlowiek.h"

#include <iostream>
using namespace std;
czlowiek::czlowiek()
{
	nazwaObiektu = "Nieznany";
	statusZycia = "Nieznany";
	statusSwiadomosci = "Nieznany";
	srodowisko = "Nieznany";
	liczbaKonczyn = 0;
	pozywienie = "Nieznany";
	imie = "Nieznany";
	plec = "Nieznany";
}

czlowiek::czlowiek(string nazwa, string statusZ, string statusS, string env, int koncz, string jedz, string name, string gender)
{
	nazwaObiektu = nazwa;
	statusZycia = statusZ;
	statusSwiadomosci = statusS;
	srodowisko = env;
	liczbaKonczyn = koncz;
	pozywienie = jedz;
	imie = name;
	plec = gender;
}


void czlowiek::wyswietlCzlowiek()
{
	cout << "Imie: " << imie << endl;
	cout << "Plec: " << plec << endl;
}