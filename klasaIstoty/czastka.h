#pragma once
#include <string>
using namespace std;
class czastka
{
protected:
	string nazwaCzastka;
	string pochodzenieCzastka;
public:
	czastka();
	czastka(string, string);
	void wyswietlCzastka();
};