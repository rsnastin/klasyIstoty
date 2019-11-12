#pragma once
#include <string>
using namespace std;
class komorka
{
protected:
	string nazwaObiektu;
	string statusZycia;
public:
	komorka();
	komorka(string, string);
	void wyswietlKomorka();
};