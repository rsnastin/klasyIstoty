#include <iostream>
#include "komorka.h"
#include "istota.h"
#include "zwierze.h"
#include "czlowiek.h"
#include "czastka.h"
#include "alien.h"

using namespace std;

int main()
{
	cout << "Zywa komorka"<<endl;
	komorka tkanka("Tkanka", "Zyje");
	tkanka.wyswietlKomorka();
	cout << endl;

	cout << "Istota zywa" << endl;
	istota karaluch("Karaluch", "Zyje", "Swiadomy", "Ziemia");
	karaluch.wyswietlKomorka();
	karaluch.wyswietlIstota();
	cout << endl;

	cout << "Zwierze" << endl;
	zwierze pies("Pies", "Zyje", "Swiadomy", "Ziemia", 4, "Drapiezny");
	pies.wyswietlKomorka();
	pies.wyswietlIstota();
	pies.wyswietlZwierze();
	cout << endl;

	cout << "Czlowiek" << endl;
	czlowiek adam("Czlowiek", "Zyje", "Swiadomy", "Ziemia", 4, "Wszystkozerny", "Adam", "Mezczyzna");
	adam.wyswietlKomorka();
	adam.wyswietlIstota();
	adam.wyswietlZwierze();
	adam.wyswietlCzlowiek();
	cout << endl;

	cout << "Obca czastka" << endl;
	czastka vibranium("Vibranium","Wakanda");
	vibranium.wyswietlCzastka();
	cout << endl;

	cout << "Alien" << endl;
	alien Thanos("Tytan", "Zyje", "Swiadomy", "Titan", "Thanos", "Kosmos", "Zly", "Znany");
	Thanos.wyswietlKomorka();
	Thanos.wyswietlIstota();
	Thanos.wyswietlAlien();
	cout << endl;
}
