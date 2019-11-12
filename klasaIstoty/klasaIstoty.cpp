#include <iostream>
#include "komorka.h"
#include "istota.h"

using namespace std;

int main()
{
	cout << "Zywa komorka"<<endl;
	komorka tkanka("Tkanka", "Zyje");
	tkanka.wyswietlKomorka();
	cout << endl;
	cout << "Istota zywa" << endl;
	istota postac("Czlowiek", "Zyje", "Swiadomy", "Ziemia");
	postac.wyswietlIstota();
}
