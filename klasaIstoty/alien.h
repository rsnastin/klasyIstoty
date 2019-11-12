#pragma once
#include <string>
#include "istota.h"
#include "czastka.h"

using namespace std;
class alien : public istota, czastka
{
protected:
	string nastawienie;
	string znany;
public:
	alien();
	alien(string, string, string, string, string,string,string, string);
	void wyswietlAlien();
};