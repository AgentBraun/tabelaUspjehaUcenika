#pragma once
#include <vector>
#include <string>
#include "Ucenik.h"

using namespace std;

struct StructBrojOcjenaPoPredmetu {
	int odlicni;
	int vrloDobro;
	int dobri;
	int zadovoljavajuci;
	int nedovoljni;
};

struct StructbrojUkora {
	int ukorOS;
	int ukorOV;
	int ukorDirektora;
	int ukorNV;
	int iskljucenje;
};

struct StructBrojUcenika {
	int brojMuskih;
	int brojZenskih;
	int ukupno;
};

struct StructBrojUcenikaPoUspjehu {
	int odlicni;
	int vrloDobri;
	int dobri;
	int dovoljnih;
	float procentualnoPozitivnih;
	struct nedovoljni {
		int jednaNedovoljna;
		int dvijeNedovoljne;
		int triIViseNedovoljnih;
		int ukupno;
		float procentualnoNedovoljnih;
	};
	struct neocjenjeni {
		int neocjenjeniUcenici{ 0 };
		int procentualnoNeocjenjenih;
	};
};

struct StructBrojUcenikaPoVladanju {
	int primjerni;
	int vrloDobri;
	int dobri;
	int zadovoljavajuci;
	int losi;
};

class Razred {
	//private:
public:
	string imeRazreda;
	string imeRazrednika;
	vector <string> predmeti;
	vector <Ucenik> ucenici;
	vector <float> srednjaOcjenaPredmeta;

	vector <StructBrojOcjenaPoPredmetu> ukupanBrojOcjenaPoPredmetu;

	float srednjaOcjenaRazreda;
	int ukupanBrojPohvala{ 0 };

	StructbrojUkora brojUkora;
	StructBrojUcenika brojUcenika;
	StructBrojUcenikaPoUspjehu brojUcenikaPoUspjehu;
	StructBrojUcenikaPoVladanju brojUcenikaPoVladanju;


	//public:
		// Funkcije
	void izracunajSrednjuOcjenuPredmeta();
	void iracunajBrojOcjenaPoPredmetu();
	void izracunajSrednjuOcjenuRazreda();
	void izracunajPohvale();
	void izracunajUkore();
	void izracunajSpolUcenika();
	void izracunajBrojUcenikaPoUspjehu();
	void izracunajNedovoljne(); // provjeriti da li je uspjeh učenika manji od 2 ili 17 prije izvršavanje funkcije
	void provjeriNeocjenjene();
	void izracunajBrojUcenikaPoVladanju();

	// Seteri
	void setImeRazreda(string ime);
	void setPredmete(vector <string> predmeti);
	void setUcenici(Ucenik ucenik);
	void setImeRazrednika(string ime);

	//Geteri
	string getImeRazreda();
	string getImeRazrednika();
	vector <string> getPredmeti();
	vector <Ucenik> getUcenici();
	vector <float> getSrednjaOcjenaPredmeta();
	vector <StructBrojOcjenaPoPredmetu> getBrojOcjenaPoPredmetu() { return ukupanBrojOcjenaPoPredmetu; }
	float getSrednjaOcjenaRazreda();
	int getUkupanBrojPohvala();
	StructbrojUkora getBrojUkora() { return brojUkora; }
	StructBrojUcenika getBrojUcenika() { return brojUcenika; }
	StructBrojUcenikaPoUspjehu getBrojUcenikaPoUspjehu() { return brojUcenikaPoUspjehu; }
	StructBrojUcenikaPoVladanju getBrojUcenikaPoVladanju() { return brojUcenikaPoVladanju; }
};

