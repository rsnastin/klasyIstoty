#include "komorka.h"
#include <iostream>
using namespace std;
komorka::komorka()
{
	nazwaObiektu = "Nieznany";
	statusZycia = "Nieznany";
}

komorka::komorka(string nazwa, string status)
{
	nazwaObiektu = nazwa;
	statusZycia = status;
}

void komorka::wyswietlKomorka()
{
	cout << "Nazwa: " << nazwaObiektu << endl;
	cout << "Status Zycia: " << statusZycia << endl;
}