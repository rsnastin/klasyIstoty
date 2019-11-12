#pragma once
#include <string>
#include "komorka.h"

using namespace std;
class istota : public komorka
{
protected:
	string statusSwiadomosci;
	string srodowisko;
public:
	istota();
	istota(string, string, string, string);
	void wyswietlIstota();
};