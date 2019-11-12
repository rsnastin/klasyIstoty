#pragma once
#include <string>
#include "komorka.h"
#include "istota.h"

using namespace std;
class zwierze : public istota
{
protected:
	int liczbaKonczyn;
	string pozywienie;
public:
	zwierze();
	zwierze(string, string, string, string, int, string);
	void wyswietlZwierze();
};