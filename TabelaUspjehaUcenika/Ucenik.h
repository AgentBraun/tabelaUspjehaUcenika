#pragma once
#include <vector>
#include <string>

using namespace std;

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
	private:
//public:
	//unešeni podaci
	int ucenikID;
	string ime;
	string prezime;
	string spol;
	Vladanje vladanje; //napraviti funkciju koja će na osnovu neopravdanih časova smanjiti vladanje.
	
	int opravdaniIzostanci;
	int neopravdanIzostanci;
	bool pohvala{ false };
	Ukori ukor;
	vector <int> nizOcjena{};

	
	int ucenikRazredID{100};

	//izračunati podaci
	int opciUspjeh{};
	int brojNedovoljnih{ 0 };
	bool neocjenjen{ false };
	int ukupnoIzostanci{};


	//ako slučajno neko napusti razred, zbog rednog broja, 
	bool aktivan{ true };
	bool dioRazreda{ false };


	public:

		// Konstrukcija
	Ucenik(string ime = "Ime", string prezime = "Prezime", string spol = "Musko", int opravdaniSati = 0, int neopravdaniSati = 0, int noviUcenikID=0, int noviUcenikRazredID=100, Vladanje vladanje = primjerno, Ukori ukor = nema);

		//funkcije
	void izracunajProsjekOcjena();
	void izracunajUkupnoIzostanke();
	void izracunajBrojNedovoljnih();
	void provjeriNeocjenjen();
	void provjeriNeopravdane();
	void toggleDioRazreda();

	//Seteri
	void setUcenikID(int noviID) { this->ucenikID = noviID; }
	void setimeUcenika(string novoIme) { this->ime = novoIme; }
	void setPrezimeUcenika(string novoPrezime) { this->prezime = novoPrezime; }
	void setNizOcjena(vector <int> ocjene) { this->nizOcjena = ocjene; }
	void setIzostanci(int opravdano, int neopravdano);
	void setVladanje(int ocjena);
	void toggleAktivan();
	void togglePohvala();
	void setUkor(int ukor); // provjeriti kako uraditi unos
	void setUcenikRazredID(int broj);
	void setOcjene(vector <int> ocjene);

	//Geteri
	int getIDUcenika() { return ucenikID; }
	string getImeUcenika() {return ime;}
	string getPrezimeUcenika() { return prezime; }
	string getSpolUcenika() { return spol; }
	Vladanje getVladanjeUcenika() { return vladanje; }
	vector <int> getNizOcjena() {return nizOcjena; }
	int getOpravdani() { return opravdaniIzostanci; }
	int getNeopravdani() { return neopravdanIzostanci; }
	int getUkupIzostanci() { return ukupnoIzostanci; }
	bool getPohvala() {	return pohvala;}
	Ukori getUkor() { return ukor; }
	int getUcenikRazredID() { return ucenikRazredID; }
	int getOpciUspjeh() { return opciUspjeh; }
	int getBrojNedovoljnih();
	bool getNeocjenjen();
	//string getVladanje(Vladanje vladanje);
	bool getAktivan();
	bool getDioRazreda();
	
};

Ucenik::Ucenik(string novoIme, string novoPrezime, string noviSpol, int noviOpravdaniSati, int noviNeopravdaniSati, int noviUcenikID, int noviUcenikRazredID, Vladanje novoVladanje, Ukori noviUkor) {
ime = novoIme;
prezime = novoPrezime;
spol = noviSpol;
opravdaniIzostanci = noviOpravdaniSati;
neopravdanIzostanci = noviNeopravdaniSati;
ucenikID = noviUcenikID;
ucenikRazredID = noviUcenikRazredID;
vladanje = novoVladanje;
ukor = noviUkor;
}

// ime(novoIme), prezime(novoPrezime), spol(noviSpol), opravdaniIzostanci(noviOpravdaniSati), neopravdanIzostanci(noviNeopravdaniSati), ucenikID(noviUcenikID), vladanje(novoVladanje), ukor(noviUkor) 

void Ucenik::izracunajUkupnoIzostanke() {
	this->ukupnoIzostanci = this->opravdaniIzostanci + this->neopravdanIzostanci;
}

void Ucenik::izracunajProsjekOcjena() {
		float sum{0};
		float opciUspjeh{};
		for (auto ocjene : this->nizOcjena)
			sum += ocjene;
		opciUspjeh = sum / this->nizOcjena.size();
		this->opciUspjeh  = round(opciUspjeh);
	}

void Ucenik::provjeriNeopravdane() {
	if (this->neopravdanIzostanci > 7)  {
		if (this->vladanje = primjerno) {
			this->vladanje = vrloDobro;
		} else if (this->vladanje = vrloDobro)
			this->vladanje = dobro;
	}
}

void Ucenik::setUcenikRazredID(int broj) {
	this->ucenikRazredID = broj;
}

void Ucenik::setOcjene(vector <int> ocjene) {
	this->nizOcjena = ocjene;
}
