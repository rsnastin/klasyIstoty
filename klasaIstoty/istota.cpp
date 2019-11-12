#include "komorka.h"
#include "istota.h"
#include <iostream>
using namespace std;
istota::istota()
{
	nazwaObiektu = "Nieznany";
	statusZycia = "Nieznany";
	statusSwiadomosci = "Nieznany";
	srodowisko = "Nieznany";

}

istota::istota(string nazwa, string statusZ, string statusS, string env )
{
	nazwaObiektu = nazwa;
	statusZycia = statusZ;
	statusSwiadomosci = statusS;
	srodowisko = env;
}

void istota::wyswietlIstota()
{
	cout << "Nazwa: " << nazwaObiektu << endl;
	cout << "Status Zycia: " << statusZycia << endl;
	cout << "Swiadomosc: " << statusSwiadomosci<< endl;
	cout << "Wystepowanie: " << srodowisko << endl;
}