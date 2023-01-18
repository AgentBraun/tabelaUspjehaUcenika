#pragma once
#include <vector>
#include <string>

using namespace std;

class Razred {
private:

	//unešeni podaci
	int razredID;
	string imeRazreda;
	string imeRazrednika;
	vector <string> predmeti;
	

	////izračunati podaci
	vector <float> srednjaOcjenaPredmeta;
	float srednjaOcjenaRazreda;
	//int ukupanBrojPohvala{ 0 };
	// broj ocjena po predmetu

	/*int brojOcjenaPoPredmetuOdlicni;
	int brojOcjenaPoPredmetuVrloDobro;
	int brojOcjenaPoPredmetuDobri;
	int brojOcjenaPoPredmetuZadovoljavajuci;
	int brojOcjenaPoPredmetuNedovoljni*/;


	//Broj ukupnih ukora

	/*int brojUkorOS;
	int brojUkorOV;
	int brojUkorDirektora;
	int brojUkorNV;
	int brojIskljucenje;*/

	//Ukupan broj učenika po spolu

	/*int BrojUcenikaMuskih;
	int BrojUcenikaZenskih;
	int BrojUcenikaukupnoMiZ;*/


	// Broj Ucenika po uspjehu

	/*int brojUcenikaPoUspjehuOdlicni;
	int brojUcenikaPoUspjehuVrloDobri;
	int brojUcenikaPoUspjehuDobri;
	int brojUcenikaPoUspjehuDovoljnih;
	float procentualnoUcenikaSaPozitivnim;*/


	// Broj ucenika 

	/*int brojUcenikaSaNegativnimJednaNedovoljna;
	int brojUcenikaSaNegativnimDvijeNedovoljne;
	int brojUcenikaSaNegativnimTriIViseNedovoljnih;
	int brojUcenikaSaNegativnimUkupno;
	float ProcentualnoUcenikaSaNegativnim;*/

	// Broj učenika sa neocjenjenim ocjenama

	/*int neocjenjeniUcenici{ 0 };
	int procentualnoNeocjenjenih;*/

	//Broj učenika po vladanju

	/*int brojUcenikaPoVladanjuPrimjerni;
	int brojUcenikaPoVladanjuVrloDobri;
	int brojUcenikaPoVladanjuDobri;
	int brojUcenikaPoVladanjuZadovoljavajuci;
	int brojUcenikaPoVladanjuLosi;*/

	public:
	//konstruktor
	Razred(int razredID, string imeRazreda, string imeRazrednika, vector<string> predmeti);

	// funkcije za računanje
	void izracunajSrednjuOcjenuPredmeta();
	void iracunajBrojOcjenaPoPredmetu();
	void izracunajSrednjuOcjenuRazreda();
	//void izracunajPohvale();
	//void izracunajUkore();
	//void izracunajSpolUcenika();
	//void izracunajBrojUcenikaPoUspjehu();
	//void izracunajNedovoljne(); // provjeriti da li je uspjeh učenika manji od 2 ili 17 prije izvršavanje funkcije
	//void provjeriNeocjenjene();
	//void izracunajBrojUcenikaPoVladanju();


	// Seteri
	void setImeRazreda(string ime);
	void setPredmete(vector <string> predmeti);
	void setImeRazrednika(string ime);

	// Geteri
	string getImeRazreda() { return imeRazreda; }
	string getImeRazrednika() { return imeRazrednika; }
	vector <string> getPredmeti() { return predmeti; }
	vector <float> getSrednjaOcjenaPredmeta() { return srednjaOcjenaPredmeta; }
	float getSrednjaOcjenaRazreda() { return srednjaOcjenaRazreda; }
	int getRazredID() { return razredID; }
 	//int getUkupanBrojPohvala();
};

Razred::Razred(int noviRazredID, string novoImeRazreda, string novoImeRazrednika, vector<string> NoviPredmeti) {
	razredID = noviRazredID;
	imeRazreda = novoImeRazreda;
	imeRazrednika = novoImeRazrednika;
	predmeti = NoviPredmeti;
}