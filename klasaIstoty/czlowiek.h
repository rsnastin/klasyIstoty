#pragma once
#include <string>
#include "komorka.h"
#include "istota.h"
#include "zwierze.h"

using namespace std;
class czlowiek : public zwierze
{
protected:
	string imie;
	string plec;
public:
	czlowiek();
	czlowiek(string, string, string, string, int, string, string, string);
	void wyswietlCzlowiek();
};