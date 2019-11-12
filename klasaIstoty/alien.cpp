#include "czastka.h"
#include "istota.h"
#include "alien.h"
#include <iostream>

using namespace std;
alien::alien()
{
	nazwaObiektu = "Nieznany";
	statusZycia = "Nieznany";
	statusSwiadomosci = "Nieznany";
	srodowisko = "Nieznany";
	nazwaCzastka = "Nieznany";
	pochodzenieCzastka = "Nieznany";
	nastawienie = "Nieznany";
	znany = "Nieznany";
}

alien::alien(string nazwaO, string zycie, string statusSwiad, string envi, string nazwaCza, string pochodzenieCz, string nast, string znan)
{
	nazwaObiektu = nazwaO;
	statusZycia = zycie;
	statusSwiadomosci = statusSwiad;
	srodowisko = envi;
	nazwaCzastka = nazwaCza;
	pochodzenieCzastka = pochodzenieCz;
	nastawienie = nast;
	znany = znan;
}

void alien::wyswietlAlien()
{
	cout << "Nastawienie: " << nastawienie << endl;
	cout << "Znany ludzkosci?: " << znany << endl;
}