#pragma once
#include <vector>
#include <string>


using namespace std;

struct StructIzostanci {
	int opravdano;
	int neopravdano;
	int ukupno;
};

enum Vladanje {
	lose = 1,
	zadovoljavajuce,
	dobro,
	vrloDobro,
	primjerno,
};

enum Ukori {
	nema,
	ukorOS,
	ukorOV,
	ukorDirektora,
	ukorNV,
	iskljucenje,
};


class Ucenik {
	//private:
public:
	string ime;
	string prezime;
	vector <int> nizOcjena;
	int spol;
	int opciUspjeh;
	int brojNedovoljnih{ 0 };
	bool neocjenjen{ false };

	StructIzostanci izostanci;

	Vladanje vladanje; //napraviti funkciju koja će na osnovu neopravdanih časova smanjiti vladanje. 
	//ako slučajno neko napusti razred, zbog rednog broja, 
	//umjesto ocjena napisati će se da učenik nije aktivan.
	bool aktivan{ true };
	//Staviti checkbox u formi za pohvalu.
	bool pohvala{ false };
	bool dioRazreda{ false };
	Ukori ukor{ nema };

	//public:
		//funkcije
	void izracunajProsjekOcjena();
	void izracunajUkupnoIzostanke();
	void izracunajBrojNedovoljnih();
	void provjeriNeocjenjen();
	void provjeriNeopravdane();
	void toggleDioRazreda();

	//Seteri
	void setimeUcenika(string ime);
	void setPrezimeUcenika(string prezime);
	void setNizOcjena(vector <int> ocjene);
	void setIzostanci(int opravdano, int neopravdano);
	void setVladanje(int ocjena);
	void toggleAktivan();
	void togglePohvala();
	void setUkor(int ukor); // provjeriti kako uraditi unos

	//Geteri
	string getImeUcenika();
	string getPrezimeUcenika();
	vector <int> getNizOcjena();
	int getOpciUspjeh();
	int getBrojNedovoljnih();
	bool getNeocjenjen();
	StructIzostanci getIzostanke() { return izostanci; }
	string getVladanje(Vladanje vladanje);
	bool getAktivan();
	bool getDioRazreda();
	string getUkor(Ukori ukor);
};


