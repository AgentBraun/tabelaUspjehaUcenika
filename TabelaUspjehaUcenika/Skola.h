#pragma once
#include <vector>
#include <string>
#include "Ucenik.h"
#include "Razred.h"

using namespace std;

class Skola {
public:
	//private:
	string imeSkole;
	string mjesto;
	int polugodiste;
	string godina;
	vector <Razred> razredi;
	vector <float> prosjecnaOcjenaRazreda;
	// provjeriti kasnije da li će trebati da upišemo varijable za ukupan broj učenika M , Ž, Svega, primjerno, vrldobro itd.

	//funkcije
	void izracunajProsjecnuOcjenu();

	//seteri
	void setIme(string ime);
	void setMjesto(string novoMjesto);
	void setPolugodiste(int broj);
	void setGodina(string godine);
	void setRazred(Razred);

	//geteri
	string getImeSkole();
	string getMjesto();
	string getPolugodiste();
	string getGodina();
	vector <Razred> getRazrede();
	vector <float> getProsjecnaOcjenaRazreda();
};
