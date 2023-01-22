#pragma once
#include <vector>
#include <string>
#include <string.h>
#include <msclr/marshal_cppstd.h>
#include <fstream>


namespace TabelaUspjehaUcenika {
#include "Ucenik.h"
#include "Razred.h"

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	vector <Ucenik> sviUcenici;
	vector <Razred> sviRazredi;
	

	//pomočni vektori
	vector <string> predmetiZaNoviRazred;
	vector <Ucenik> uceniciBezRazreda;
	vector <Razred> razrediBezUcenika;
	vector <Ucenik> uoUcenici;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Panel^ pocetnaStrana;


	private: System::Windows::Forms::Panel^ meniPocetnaStrana;
	private: System::Windows::Forms::Button^ psBtnUcenici;
	private: System::Windows::Forms::Panel^ uceniciStrana;
	private: System::Windows::Forms::ListBox^ listaUceniciNeURazredu;
	private: System::Windows::Forms::ListBox^ listaUceniciURazredu;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ meniUcenici;
	private: System::Windows::Forms::Button^ umBtnNazad;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ xPocetnaStrana;



	private: System::Windows::Forms::Label^ glavniNaslov;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ xUcenici;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ psBtnNapustiApp;
	private: System::Windows::Forms::Button^ psBtnTabele;
	private: System::Windows::Forms::Button^ psBtnRazredi;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ umBtnIzmjeniUcenika;
	private: System::Windows::Forms::Button^ umBtnDodajUcenika;
	private: System::Windows::Forms::Panel^ dodajUcenikaStrana;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ xDodajUcenika;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ duBtnNazad;


	private: System::Windows::Forms::Panel^ izmjeniUcenikaStrana;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ iuBtnNazad;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ xIzmjeniUcenika;


	private: System::Windows::Forms::Label^ iuGlavniNaslov;
	private: System::Windows::Forms::GroupBox^ groupBox1;









	private: System::Windows::Forms::TextBox^ duTFIme;
	private: System::Windows::Forms::TextBox^ duTFNeopravdani;


	private: System::Windows::Forms::Label^ labelduIme;
	private: System::Windows::Forms::TextBox^ duTFOpravdani;

	private: System::Windows::Forms::Label^ labelduPrezime;
	private: System::Windows::Forms::Label^ labelduIzostanciNP;
	private: System::Windows::Forms::Label^ labelduIzostanciOP;
	private: System::Windows::Forms::Label^ labelduIzostanci;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ duListaSviUcenici;



	private:








	private: System::Windows::Forms::Label^ label2;

	private:
	private: System::Windows::Forms::Button^ button3;
	public protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	public protected: System::Windows::Forms::RadioButton^ radioButton11;
	private:
	private: System::Windows::Forms::RadioButton^ radioButton12;
	public protected:
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	public protected: System::Windows::Forms::RadioButton^ radioButton16;
	private:
	private: System::Windows::Forms::GroupBox^ groupBox7;
	public protected:
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ duBtnDodajUcenika;

	private: System::Windows::Forms::Panel^ razrediStrana;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ rBtnIzmjeniRazred;
	private: System::Windows::Forms::Button^ rBtnUnesiOcjene;
	private: System::Windows::Forms::Button^ rBtnRasporediUcenike;
	private: System::Windows::Forms::Button^ rBtnDodajRazred;
	private: System::Windows::Forms::Button^ rBtnNazad;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::ListBox^ listaRazredaSaUcenicima;

	private: System::Windows::Forms::ListBox^ listaRazrediBezUcenika;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ dodajRazredStrana;
private: System::Windows::Forms::Button^ drBtnDodajRazred;

private: System::Windows::Forms::Button^ drBtnIzbrisiPredmet;

private: System::Windows::Forms::Button^ drBtnDodajPredmet;
private: System::Windows::Forms::ListBox^ drListaPredmeti;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::TextBox^ drTFImeRazrednika;
private: System::Windows::Forms::TextBox^ drTFImeRazreda;



	private:

	public protected:




	private:

	public protected:









	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ drTFPredmet;






	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ drBtnNazad;

	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::PictureBox^ xdodajRazred;


	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ izmjeniRazredStrana;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::ListBox^ lista;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ irBtnNazad;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::PictureBox^ xIzmjeniRazred;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Panel^ rasporediUcenikeStrana;
private: System::Windows::Forms::Button^ ruBtnPrikaziUcenike;

private: System::Windows::Forms::Button^ ruBtnIzbaciIZRazreda;

private: System::Windows::Forms::Button^ ruBtnUbaciURazred;

	private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ListBox^ ruListaUceniciURazredu;

private: System::Windows::Forms::ListBox^ ruListaRazredi;

private: System::Windows::Forms::ListBox^ ruListaUceniciBezRazreda;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ ruBtnNazad;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::PictureBox^ xRasporediUcenike;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Panel^ unesiOcjeneStrana;
private: System::Windows::Forms::Button^ uoBtnPrikaziOcjene;

private: System::Windows::Forms::Button^ uoBtnDodajOcjenu;
private: System::Windows::Forms::Button^ uoBtnPromjeniOcjenu;


	private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::ListBox^ uoListaOcjene;

private: System::Windows::Forms::ListBox^ uoListaPredmeti;

private: System::Windows::Forms::ListBox^ uoListaUceniciURazredu;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ uoBtnNazad;

	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::PictureBox^ xUnesiOcjene;

	private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ uoTFOcjena;

	private: System::Windows::Forms::Label^ label37;


	private: System::Windows::Forms::Label^ tuuLabelOpciUspjeh;



	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::ToolStrip^ listaPredmetaUcenika;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;

	private: System::Windows::Forms::Panel^ stranaTabelaUspjehaUcenika;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Panel^ tabeleStrana;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ tabBtnNazad;
	private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::PictureBox^ xTabele;


	private: System::Windows::Forms::ListBox^ listBox10;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ tabBtnTabelaUspjehaUcenika;
private: System::Windows::Forms::ComboBox^ duComboVladanje;
private: System::Windows::Forms::TextBox^ duTFPrezime;
private: System::Windows::Forms::ComboBox^ duComboUkor;

private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::ComboBox^ duComboSpol;

private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Button^ uoBtnSacuvajOcjene;
private: System::Windows::Forms::ListBox^ tabListaRazrediPuni;
private: System::Windows::Forms::PictureBox^ xTabUspUcenika;


private: System::Windows::Forms::Button^ ruBtnSpremi;

























































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pocetnaStrana = (gcnew System::Windows::Forms::Panel());
			this->meniPocetnaStrana = (gcnew System::Windows::Forms::Panel());
			this->psBtnNapustiApp = (gcnew System::Windows::Forms::Button());
			this->psBtnTabele = (gcnew System::Windows::Forms::Button());
			this->psBtnRazredi = (gcnew System::Windows::Forms::Button());
			this->psBtnUcenici = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->xPocetnaStrana = (gcnew System::Windows::Forms::PictureBox());
			this->glavniNaslov = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->uceniciStrana = (gcnew System::Windows::Forms::Panel());
			this->meniUcenici = (gcnew System::Windows::Forms::Panel());
			this->umBtnIzmjeniUcenika = (gcnew System::Windows::Forms::Button());
			this->umBtnDodajUcenika = (gcnew System::Windows::Forms::Button());
			this->umBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->xUcenici = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listaUceniciNeURazredu = (gcnew System::Windows::Forms::ListBox());
			this->listaUceniciURazredu = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dodajUcenikaStrana = (gcnew System::Windows::Forms::Panel());
			this->duBtnDodajUcenika = (gcnew System::Windows::Forms::Button());
			this->duListaSviUcenici = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->duComboUkor = (gcnew System::Windows::Forms::ComboBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->duComboSpol = (gcnew System::Windows::Forms::ComboBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->duComboVladanje = (gcnew System::Windows::Forms::ComboBox());
			this->duTFPrezime = (gcnew System::Windows::Forms::TextBox());
			this->duTFIme = (gcnew System::Windows::Forms::TextBox());
			this->duTFNeopravdani = (gcnew System::Windows::Forms::TextBox());
			this->labelduIme = (gcnew System::Windows::Forms::Label());
			this->duTFOpravdani = (gcnew System::Windows::Forms::TextBox());
			this->labelduPrezime = (gcnew System::Windows::Forms::Label());
			this->labelduIzostanciNP = (gcnew System::Windows::Forms::Label());
			this->labelduIzostanciOP = (gcnew System::Windows::Forms::Label());
			this->labelduIzostanci = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->duBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->xDodajUcenika = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->izmjeniUcenikaStrana = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->iuBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->xIzmjeniUcenika = (gcnew System::Windows::Forms::PictureBox());
			this->iuGlavniNaslov = (gcnew System::Windows::Forms::Label());
			this->razrediStrana = (gcnew System::Windows::Forms::Panel());
			this->listaRazredaSaUcenicima = (gcnew System::Windows::Forms::ListBox());
			this->listaRazrediBezUcenika = (gcnew System::Windows::Forms::ListBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->rBtnIzmjeniRazred = (gcnew System::Windows::Forms::Button());
			this->rBtnUnesiOcjene = (gcnew System::Windows::Forms::Button());
			this->rBtnRasporediUcenike = (gcnew System::Windows::Forms::Button());
			this->rBtnDodajRazred = (gcnew System::Windows::Forms::Button());
			this->rBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dodajRazredStrana = (gcnew System::Windows::Forms::Panel());
			this->drBtnDodajRazred = (gcnew System::Windows::Forms::Button());
			this->drBtnIzbrisiPredmet = (gcnew System::Windows::Forms::Button());
			this->drBtnDodajPredmet = (gcnew System::Windows::Forms::Button());
			this->drListaPredmeti = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->drTFImeRazrednika = (gcnew System::Windows::Forms::TextBox());
			this->drTFImeRazreda = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->drTFPredmet = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->drBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->xdodajRazred = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->izmjeniRazredStrana = (gcnew System::Windows::Forms::Panel());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->lista = (gcnew System::Windows::Forms::ListBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->irBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->xIzmjeniRazred = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->rasporediUcenikeStrana = (gcnew System::Windows::Forms::Panel());
			this->ruBtnSpremi = (gcnew System::Windows::Forms::Button());
			this->ruBtnPrikaziUcenike = (gcnew System::Windows::Forms::Button());
			this->ruBtnIzbaciIZRazreda = (gcnew System::Windows::Forms::Button());
			this->ruBtnUbaciURazred = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->ruListaUceniciURazredu = (gcnew System::Windows::Forms::ListBox());
			this->ruListaRazredi = (gcnew System::Windows::Forms::ListBox());
			this->ruListaUceniciBezRazreda = (gcnew System::Windows::Forms::ListBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->ruBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->xRasporediUcenike = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->unesiOcjeneStrana = (gcnew System::Windows::Forms::Panel());
			this->uoBtnSacuvajOcjene = (gcnew System::Windows::Forms::Button());
			this->uoTFOcjena = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->uoBtnPrikaziOcjene = (gcnew System::Windows::Forms::Button());
			this->uoBtnDodajOcjenu = (gcnew System::Windows::Forms::Button());
			this->uoBtnPromjeniOcjenu = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->uoListaOcjene = (gcnew System::Windows::Forms::ListBox());
			this->uoListaPredmeti = (gcnew System::Windows::Forms::ListBox());
			this->uoListaUceniciURazredu = (gcnew System::Windows::Forms::ListBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->uoBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->xUnesiOcjene = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tuuLabelOpciUspjeh = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->listaPredmetaUcenika = (gcnew System::Windows::Forms::ToolStrip());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->stranaTabelaUspjehaUcenika = (gcnew System::Windows::Forms::Panel());
			this->xTabUspUcenika = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->tabeleStrana = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->tabBtnTabelaUspjehaUcenika = (gcnew System::Windows::Forms::Button());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->tabBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->xTabele = (gcnew System::Windows::Forms::PictureBox());
			this->tabListaRazrediPuni = (gcnew System::Windows::Forms::ListBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pocetnaStrana->SuspendLayout();
			this->meniPocetnaStrana->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xPocetnaStrana))->BeginInit();
			this->uceniciStrana->SuspendLayout();
			this->meniUcenici->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xUcenici))->BeginInit();
			this->dodajUcenikaStrana->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xDodajUcenika))->BeginInit();
			this->izmjeniUcenikaStrana->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xIzmjeniUcenika))->BeginInit();
			this->razrediStrana->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->dodajRazredStrana->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xdodajRazred))->BeginInit();
			this->izmjeniRazredStrana->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xIzmjeniRazred))->BeginInit();
			this->rasporediUcenikeStrana->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xRasporediUcenike))->BeginInit();
			this->unesiOcjeneStrana->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xUnesiOcjene))->BeginInit();
			this->panel5->SuspendLayout();
			this->stranaTabelaUspjehaUcenika->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xTabUspUcenika))->BeginInit();
			this->tabeleStrana->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xTabele))->BeginInit();
			this->SuspendLayout();
			// 
			// pocetnaStrana
			// 
			this->pocetnaStrana->Controls->Add(this->meniPocetnaStrana);
			this->pocetnaStrana->Controls->Add(this->label7);
			this->pocetnaStrana->Controls->Add(this->panel1);
			this->pocetnaStrana->Controls->Add(this->label8);
			this->pocetnaStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pocetnaStrana->Location = System::Drawing::Point(0, 0);
			this->pocetnaStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->pocetnaStrana->Name = L"pocetnaStrana";
			this->pocetnaStrana->Size = System::Drawing::Size(1024, 720);
			this->pocetnaStrana->TabIndex = 1;
			// 
			// meniPocetnaStrana
			// 
			this->meniPocetnaStrana->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->meniPocetnaStrana->Controls->Add(this->psBtnNapustiApp);
			this->meniPocetnaStrana->Controls->Add(this->psBtnTabele);
			this->meniPocetnaStrana->Controls->Add(this->psBtnRazredi);
			this->meniPocetnaStrana->Controls->Add(this->psBtnUcenici);
			this->meniPocetnaStrana->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->meniPocetnaStrana->Location = System::Drawing::Point(0, 620);
			this->meniPocetnaStrana->Name = L"meniPocetnaStrana";
			this->meniPocetnaStrana->Size = System::Drawing::Size(1024, 100);
			this->meniPocetnaStrana->TabIndex = 2;
			// 
			// psBtnNapustiApp
			// 
			this->psBtnNapustiApp->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->psBtnNapustiApp->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->psBtnNapustiApp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"psBtnNapustiApp.Image")));
			this->psBtnNapustiApp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->psBtnNapustiApp->Location = System::Drawing::Point(824, 14);
			this->psBtnNapustiApp->Name = L"psBtnNapustiApp";
			this->psBtnNapustiApp->Size = System::Drawing::Size(178, 74);
			this->psBtnNapustiApp->TabIndex = 3;
			this->psBtnNapustiApp->Text = L"Napusti aplikaciju";
			this->psBtnNapustiApp->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->psBtnNapustiApp->UseVisualStyleBackColor = true;
			this->psBtnNapustiApp->Click += gcnew System::EventHandler(this, &MyForm::psBtnNapustiApp_Click);
			// 
			// psBtnTabele
			// 
			this->psBtnTabele->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->psBtnTabele->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->psBtnTabele->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"psBtnTabele.Image")));
			this->psBtnTabele->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->psBtnTabele->Location = System::Drawing::Point(548, 14);
			this->psBtnTabele->Name = L"psBtnTabele";
			this->psBtnTabele->Size = System::Drawing::Size(178, 74);
			this->psBtnTabele->TabIndex = 2;
			this->psBtnTabele->Text = L"Tabele";
			this->psBtnTabele->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->psBtnTabele->UseVisualStyleBackColor = true;
			this->psBtnTabele->Click += gcnew System::EventHandler(this, &MyForm::psBtnTabele_Click);
			// 
			// psBtnRazredi
			// 
			this->psBtnRazredi->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->psBtnRazredi->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->psBtnRazredi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"psBtnRazredi.Image")));
			this->psBtnRazredi->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->psBtnRazredi->Location = System::Drawing::Point(281, 15);
			this->psBtnRazredi->Name = L"psBtnRazredi";
			this->psBtnRazredi->Size = System::Drawing::Size(178, 74);
			this->psBtnRazredi->TabIndex = 1;
			this->psBtnRazredi->Text = L"Razredi";
			this->psBtnRazredi->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->psBtnRazredi->UseVisualStyleBackColor = true;
			this->psBtnRazredi->Click += gcnew System::EventHandler(this, &MyForm::psBtnRazredi_Click);
			// 
			// psBtnUcenici
			// 
			this->psBtnUcenici->Cursor = System::Windows::Forms::Cursors::Hand;
			this->psBtnUcenici->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->psBtnUcenici->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->psBtnUcenici->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"psBtnUcenici.Image")));
			this->psBtnUcenici->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->psBtnUcenici->Location = System::Drawing::Point(20, 15);
			this->psBtnUcenici->Name = L"psBtnUcenici";
			this->psBtnUcenici->Size = System::Drawing::Size(178, 74);
			this->psBtnUcenici->TabIndex = 0;
			this->psBtnUcenici->Text = L"Učenici";
			this->psBtnUcenici->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->psBtnUcenici->UseVisualStyleBackColor = true;
			this->psBtnUcenici->Click += gcnew System::EventHandler(this, &MyForm::psBtnUcenici_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(322, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(483, 22);
			this->label7->TabIndex = 1;
			this->label7->Text = L"razredu (predmeti, opravani, neopravdani časovi, procenti itd).";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->xPocetnaStrana);
			this->panel1->Controls->Add(this->glavniNaslov);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1024, 50);
			this->panel1->TabIndex = 0;
			// 
			// xPocetnaStrana
			// 
			this->xPocetnaStrana->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xPocetnaStrana.BackgroundImage")));
			this->xPocetnaStrana->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xPocetnaStrana->Location = System::Drawing::Point(1001, 6);
			this->xPocetnaStrana->Name = L"xPocetnaStrana";
			this->xPocetnaStrana->Size = System::Drawing::Size(21, 23);
			this->xPocetnaStrana->TabIndex = 1;
			this->xPocetnaStrana->TabStop = false;
			this->xPocetnaStrana->Click += gcnew System::EventHandler(this, &MyForm::xPocetnaStrana_Click);
			// 
			// glavniNaslov
			// 
			this->glavniNaslov->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->glavniNaslov->AutoSize = true;
			this->glavniNaslov->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->glavniNaslov->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->glavniNaslov->Location = System::Drawing::Point(399, 3);
			this->glavniNaslov->Name = L"glavniNaslov";
			this->glavniNaslov->Size = System::Drawing::Size(240, 39);
			this->glavniNaslov->TabIndex = 0;
			this->glavniNaslov->Text = L"Početna Strana";
			this->glavniNaslov->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(270, 112);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(556, 22);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Dobro došli u alpha fazi aplikacije za tabelarni prikaz uspjeha učenika po ";
			// 
			// uceniciStrana
			// 
			this->uceniciStrana->Controls->Add(this->meniUcenici);
			this->uceniciStrana->Controls->Add(this->panel2);
			this->uceniciStrana->Controls->Add(this->listaUceniciNeURazredu);
			this->uceniciStrana->Controls->Add(this->listaUceniciURazredu);
			this->uceniciStrana->Controls->Add(this->label3);
			this->uceniciStrana->Controls->Add(this->label4);
			this->uceniciStrana->Location = System::Drawing::Point(0, 0);
			this->uceniciStrana->Name = L"uceniciStrana";
			this->uceniciStrana->Size = System::Drawing::Size(1024, 720);
			this->uceniciStrana->TabIndex = 3;
			this->uceniciStrana->Visible = false;
			this->uceniciStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::uceniciStrana_VisibleChanged);
			// 
			// meniUcenici
			// 
			this->meniUcenici->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->meniUcenici->Controls->Add(this->umBtnIzmjeniUcenika);
			this->meniUcenici->Controls->Add(this->umBtnDodajUcenika);
			this->meniUcenici->Controls->Add(this->umBtnNazad);
			this->meniUcenici->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->meniUcenici->Location = System::Drawing::Point(0, 620);
			this->meniUcenici->Name = L"meniUcenici";
			this->meniUcenici->Size = System::Drawing::Size(1024, 100);
			this->meniUcenici->TabIndex = 4;
			// 
			// umBtnIzmjeniUcenika
			// 
			this->umBtnIzmjeniUcenika->Enabled = false;
			this->umBtnIzmjeniUcenika->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->umBtnIzmjeniUcenika->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->umBtnIzmjeniUcenika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"umBtnIzmjeniUcenika.Image")));
			this->umBtnIzmjeniUcenika->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->umBtnIzmjeniUcenika->Location = System::Drawing::Point(532, 15);
			this->umBtnIzmjeniUcenika->Name = L"umBtnIzmjeniUcenika";
			this->umBtnIzmjeniUcenika->Size = System::Drawing::Size(178, 74);
			this->umBtnIzmjeniUcenika->TabIndex = 2;
			this->umBtnIzmjeniUcenika->Text = L"Izmjeni učenika";
			this->umBtnIzmjeniUcenika->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->umBtnIzmjeniUcenika->UseVisualStyleBackColor = true;
			this->umBtnIzmjeniUcenika->Click += gcnew System::EventHandler(this, &MyForm::umBtnIzmjeniUcenika_Click);
			// 
			// umBtnDodajUcenika
			// 
			this->umBtnDodajUcenika->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->umBtnDodajUcenika->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->umBtnDodajUcenika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"umBtnDodajUcenika.Image")));
			this->umBtnDodajUcenika->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->umBtnDodajUcenika->Location = System::Drawing::Point(326, 15);
			this->umBtnDodajUcenika->Name = L"umBtnDodajUcenika";
			this->umBtnDodajUcenika->Size = System::Drawing::Size(178, 74);
			this->umBtnDodajUcenika->TabIndex = 1;
			this->umBtnDodajUcenika->Text = L"Dodaj učenika";
			this->umBtnDodajUcenika->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->umBtnDodajUcenika->UseVisualStyleBackColor = true;
			this->umBtnDodajUcenika->Click += gcnew System::EventHandler(this, &MyForm::umBtnDodajUcenika_Click);
			// 
			// umBtnNazad
			// 
			this->umBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->umBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->umBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"umBtnNazad.Image")));
			this->umBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->umBtnNazad->Location = System::Drawing::Point(20, 15);
			this->umBtnNazad->Name = L"umBtnNazad";
			this->umBtnNazad->Size = System::Drawing::Size(178, 74);
			this->umBtnNazad->TabIndex = 0;
			this->umBtnNazad->Text = L"Nazad";
			this->umBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->umBtnNazad->UseVisualStyleBackColor = true;
			this->umBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::umBtnNazad_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->xUcenici);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1024, 50);
			this->panel2->TabIndex = 4;
			// 
			// xUcenici
			// 
			this->xUcenici->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xUcenici.BackgroundImage")));
			this->xUcenici->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xUcenici->Location = System::Drawing::Point(1001, 6);
			this->xUcenici->Name = L"xUcenici";
			this->xUcenici->Size = System::Drawing::Size(21, 23);
			this->xUcenici->TabIndex = 1;
			this->xUcenici->TabStop = false;
			this->xUcenici->Click += gcnew System::EventHandler(this, &MyForm::xUcenici_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(434, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 39);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Učenici";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// listaUceniciNeURazredu
			// 
			this->listaUceniciNeURazredu->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaUceniciNeURazredu->FormattingEnabled = true;
			this->listaUceniciNeURazredu->ItemHeight = 26;
			this->listaUceniciNeURazredu->Location = System::Drawing::Point(620, 130);
			this->listaUceniciNeURazredu->Name = L"listaUceniciNeURazredu";
			this->listaUceniciNeURazredu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listaUceniciNeURazredu->Size = System::Drawing::Size(319, 446);
			this->listaUceniciNeURazredu->TabIndex = 3;
			// 
			// listaUceniciURazredu
			// 
			this->listaUceniciURazredu->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaUceniciURazredu->FormattingEnabled = true;
			this->listaUceniciURazredu->ItemHeight = 26;
			this->listaUceniciURazredu->Location = System::Drawing::Point(68, 130);
			this->listaUceniciURazredu->Name = L"listaUceniciURazredu";
			this->listaUceniciURazredu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listaUceniciURazredu->Size = System::Drawing::Size(319, 446);
			this->listaUceniciURazredu->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(583, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Učenici koji nisu raspoređeni po razredima:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(340, 22);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Učenici koji su raspoređeni po razredima:";
			// 
			// dodajUcenikaStrana
			// 
			this->dodajUcenikaStrana->Controls->Add(this->duBtnDodajUcenika);
			this->dodajUcenikaStrana->Controls->Add(this->duListaSviUcenici);
			this->dodajUcenikaStrana->Controls->Add(this->label2);
			this->dodajUcenikaStrana->Controls->Add(this->groupBox1);
			this->dodajUcenikaStrana->Controls->Add(this->panel3);
			this->dodajUcenikaStrana->Controls->Add(this->panel4);
			this->dodajUcenikaStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dodajUcenikaStrana->Location = System::Drawing::Point(0, 0);
			this->dodajUcenikaStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->dodajUcenikaStrana->Name = L"dodajUcenikaStrana";
			this->dodajUcenikaStrana->Size = System::Drawing::Size(1024, 720);
			this->dodajUcenikaStrana->TabIndex = 2;
			this->dodajUcenikaStrana->Visible = false;
			this->dodajUcenikaStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::dodajUcenikaStrana_VisibleChanged);
			// 
			// duBtnDodajUcenika
			// 
			this->duBtnDodajUcenika->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->duBtnDodajUcenika->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duBtnDodajUcenika->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->duBtnDodajUcenika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"duBtnDodajUcenika.Image")));
			this->duBtnDodajUcenika->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->duBtnDodajUcenika->Location = System::Drawing::Point(424, 301);
			this->duBtnDodajUcenika->Name = L"duBtnDodajUcenika";
			this->duBtnDodajUcenika->Size = System::Drawing::Size(235, 84);
			this->duBtnDodajUcenika->TabIndex = 27;
			this->duBtnDodajUcenika->Text = L"Dodaj učenika";
			this->duBtnDodajUcenika->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->duBtnDodajUcenika->UseVisualStyleBackColor = false;
			this->duBtnDodajUcenika->Click += gcnew System::EventHandler(this, &MyForm::duBtnDodajUcenika_Click);
			// 
			// duListaSviUcenici
			// 
			this->duListaSviUcenici->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duListaSviUcenici->FormattingEnabled = true;
			this->duListaSviUcenici->ItemHeight = 26;
			this->duListaSviUcenici->Location = System::Drawing::Point(684, 145);
			this->duListaSviUcenici->Name = L"duListaSviUcenici";
			this->duListaSviUcenici->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->duListaSviUcenici->Size = System::Drawing::Size(281, 420);
			this->duListaSviUcenici->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(747, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 33);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Svi učenici:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->duComboUkor);
			this->groupBox1->Controls->Add(this->label49);
			this->groupBox1->Controls->Add(this->duComboSpol);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->duComboVladanje);
			this->groupBox1->Controls->Add(this->duTFPrezime);
			this->groupBox1->Controls->Add(this->duTFIme);
			this->groupBox1->Controls->Add(this->duTFNeopravdani);
			this->groupBox1->Controls->Add(this->labelduIme);
			this->groupBox1->Controls->Add(this->duTFOpravdani);
			this->groupBox1->Controls->Add(this->labelduPrezime);
			this->groupBox1->Controls->Add(this->labelduIzostanciNP);
			this->groupBox1->Controls->Add(this->labelduIzostanciOP);
			this->groupBox1->Controls->Add(this->labelduIzostanci);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(20, 126);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(381, 437);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Unesite tražene podatke";
			// 
			// duComboUkor
			// 
			this->duComboUkor->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duComboUkor->FormattingEnabled = true;
			this->duComboUkor->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Nema", L"Ukor OS", L"Ukor OV", L"Ukor Direktora",
					L"Ukor NV", L"Isključenje"
			});
			this->duComboUkor->Location = System::Drawing::Point(174, 358);
			this->duComboUkor->Name = L"duComboUkor";
			this->duComboUkor->Size = System::Drawing::Size(175, 34);
			this->duComboUkor->TabIndex = 28;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(81, 359);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(70, 28);
			this->label49->TabIndex = 27;
			this->label49->Text = L"Ukor:";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// duComboSpol
			// 
			this->duComboSpol->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duComboSpol->FormattingEnabled = true;
			this->duComboSpol->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Muško", L"Žensko" });
			this->duComboSpol->Location = System::Drawing::Point(175, 197);
			this->duComboSpol->Name = L"duComboSpol";
			this->duComboSpol->Size = System::Drawing::Size(175, 34);
			this->duComboSpol->TabIndex = 24;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(89, 202);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(62, 28);
			this->label44->TabIndex = 23;
			this->label44->Text = L"Spol:";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// duComboVladanje
			// 
			this->duComboVladanje->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duComboVladanje->FormattingEnabled = true;
			this->duComboVladanje->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Primjerno", L"Vrlo Dobro", L"Dobro", L"Zadovoljavajuće",
					L"Loše"
			});
			this->duComboVladanje->Location = System::Drawing::Point(175, 252);
			this->duComboVladanje->Name = L"duComboVladanje";
			this->duComboVladanje->Size = System::Drawing::Size(175, 34);
			this->duComboVladanje->TabIndex = 22;
			// 
			// duTFPrezime
			// 
			this->duTFPrezime->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duTFPrezime->Location = System::Drawing::Point(175, 143);
			this->duTFPrezime->Name = L"duTFPrezime";
			this->duTFPrezime->Size = System::Drawing::Size(176, 36);
			this->duTFPrezime->TabIndex = 8;
			// 
			// duTFIme
			// 
			this->duTFIme->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duTFIme->Location = System::Drawing::Point(175, 93);
			this->duTFIme->Name = L"duTFIme";
			this->duTFIme->Size = System::Drawing::Size(176, 36);
			this->duTFIme->TabIndex = 6;
			// 
			// duTFNeopravdani
			// 
			this->duTFNeopravdani->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duTFNeopravdani->Location = System::Drawing::Point(306, 299);
			this->duTFNeopravdani->Name = L"duTFNeopravdani";
			this->duTFNeopravdani->Size = System::Drawing::Size(46, 36);
			this->duTFNeopravdani->TabIndex = 18;
			// 
			// labelduIme
			// 
			this->labelduIme->AutoSize = true;
			this->labelduIme->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIme->Location = System::Drawing::Point(93, 96);
			this->labelduIme->Name = L"labelduIme";
			this->labelduIme->Size = System::Drawing::Size(58, 28);
			this->labelduIme->TabIndex = 7;
			this->labelduIme->Text = L"Ime:";
			this->labelduIme->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// duTFOpravdani
			// 
			this->duTFOpravdani->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duTFOpravdani->Location = System::Drawing::Point(203, 299);
			this->duTFOpravdani->Name = L"duTFOpravdani";
			this->duTFOpravdani->Size = System::Drawing::Size(46, 36);
			this->duTFOpravdani->TabIndex = 17;
			// 
			// labelduPrezime
			// 
			this->labelduPrezime->AutoSize = true;
			this->labelduPrezime->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduPrezime->Location = System::Drawing::Point(49, 146);
			this->labelduPrezime->Name = L"labelduPrezime";
			this->labelduPrezime->Size = System::Drawing::Size(102, 28);
			this->labelduPrezime->TabIndex = 9;
			this->labelduPrezime->Text = L"Prezime:";
			this->labelduPrezime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelduIzostanciNP
			// 
			this->labelduIzostanciNP->AutoSize = true;
			this->labelduIzostanciNP->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIzostanciNP->Location = System::Drawing::Point(260, 302);
			this->labelduIzostanciNP->Name = L"labelduIzostanciNP";
			this->labelduIzostanciNP->Size = System::Drawing::Size(41, 28);
			this->labelduIzostanciNP->TabIndex = 16;
			this->labelduIzostanciNP->Text = L"NP";
			this->labelduIzostanciNP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelduIzostanciOP
			// 
			this->labelduIzostanciOP->AutoSize = true;
			this->labelduIzostanciOP->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIzostanciOP->Location = System::Drawing::Point(157, 302);
			this->labelduIzostanciOP->Name = L"labelduIzostanciOP";
			this->labelduIzostanciOP->Size = System::Drawing::Size(41, 28);
			this->labelduIzostanciOP->TabIndex = 15;
			this->labelduIzostanciOP->Text = L"OP";
			this->labelduIzostanciOP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelduIzostanci
			// 
			this->labelduIzostanci->AutoSize = true;
			this->labelduIzostanci->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIzostanci->Location = System::Drawing::Point(40, 301);
			this->labelduIzostanci->Name = L"labelduIzostanci";
			this->labelduIzostanci->Size = System::Drawing::Size(111, 28);
			this->labelduIzostanci->TabIndex = 14;
			this->labelduIzostanci->Text = L"Izostanci:";
			this->labelduIzostanci->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 28);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Vladanje:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Controls->Add(this->duBtnNazad);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 620);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1024, 100);
			this->panel3->TabIndex = 5;
			// 
			// duBtnNazad
			// 
			this->duBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->duBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"duBtnNazad.Image")));
			this->duBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->duBtnNazad->Location = System::Drawing::Point(20, 15);
			this->duBtnNazad->Name = L"duBtnNazad";
			this->duBtnNazad->Size = System::Drawing::Size(178, 74);
			this->duBtnNazad->TabIndex = 0;
			this->duBtnNazad->Text = L"Nazad";
			this->duBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->duBtnNazad->UseVisualStyleBackColor = true;
			this->duBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::duBtnNazad_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel4->Controls->Add(this->xDodajUcenika);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1024, 50);
			this->panel4->TabIndex = 0;
			// 
			// xDodajUcenika
			// 
			this->xDodajUcenika->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xDodajUcenika.BackgroundImage")));
			this->xDodajUcenika->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xDodajUcenika->Location = System::Drawing::Point(1001, 6);
			this->xDodajUcenika->Name = L"xDodajUcenika";
			this->xDodajUcenika->Size = System::Drawing::Size(21, 23);
			this->xDodajUcenika->TabIndex = 1;
			this->xDodajUcenika->TabStop = false;
			this->xDodajUcenika->Click += gcnew System::EventHandler(this, &MyForm::xDodajUcenika_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(399, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 39);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Dodaj Učenika";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// izmjeniUcenikaStrana
			// 
			this->izmjeniUcenikaStrana->Controls->Add(this->button3);
			this->izmjeniUcenikaStrana->Controls->Add(this->button2);
			this->izmjeniUcenikaStrana->Controls->Add(this->button1);
			this->izmjeniUcenikaStrana->Controls->Add(this->listBox2);
			this->izmjeniUcenikaStrana->Controls->Add(this->label15);
			this->izmjeniUcenikaStrana->Controls->Add(this->groupBox5);
			this->izmjeniUcenikaStrana->Controls->Add(this->panel6);
			this->izmjeniUcenikaStrana->Controls->Add(this->panel7);
			this->izmjeniUcenikaStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->izmjeniUcenikaStrana->Location = System::Drawing::Point(0, 0);
			this->izmjeniUcenikaStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->izmjeniUcenikaStrana->Name = L"izmjeniUcenikaStrana";
			this->izmjeniUcenikaStrana->Size = System::Drawing::Size(1024, 720);
			this->izmjeniUcenikaStrana->TabIndex = 6;
			this->izmjeniUcenikaStrana->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(367, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 84);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Izbriši učenika";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(367, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 84);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Izmjeni učenika";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(367, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 84);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Prikaži učenika";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 26;
			this->listBox2->Location = System::Drawing::Point(38, 126);
			this->listBox2->Name = L"listBox2";
			this->listBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox2->Size = System::Drawing::Size(319, 446);
			this->listBox2->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(86, 86);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(232, 22);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Svi učenici u bazi podataka:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox6);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->textBox3);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(620, 56);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(369, 558);
			this->groupBox5->TabIndex = 21;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Izmjenite tražene podatke";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton11);
			this->groupBox6->Controls->Add(this->radioButton12);
			this->groupBox6->Controls->Add(this->radioButton13);
			this->groupBox6->Controls->Add(this->radioButton14);
			this->groupBox6->Controls->Add(this->radioButton15);
			this->groupBox6->Controls->Add(this->radioButton16);
			this->groupBox6->Location = System::Drawing::Point(58, 422);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(292, 113);
			this->groupBox6->TabIndex = 21;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ukor";
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton11->Location = System::Drawing::Point(6, 37);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(99, 38);
			this->radioButton11->TabIndex = 21;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"nema";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton12->Location = System::Drawing::Point(204, 69);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->radioButton12->Size = System::Drawing::Size(83, 38);
			this->radioButton12->TabIndex = 22;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"isklj.";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton13->Location = System::Drawing::Point(130, 69);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->radioButton13->Size = System::Drawing::Size(67, 38);
			this->radioButton13->TabIndex = 21;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"NV";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton14->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton14->Location = System::Drawing::Point(34, 69);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(71, 38);
			this->radioButton14->TabIndex = 2;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"dir.";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton15->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton15->Location = System::Drawing::Point(219, 37);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(67, 38);
			this->radioButton15->TabIndex = 1;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"OV";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton16->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton16->Location = System::Drawing::Point(131, 37);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(66, 38);
			this->radioButton16->TabIndex = 0;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"OS";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton17);
			this->groupBox7->Controls->Add(this->radioButton18);
			this->groupBox7->Location = System::Drawing::Point(58, 341);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(293, 81);
			this->groupBox7->TabIndex = 20;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Pohvala";
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton17->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton17->Location = System::Drawing::Point(195, 37);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(66, 38);
			this->radioButton17->TabIndex = 1;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"NE";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton18->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton18->Location = System::Drawing::Point(75, 37);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(67, 38);
			this->radioButton18->TabIndex = 0;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"DA";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->radioButton19);
			this->groupBox8->Controls->Add(this->radioButton20);
			this->groupBox8->Location = System::Drawing::Point(58, 151);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(293, 81);
			this->groupBox8->TabIndex = 19;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Spol";
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton19->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton19->Location = System::Drawing::Point(171, 37);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(116, 38);
			this->radioButton19->TabIndex = 1;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"Žensko";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton20->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton20->Location = System::Drawing::Point(54, 37);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(111, 38);
			this->radioButton20->TabIndex = 0;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"Muško";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 103);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 42);
			this->textBox3->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(174, 55);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(176, 42);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(304, 293);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(46, 42);
			this->textBox8->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(106, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 34);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Ime:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(212, 293);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(46, 42);
			this->textBox9->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(52, 106);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 34);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Prezime:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(259, 295);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 34);
			this->label11->TabIndex = 16;
			this->label11->Text = L"NP";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(168, 295);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 34);
			this->label12->TabIndex = 15;
			this->label12->Text = L"OP";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(45, 295);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(132, 34);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Izostanci:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(174, 245);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(176, 42);
			this->textBox10->TabIndex = 12;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(45, 245);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 34);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Vladanje:";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel6->Controls->Add(this->iuBtnNazad);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 620);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1024, 100);
			this->panel6->TabIndex = 5;
			// 
			// iuBtnNazad
			// 
			this->iuBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iuBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->iuBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iuBtnNazad.Image")));
			this->iuBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iuBtnNazad->Location = System::Drawing::Point(20, 15);
			this->iuBtnNazad->Name = L"iuBtnNazad";
			this->iuBtnNazad->Size = System::Drawing::Size(178, 74);
			this->iuBtnNazad->TabIndex = 0;
			this->iuBtnNazad->Text = L"Nazad";
			this->iuBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->iuBtnNazad->UseVisualStyleBackColor = true;
			this->iuBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::iuBtnNazad_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel7->Controls->Add(this->xIzmjeniUcenika);
			this->panel7->Controls->Add(this->iuGlavniNaslov);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1024, 50);
			this->panel7->TabIndex = 0;
			// 
			// xIzmjeniUcenika
			// 
			this->xIzmjeniUcenika->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xIzmjeniUcenika.BackgroundImage")));
			this->xIzmjeniUcenika->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xIzmjeniUcenika->Location = System::Drawing::Point(1001, 6);
			this->xIzmjeniUcenika->Name = L"xIzmjeniUcenika";
			this->xIzmjeniUcenika->Size = System::Drawing::Size(21, 23);
			this->xIzmjeniUcenika->TabIndex = 1;
			this->xIzmjeniUcenika->TabStop = false;
			this->xIzmjeniUcenika->Click += gcnew System::EventHandler(this, &MyForm::xIzmjeniUcenika_Click);
			// 
			// iuGlavniNaslov
			// 
			this->iuGlavniNaslov->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->iuGlavniNaslov->AutoSize = true;
			this->iuGlavniNaslov->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iuGlavniNaslov->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->iuGlavniNaslov->Location = System::Drawing::Point(399, 3);
			this->iuGlavniNaslov->Name = L"iuGlavniNaslov";
			this->iuGlavniNaslov->Size = System::Drawing::Size(249, 39);
			this->iuGlavniNaslov->TabIndex = 0;
			this->iuGlavniNaslov->Text = L"Izmjeni Učenika";
			this->iuGlavniNaslov->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// razrediStrana
			// 
			this->razrediStrana->Controls->Add(this->listaRazredaSaUcenicima);
			this->razrediStrana->Controls->Add(this->listaRazrediBezUcenika);
			this->razrediStrana->Controls->Add(this->label16);
			this->razrediStrana->Controls->Add(this->label18);
			this->razrediStrana->Controls->Add(this->panel8);
			this->razrediStrana->Controls->Add(this->panel9);
			this->razrediStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->razrediStrana->Location = System::Drawing::Point(0, 0);
			this->razrediStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->razrediStrana->Name = L"razrediStrana";
			this->razrediStrana->Size = System::Drawing::Size(1024, 720);
			this->razrediStrana->TabIndex = 3;
			this->razrediStrana->Visible = false;
			this->razrediStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::razrediStrana_VisibleChanged);
			// 
			// listaRazredaSaUcenicima
			// 
			this->listaRazredaSaUcenicima->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaRazredaSaUcenicima->FormattingEnabled = true;
			this->listaRazredaSaUcenicima->ItemHeight = 26;
			this->listaRazredaSaUcenicima->Location = System::Drawing::Point(616, 130);
			this->listaRazredaSaUcenicima->Name = L"listaRazredaSaUcenicima";
			this->listaRazredaSaUcenicima->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listaRazredaSaUcenicima->Size = System::Drawing::Size(319, 446);
			this->listaRazredaSaUcenicima->TabIndex = 7;
			this->listaRazredaSaUcenicima->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listaRazredaSaUcenicima_SelectedIndexChanged);
			// 
			// listaRazrediBezUcenika
			// 
			this->listaRazrediBezUcenika->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaRazrediBezUcenika->FormattingEnabled = true;
			this->listaRazrediBezUcenika->ItemHeight = 26;
			this->listaRazrediBezUcenika->Location = System::Drawing::Point(64, 130);
			this->listaRazrediBezUcenika->Name = L"listaRazrediBezUcenika";
			this->listaRazrediBezUcenika->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listaRazrediBezUcenika->Size = System::Drawing::Size(319, 446);
			this->listaRazrediBezUcenika->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(680, 92);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(179, 22);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Razredi sa učenicima";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(128, 92);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(169, 22);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Razredi bez učenika";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel8->Controls->Add(this->rBtnIzmjeniRazred);
			this->panel8->Controls->Add(this->rBtnUnesiOcjene);
			this->panel8->Controls->Add(this->rBtnRasporediUcenike);
			this->panel8->Controls->Add(this->rBtnDodajRazred);
			this->panel8->Controls->Add(this->rBtnNazad);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel8->Location = System::Drawing::Point(0, 620);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1024, 100);
			this->panel8->TabIndex = 2;
			// 
			// rBtnIzmjeniRazred
			// 
			this->rBtnIzmjeniRazred->Enabled = false;
			this->rBtnIzmjeniRazred->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBtnIzmjeniRazred->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rBtnIzmjeniRazred->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rBtnIzmjeniRazred.Image")));
			this->rBtnIzmjeniRazred->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rBtnIzmjeniRazred->Location = System::Drawing::Point(424, 15);
			this->rBtnIzmjeniRazred->Name = L"rBtnIzmjeniRazred";
			this->rBtnIzmjeniRazred->Size = System::Drawing::Size(178, 74);
			this->rBtnIzmjeniRazred->TabIndex = 4;
			this->rBtnIzmjeniRazred->Text = L"   Izmjeni Razred";
			this->rBtnIzmjeniRazred->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rBtnIzmjeniRazred->UseVisualStyleBackColor = true;
			this->rBtnIzmjeniRazred->Click += gcnew System::EventHandler(this, &MyForm::rBtnIzmjeniRazred_Click);
			// 
			// rBtnUnesiOcjene
			// 
			this->rBtnUnesiOcjene->Enabled = false;
			this->rBtnUnesiOcjene->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBtnUnesiOcjene->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rBtnUnesiOcjene->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rBtnUnesiOcjene.Image")));
			this->rBtnUnesiOcjene->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rBtnUnesiOcjene->Location = System::Drawing::Point(824, 15);
			this->rBtnUnesiOcjene->Name = L"rBtnUnesiOcjene";
			this->rBtnUnesiOcjene->Size = System::Drawing::Size(178, 74);
			this->rBtnUnesiOcjene->TabIndex = 3;
			this->rBtnUnesiOcjene->Text = L"     Unesi  ocjene";
			this->rBtnUnesiOcjene->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rBtnUnesiOcjene->UseVisualStyleBackColor = true;
			this->rBtnUnesiOcjene->Click += gcnew System::EventHandler(this, &MyForm::rBtnUnesiOcjene_Click);
			// 
			// rBtnRasporediUcenike
			// 
			this->rBtnRasporediUcenike->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBtnRasporediUcenike->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rBtnRasporediUcenike->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rBtnRasporediUcenike.Image")));
			this->rBtnRasporediUcenike->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rBtnRasporediUcenike->Location = System::Drawing::Point(620, 15);
			this->rBtnRasporediUcenike->Name = L"rBtnRasporediUcenike";
			this->rBtnRasporediUcenike->Size = System::Drawing::Size(185, 74);
			this->rBtnRasporediUcenike->TabIndex = 2;
			this->rBtnRasporediUcenike->Text = L"Rasporedi Učenike";
			this->rBtnRasporediUcenike->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rBtnRasporediUcenike->UseVisualStyleBackColor = true;
			this->rBtnRasporediUcenike->Click += gcnew System::EventHandler(this, &MyForm::rBtnRasporediUcenike_Click);
			// 
			// rBtnDodajRazred
			// 
			this->rBtnDodajRazred->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBtnDodajRazred->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rBtnDodajRazred->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rBtnDodajRazred.Image")));
			this->rBtnDodajRazred->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rBtnDodajRazred->Location = System::Drawing::Point(223, 15);
			this->rBtnDodajRazred->Name = L"rBtnDodajRazred";
			this->rBtnDodajRazred->Size = System::Drawing::Size(178, 74);
			this->rBtnDodajRazred->TabIndex = 1;
			this->rBtnDodajRazred->Text = L"        Dodaj razred";
			this->rBtnDodajRazred->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rBtnDodajRazred->UseVisualStyleBackColor = true;
			this->rBtnDodajRazred->Click += gcnew System::EventHandler(this, &MyForm::rBtnDodajRazred_Click);
			// 
			// rBtnNazad
			// 
			this->rBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rBtnNazad.Image")));
			this->rBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rBtnNazad->Location = System::Drawing::Point(20, 15);
			this->rBtnNazad->Name = L"rBtnNazad";
			this->rBtnNazad->Size = System::Drawing::Size(178, 74);
			this->rBtnNazad->TabIndex = 0;
			this->rBtnNazad->Text = L"Nazad";
			this->rBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rBtnNazad->UseVisualStyleBackColor = true;
			this->rBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::rBtnNazad_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel9->Controls->Add(this->pictureBox1);
			this->panel9->Controls->Add(this->label17);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1024, 50);
			this->panel9->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(1001, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(21, 23);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label17->Location = System::Drawing::Point(443, 3);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(125, 39);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Razredi";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dodajRazredStrana
			// 
			this->dodajRazredStrana->Controls->Add(this->drBtnDodajRazred);
			this->dodajRazredStrana->Controls->Add(this->drBtnIzbrisiPredmet);
			this->dodajRazredStrana->Controls->Add(this->drBtnDodajPredmet);
			this->dodajRazredStrana->Controls->Add(this->drListaPredmeti);
			this->dodajRazredStrana->Controls->Add(this->label19);
			this->dodajRazredStrana->Controls->Add(this->groupBox9);
			this->dodajRazredStrana->Controls->Add(this->panel10);
			this->dodajRazredStrana->Controls->Add(this->panel11);
			this->dodajRazredStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dodajRazredStrana->Location = System::Drawing::Point(0, 0);
			this->dodajRazredStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->dodajRazredStrana->Name = L"dodajRazredStrana";
			this->dodajRazredStrana->Size = System::Drawing::Size(1024, 720);
			this->dodajRazredStrana->TabIndex = 28;
			this->dodajRazredStrana->Visible = false;
			this->dodajRazredStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::dodajRazredStrana_VisibleChanged);
			// 
			// drBtnDodajRazred
			// 
			this->drBtnDodajRazred->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->drBtnDodajRazred->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drBtnDodajRazred->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->drBtnDodajRazred->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"drBtnDodajRazred.Image")));
			this->drBtnDodajRazred->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->drBtnDodajRazred->Location = System::Drawing::Point(269, 434);
			this->drBtnDodajRazred->Name = L"drBtnDodajRazred";
			this->drBtnDodajRazred->Size = System::Drawing::Size(235, 84);
			this->drBtnDodajRazred->TabIndex = 27;
			this->drBtnDodajRazred->Text = L"Dodaj razred";
			this->drBtnDodajRazred->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->drBtnDodajRazred->UseVisualStyleBackColor = false;
			this->drBtnDodajRazred->Click += gcnew System::EventHandler(this, &MyForm::drBtnDodajRazred_Click);
			// 
			// drBtnIzbrisiPredmet
			// 
			this->drBtnIzbrisiPredmet->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->drBtnIzbrisiPredmet->Enabled = false;
			this->drBtnIzbrisiPredmet->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drBtnIzbrisiPredmet->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->drBtnIzbrisiPredmet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"drBtnIzbrisiPredmet.Image")));
			this->drBtnIzbrisiPredmet->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->drBtnIzbrisiPredmet->Location = System::Drawing::Point(406, 329);
			this->drBtnIzbrisiPredmet->Name = L"drBtnIzbrisiPredmet";
			this->drBtnIzbrisiPredmet->Size = System::Drawing::Size(251, 84);
			this->drBtnIzbrisiPredmet->TabIndex = 26;
			this->drBtnIzbrisiPredmet->Text = L"Izmjeni predmet";
			this->drBtnIzbrisiPredmet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->drBtnIzbrisiPredmet->UseVisualStyleBackColor = false;
			this->drBtnIzbrisiPredmet->Click += gcnew System::EventHandler(this, &MyForm::drBtnIzbrisiPredmet_Click);
			// 
			// drBtnDodajPredmet
			// 
			this->drBtnDodajPredmet->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->drBtnDodajPredmet->Enabled = false;
			this->drBtnDodajPredmet->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drBtnDodajPredmet->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->drBtnDodajPredmet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"drBtnDodajPredmet.Image")));
			this->drBtnDodajPredmet->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->drBtnDodajPredmet->Location = System::Drawing::Point(135, 330);
			this->drBtnDodajPredmet->Name = L"drBtnDodajPredmet";
			this->drBtnDodajPredmet->Size = System::Drawing::Size(235, 84);
			this->drBtnDodajPredmet->TabIndex = 25;
			this->drBtnDodajPredmet->Text = L"Dodaj predmet";
			this->drBtnDodajPredmet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->drBtnDodajPredmet->UseVisualStyleBackColor = false;
			this->drBtnDodajPredmet->Click += gcnew System::EventHandler(this, &MyForm::drBtnDodajPredmet_Click);
			// 
			// drListaPredmeti
			// 
			this->drListaPredmeti->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drListaPredmeti->FormattingEnabled = true;
			this->drListaPredmeti->ItemHeight = 26;
			this->drListaPredmeti->Location = System::Drawing::Point(703, 132);
			this->drListaPredmeti->Name = L"drListaPredmeti";
			this->drListaPredmeti->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->drListaPredmeti->Size = System::Drawing::Size(188, 446);
			this->drListaPredmeti->TabIndex = 24;
			this->drListaPredmeti->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::drListaPredmeti_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(760, 107);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 22);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Predmeti";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->drTFImeRazrednika);
			this->groupBox9->Controls->Add(this->drTFImeRazreda);
			this->groupBox9->Controls->Add(this->label20);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->drTFPredmet);
			this->groupBox9->Controls->Add(this->label25);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox9->Location = System::Drawing::Point(148, 97);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(478, 213);
			this->groupBox9->TabIndex = 21;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Unesite tražene podatke";
			// 
			// drTFImeRazrednika
			// 
			this->drTFImeRazrednika->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drTFImeRazrednika->Location = System::Drawing::Point(234, 96);
			this->drTFImeRazrednika->Name = L"drTFImeRazrednika";
			this->drTFImeRazrednika->Size = System::Drawing::Size(176, 33);
			this->drTFImeRazrednika->TabIndex = 8;
			// 
			// drTFImeRazreda
			// 
			this->drTFImeRazreda->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drTFImeRazreda->Location = System::Drawing::Point(234, 48);
			this->drTFImeRazreda->Name = L"drTFImeRazreda";
			this->drTFImeRazreda->Size = System::Drawing::Size(176, 33);
			this->drTFImeRazreda->TabIndex = 6;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(80, 53);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(144, 28);
			this->label20->TabIndex = 7;
			this->label20->Text = L"Ime razreda:";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(53, 97);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(177, 28);
			this->label21->TabIndex = 9;
			this->label21->Text = L"Ime razrednika:";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// drTFPredmet
			// 
			this->drTFPredmet->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drTFPredmet->Location = System::Drawing::Point(234, 144);
			this->drTFPredmet->Name = L"drTFPredmet";
			this->drTFPredmet->Size = System::Drawing::Size(176, 33);
			this->drTFPredmet->TabIndex = 12;
			this->drTFPredmet->TextChanged += gcnew System::EventHandler(this, &MyForm::drTFPredmet_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(119, 145);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(108, 28);
			this->label25->TabIndex = 13;
			this->label25->Text = L"Predmet:";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel10->Controls->Add(this->drBtnNazad);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel10->Location = System::Drawing::Point(0, 620);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1024, 100);
			this->panel10->TabIndex = 5;
			// 
			// drBtnNazad
			// 
			this->drBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->drBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"drBtnNazad.Image")));
			this->drBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->drBtnNazad->Location = System::Drawing::Point(20, 15);
			this->drBtnNazad->Name = L"drBtnNazad";
			this->drBtnNazad->Size = System::Drawing::Size(178, 74);
			this->drBtnNazad->TabIndex = 0;
			this->drBtnNazad->Text = L"Nazad";
			this->drBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->drBtnNazad->UseVisualStyleBackColor = true;
			this->drBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::drBtnNazad_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel11->Controls->Add(this->xdodajRazred);
			this->panel11->Controls->Add(this->label26);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1024, 50);
			this->panel11->TabIndex = 0;
			// 
			// xdodajRazred
			// 
			this->xdodajRazred->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xdodajRazred.BackgroundImage")));
			this->xdodajRazred->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xdodajRazred->Location = System::Drawing::Point(1001, 6);
			this->xdodajRazred->Name = L"xdodajRazred";
			this->xdodajRazred->Size = System::Drawing::Size(21, 23);
			this->xdodajRazred->TabIndex = 1;
			this->xdodajRazred->TabStop = false;
			this->xdodajRazred->Click += gcnew System::EventHandler(this, &MyForm::xdodajRazred_Click);
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label26->Location = System::Drawing::Point(399, 3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(208, 39);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Dodaj Razred";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// izmjeniRazredStrana
			// 
			this->izmjeniRazredStrana->Controls->Add(this->groupBox10);
			this->izmjeniRazredStrana->Controls->Add(this->button8);
			this->izmjeniRazredStrana->Controls->Add(this->button9);
			this->izmjeniRazredStrana->Controls->Add(this->button10);
			this->izmjeniRazredStrana->Controls->Add(this->lista);
			this->izmjeniRazredStrana->Controls->Add(this->label22);
			this->izmjeniRazredStrana->Controls->Add(this->panel12);
			this->izmjeniRazredStrana->Controls->Add(this->panel13);
			this->izmjeniRazredStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->izmjeniRazredStrana->Location = System::Drawing::Point(0, 0);
			this->izmjeniRazredStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->izmjeniRazredStrana->Name = L"izmjeniRazredStrana";
			this->izmjeniRazredStrana->Size = System::Drawing::Size(1024, 720);
			this->izmjeniRazredStrana->TabIndex = 29;
			this->izmjeniRazredStrana->Visible = false;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->textBox13);
			this->groupBox10->Controls->Add(this->textBox14);
			this->groupBox10->Controls->Add(this->label23);
			this->groupBox10->Controls->Add(this->label24);
			this->groupBox10->Controls->Add(this->textBox16);
			this->groupBox10->Controls->Add(this->label27);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox10->Location = System::Drawing::Point(148, 97);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(478, 213);
			this->groupBox10->TabIndex = 21;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Unesite tražene podatke";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(234, 96);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(176, 33);
			this->textBox13->TabIndex = 8;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(234, 48);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(176, 33);
			this->textBox14->TabIndex = 6;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(80, 53);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(144, 28);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Ime razreda:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(53, 97);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(177, 28);
			this->label24->TabIndex = 9;
			this->label24->Text = L"Ime razrednika:";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(234, 144);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(176, 33);
			this->textBox16->TabIndex = 12;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(119, 145);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(108, 28);
			this->label27->TabIndex = 13;
			this->label27->Text = L"Predmet:";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(269, 434);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(235, 84);
			this->button8->TabIndex = 27;
			this->button8->Text = L"Spremi Izmjene";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(406, 329);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(235, 84);
			this->button9->TabIndex = 26;
			this->button9->Text = L"        preimenuj predmet";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button10->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(135, 330);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(235, 84);
			this->button10->TabIndex = 25;
			this->button10->Text = L"Dodaj Predmet";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// lista
			// 
			this->lista->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lista->FormattingEnabled = true;
			this->lista->ItemHeight = 26;
			this->lista->Location = System::Drawing::Point(703, 132);
			this->lista->Name = L"lista";
			this->lista->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lista->Size = System::Drawing::Size(188, 446);
			this->lista->TabIndex = 24;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(760, 107);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(83, 22);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Predmeti";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel12->Controls->Add(this->irBtnNazad);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel12->Location = System::Drawing::Point(0, 620);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1024, 100);
			this->panel12->TabIndex = 5;
			// 
			// irBtnNazad
			// 
			this->irBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->irBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->irBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"irBtnNazad.Image")));
			this->irBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->irBtnNazad->Location = System::Drawing::Point(20, 15);
			this->irBtnNazad->Name = L"irBtnNazad";
			this->irBtnNazad->Size = System::Drawing::Size(178, 74);
			this->irBtnNazad->TabIndex = 0;
			this->irBtnNazad->Text = L"Nazad";
			this->irBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->irBtnNazad->UseVisualStyleBackColor = true;
			this->irBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::irBtnNazad_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel13->Controls->Add(this->xIzmjeniRazred);
			this->panel13->Controls->Add(this->label28);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(0, 0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(1024, 50);
			this->panel13->TabIndex = 0;
			// 
			// xIzmjeniRazred
			// 
			this->xIzmjeniRazred->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xIzmjeniRazred.BackgroundImage")));
			this->xIzmjeniRazred->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xIzmjeniRazred->Location = System::Drawing::Point(1001, 6);
			this->xIzmjeniRazred->Name = L"xIzmjeniRazred";
			this->xIzmjeniRazred->Size = System::Drawing::Size(21, 23);
			this->xIzmjeniRazred->TabIndex = 1;
			this->xIzmjeniRazred->TabStop = false;
			this->xIzmjeniRazred->Click += gcnew System::EventHandler(this, &MyForm::xIzmjeniRazred_Click);
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->Location = System::Drawing::Point(399, 3);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(230, 39);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Izmjeni Razred";
			this->label28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// rasporediUcenikeStrana
			// 
			this->rasporediUcenikeStrana->Controls->Add(this->ruBtnSpremi);
			this->rasporediUcenikeStrana->Controls->Add(this->ruBtnPrikaziUcenike);
			this->rasporediUcenikeStrana->Controls->Add(this->ruBtnIzbaciIZRazreda);
			this->rasporediUcenikeStrana->Controls->Add(this->ruBtnUbaciURazred);
			this->rasporediUcenikeStrana->Controls->Add(this->label32);
			this->rasporediUcenikeStrana->Controls->Add(this->ruListaUceniciURazredu);
			this->rasporediUcenikeStrana->Controls->Add(this->ruListaRazredi);
			this->rasporediUcenikeStrana->Controls->Add(this->ruListaUceniciBezRazreda);
			this->rasporediUcenikeStrana->Controls->Add(this->label29);
			this->rasporediUcenikeStrana->Controls->Add(this->label30);
			this->rasporediUcenikeStrana->Controls->Add(this->panel14);
			this->rasporediUcenikeStrana->Controls->Add(this->panel15);
			this->rasporediUcenikeStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->rasporediUcenikeStrana->Location = System::Drawing::Point(0, 0);
			this->rasporediUcenikeStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->rasporediUcenikeStrana->Name = L"rasporediUcenikeStrana";
			this->rasporediUcenikeStrana->Size = System::Drawing::Size(1024, 720);
			this->rasporediUcenikeStrana->TabIndex = 8;
			this->rasporediUcenikeStrana->Visible = false;
			this->rasporediUcenikeStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::rasporediUcenikeStrana_VisibleChanged);
			// 
			// ruBtnSpremi
			// 
			this->ruBtnSpremi->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ruBtnSpremi->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruBtnSpremi->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ruBtnSpremi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ruBtnSpremi.Image")));
			this->ruBtnSpremi->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ruBtnSpremi->Location = System::Drawing::Point(285, 495);
			this->ruBtnSpremi->Name = L"ruBtnSpremi";
			this->ruBtnSpremi->Size = System::Drawing::Size(235, 81);
			this->ruBtnSpremi->TabIndex = 29;
			this->ruBtnSpremi->Text = L" Spremi  učenike";
			this->ruBtnSpremi->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ruBtnSpremi->UseVisualStyleBackColor = false;
			this->ruBtnSpremi->Click += gcnew System::EventHandler(this, &MyForm::ruBtnSpremi_Click);
			// 
			// ruBtnPrikaziUcenike
			// 
			this->ruBtnPrikaziUcenike->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ruBtnPrikaziUcenike->Enabled = false;
			this->ruBtnPrikaziUcenike->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruBtnPrikaziUcenike->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ruBtnPrikaziUcenike->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ruBtnPrikaziUcenike.Image")));
			this->ruBtnPrikaziUcenike->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ruBtnPrikaziUcenike->Location = System::Drawing::Point(285, 371);
			this->ruBtnPrikaziUcenike->Name = L"ruBtnPrikaziUcenike";
			this->ruBtnPrikaziUcenike->Size = System::Drawing::Size(235, 84);
			this->ruBtnPrikaziUcenike->TabIndex = 28;
			this->ruBtnPrikaziUcenike->Text = L"Prikaži učenike";
			this->ruBtnPrikaziUcenike->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ruBtnPrikaziUcenike->UseVisualStyleBackColor = false;
			this->ruBtnPrikaziUcenike->Click += gcnew System::EventHandler(this, &MyForm::ruBtnPrikaziUcenike_Click);
			// 
			// ruBtnIzbaciIZRazreda
			// 
			this->ruBtnIzbaciIZRazreda->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ruBtnIzbaciIZRazreda->Enabled = false;
			this->ruBtnIzbaciIZRazreda->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruBtnIzbaciIZRazreda->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ruBtnIzbaciIZRazreda->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ruBtnIzbaciIZRazreda.Image")));
			this->ruBtnIzbaciIZRazreda->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ruBtnIzbaciIZRazreda->Location = System::Drawing::Point(285, 273);
			this->ruBtnIzbaciIZRazreda->Name = L"ruBtnIzbaciIZRazreda";
			this->ruBtnIzbaciIZRazreda->Size = System::Drawing::Size(235, 84);
			this->ruBtnIzbaciIZRazreda->TabIndex = 27;
			this->ruBtnIzbaciIZRazreda->Text = L"Izbaci iz razreda";
			this->ruBtnIzbaciIZRazreda->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ruBtnIzbaciIZRazreda->UseVisualStyleBackColor = false;
			this->ruBtnIzbaciIZRazreda->Click += gcnew System::EventHandler(this, &MyForm::ruBtnIzbaciIZRazreda_Click);
			// 
			// ruBtnUbaciURazred
			// 
			this->ruBtnUbaciURazred->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ruBtnUbaciURazred->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruBtnUbaciURazred->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ruBtnUbaciURazred->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ruBtnUbaciURazred.Image")));
			this->ruBtnUbaciURazred->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ruBtnUbaciURazred->Location = System::Drawing::Point(285, 179);
			this->ruBtnUbaciURazred->Name = L"ruBtnUbaciURazred";
			this->ruBtnUbaciURazred->Size = System::Drawing::Size(235, 84);
			this->ruBtnUbaciURazred->TabIndex = 26;
			this->ruBtnUbaciURazred->Text = L"Ubaci u razred";
			this->ruBtnUbaciURazred->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ruBtnUbaciURazred->UseVisualStyleBackColor = false;
			this->ruBtnUbaciURazred->Click += gcnew System::EventHandler(this, &MyForm::ruBtnUbaciURazred_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(592, 101);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(65, 22);
			this->label32->TabIndex = 9;
			this->label32->Text = L"Razred";
			// 
			// ruListaUceniciURazredu
			// 
			this->ruListaUceniciURazredu->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruListaUceniciURazredu->FormattingEnabled = true;
			this->ruListaUceniciURazredu->ItemHeight = 26;
			this->ruListaUceniciURazredu->Location = System::Drawing::Point(722, 126);
			this->ruListaUceniciURazredu->Name = L"ruListaUceniciURazredu";
			this->ruListaUceniciURazredu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ruListaUceniciURazredu->Size = System::Drawing::Size(217, 446);
			this->ruListaUceniciURazredu->TabIndex = 8;
			this->ruListaUceniciURazredu->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ruListaUceniciURazredu_SelectedIndexChanged);
			// 
			// ruListaRazredi
			// 
			this->ruListaRazredi->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruListaRazredi->FormattingEnabled = true;
			this->ruListaRazredi->ItemHeight = 26;
			this->ruListaRazredi->Location = System::Drawing::Point(564, 126);
			this->ruListaRazredi->Name = L"ruListaRazredi";
			this->ruListaRazredi->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ruListaRazredi->Size = System::Drawing::Size(115, 446);
			this->ruListaRazredi->TabIndex = 7;
			this->ruListaRazredi->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ruListaRazredi_SelectedIndexChanged);
			// 
			// ruListaUceniciBezRazreda
			// 
			this->ruListaUceniciBezRazreda->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruListaUceniciBezRazreda->FormattingEnabled = true;
			this->ruListaUceniciBezRazreda->ItemHeight = 26;
			this->ruListaUceniciBezRazreda->Location = System::Drawing::Point(26, 130);
			this->ruListaUceniciBezRazreda->Name = L"ruListaUceniciBezRazreda";
			this->ruListaUceniciBezRazreda->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ruListaUceniciBezRazreda->Size = System::Drawing::Size(217, 446);
			this->ruListaUceniciBezRazreda->TabIndex = 6;
			this->ruListaUceniciBezRazreda->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ruListaUceniciBezRazreda_SelectedIndexChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(708, 101);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(247, 22);
			this->label29->TabIndex = 5;
			this->label29->Text = L"Učenici u odabranom razredu";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(47, 107);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(164, 22);
			this->label30->TabIndex = 4;
			this->label30->Text = L"Učenici bez razreda";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel14->Controls->Add(this->ruBtnNazad);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel14->Location = System::Drawing::Point(0, 620);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1024, 100);
			this->panel14->TabIndex = 2;
			// 
			// ruBtnNazad
			// 
			this->ruBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ruBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ruBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ruBtnNazad.Image")));
			this->ruBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ruBtnNazad->Location = System::Drawing::Point(20, 15);
			this->ruBtnNazad->Name = L"ruBtnNazad";
			this->ruBtnNazad->Size = System::Drawing::Size(178, 74);
			this->ruBtnNazad->TabIndex = 0;
			this->ruBtnNazad->Text = L"Nazad";
			this->ruBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ruBtnNazad->UseVisualStyleBackColor = true;
			this->ruBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::ruBtnNazad_Click);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel15->Controls->Add(this->xRasporediUcenike);
			this->panel15->Controls->Add(this->label31);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(0, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(1024, 50);
			this->panel15->TabIndex = 0;
			// 
			// xRasporediUcenike
			// 
			this->xRasporediUcenike->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xRasporediUcenike.BackgroundImage")));
			this->xRasporediUcenike->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xRasporediUcenike->Location = System::Drawing::Point(1001, 6);
			this->xRasporediUcenike->Name = L"xRasporediUcenike";
			this->xRasporediUcenike->Size = System::Drawing::Size(21, 23);
			this->xRasporediUcenike->TabIndex = 1;
			this->xRasporediUcenike->TabStop = false;
			this->xRasporediUcenike->Click += gcnew System::EventHandler(this, &MyForm::xRasporediUcenike_Click);
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label31->Location = System::Drawing::Point(380, 3);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(286, 39);
			this->label31->TabIndex = 0;
			this->label31->Text = L"Rasporedi Učenike";
			this->label31->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// unesiOcjeneStrana
			// 
			this->unesiOcjeneStrana->Controls->Add(this->uoBtnSacuvajOcjene);
			this->unesiOcjeneStrana->Controls->Add(this->uoTFOcjena);
			this->unesiOcjeneStrana->Controls->Add(this->label37);
			this->unesiOcjeneStrana->Controls->Add(this->uoBtnPrikaziOcjene);
			this->unesiOcjeneStrana->Controls->Add(this->uoBtnDodajOcjenu);
			this->unesiOcjeneStrana->Controls->Add(this->uoBtnPromjeniOcjenu);
			this->unesiOcjeneStrana->Controls->Add(this->label33);
			this->unesiOcjeneStrana->Controls->Add(this->uoListaOcjene);
			this->unesiOcjeneStrana->Controls->Add(this->uoListaPredmeti);
			this->unesiOcjeneStrana->Controls->Add(this->uoListaUceniciURazredu);
			this->unesiOcjeneStrana->Controls->Add(this->label34);
			this->unesiOcjeneStrana->Controls->Add(this->label35);
			this->unesiOcjeneStrana->Controls->Add(this->panel16);
			this->unesiOcjeneStrana->Controls->Add(this->panel17);
			this->unesiOcjeneStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->unesiOcjeneStrana->Location = System::Drawing::Point(0, 0);
			this->unesiOcjeneStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->unesiOcjeneStrana->Name = L"unesiOcjeneStrana";
			this->unesiOcjeneStrana->Size = System::Drawing::Size(1024, 720);
			this->unesiOcjeneStrana->TabIndex = 29;
			this->unesiOcjeneStrana->Visible = false;
			this->unesiOcjeneStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::unesiOcjeneStrana_VisibleChanged);
			// 
			// uoBtnSacuvajOcjene
			// 
			this->uoBtnSacuvajOcjene->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->uoBtnSacuvajOcjene->Enabled = false;
			this->uoBtnSacuvajOcjene->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoBtnSacuvajOcjene->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->uoBtnSacuvajOcjene->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uoBtnSacuvajOcjene.Image")));
			this->uoBtnSacuvajOcjene->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->uoBtnSacuvajOcjene->Location = System::Drawing::Point(767, 492);
			this->uoBtnSacuvajOcjene->Name = L"uoBtnSacuvajOcjene";
			this->uoBtnSacuvajOcjene->Size = System::Drawing::Size(235, 84);
			this->uoBtnSacuvajOcjene->TabIndex = 32;
			this->uoBtnSacuvajOcjene->Text = L"Sačuvaj ocjene";
			this->uoBtnSacuvajOcjene->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->uoBtnSacuvajOcjene->UseVisualStyleBackColor = false;
			this->uoBtnSacuvajOcjene->Click += gcnew System::EventHandler(this, &MyForm::uoBtnSacuvajOcjene_Click);
			// 
			// uoTFOcjena
			// 
			this->uoTFOcjena->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoTFOcjena->Location = System::Drawing::Point(897, 193);
			this->uoTFOcjena->Name = L"uoTFOcjena";
			this->uoTFOcjena->Size = System::Drawing::Size(61, 33);
			this->uoTFOcjena->TabIndex = 30;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(800, 194);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(91, 28);
			this->label37->TabIndex = 31;
			this->label37->Text = L"Ocjena:";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// uoBtnPrikaziOcjene
			// 
			this->uoBtnPrikaziOcjene->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->uoBtnPrikaziOcjene->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoBtnPrikaziOcjene->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->uoBtnPrikaziOcjene->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uoBtnPrikaziOcjene.Image")));
			this->uoBtnPrikaziOcjene->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->uoBtnPrikaziOcjene->Location = System::Drawing::Point(206, 297);
			this->uoBtnPrikaziOcjene->Name = L"uoBtnPrikaziOcjene";
			this->uoBtnPrikaziOcjene->Size = System::Drawing::Size(235, 84);
			this->uoBtnPrikaziOcjene->TabIndex = 28;
			this->uoBtnPrikaziOcjene->Text = L"Prikaži ocjene";
			this->uoBtnPrikaziOcjene->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->uoBtnPrikaziOcjene->UseVisualStyleBackColor = false;
			this->uoBtnPrikaziOcjene->Click += gcnew System::EventHandler(this, &MyForm::uoBtnPrikaziOcjene_Click);
			// 
			// uoBtnDodajOcjenu
			// 
			this->uoBtnDodajOcjenu->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->uoBtnDodajOcjenu->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoBtnDodajOcjenu->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->uoBtnDodajOcjenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uoBtnDodajOcjenu.Image")));
			this->uoBtnDodajOcjenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->uoBtnDodajOcjenu->Location = System::Drawing::Point(764, 241);
			this->uoBtnDodajOcjenu->Name = L"uoBtnDodajOcjenu";
			this->uoBtnDodajOcjenu->Size = System::Drawing::Size(235, 84);
			this->uoBtnDodajOcjenu->TabIndex = 27;
			this->uoBtnDodajOcjenu->Text = L"Dodaj Ocjenu";
			this->uoBtnDodajOcjenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->uoBtnDodajOcjenu->UseVisualStyleBackColor = false;
			this->uoBtnDodajOcjenu->Click += gcnew System::EventHandler(this, &MyForm::uoBtnDodajOcjenu_Click);
			// 
			// uoBtnPromjeniOcjenu
			// 
			this->uoBtnPromjeniOcjenu->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->uoBtnPromjeniOcjenu->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoBtnPromjeniOcjenu->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->uoBtnPromjeniOcjenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uoBtnPromjeniOcjenu.Image")));
			this->uoBtnPromjeniOcjenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->uoBtnPromjeniOcjenu->Location = System::Drawing::Point(764, 335);
			this->uoBtnPromjeniOcjenu->Name = L"uoBtnPromjeniOcjenu";
			this->uoBtnPromjeniOcjenu->Size = System::Drawing::Size(235, 84);
			this->uoBtnPromjeniOcjenu->TabIndex = 26;
			this->uoBtnPromjeniOcjenu->Text = L"Promjeni ocjenu";
			this->uoBtnPromjeniOcjenu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->uoBtnPromjeniOcjenu->UseVisualStyleBackColor = false;
			this->uoBtnPromjeniOcjenu->Click += gcnew System::EventHandler(this, &MyForm::uoBtnPromjeniOcjenu_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(503, 109);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(83, 22);
			this->label33->TabIndex = 9;
			this->label33->Text = L"Predmeti";
			// 
			// uoListaOcjene
			// 
			this->uoListaOcjene->Font = (gcnew System::Drawing::Font(L"Open Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoListaOcjene->FormattingEnabled = true;
			this->uoListaOcjene->ItemHeight = 20;
			this->uoListaOcjene->Location = System::Drawing::Point(664, 134);
			this->uoListaOcjene->Name = L"uoListaOcjene";
			this->uoListaOcjene->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->uoListaOcjene->Size = System::Drawing::Size(83, 444);
			this->uoListaOcjene->TabIndex = 8;
			// 
			// uoListaPredmeti
			// 
			this->uoListaPredmeti->Font = (gcnew System::Drawing::Font(L"Open Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoListaPredmeti->FormattingEnabled = true;
			this->uoListaPredmeti->ItemHeight = 20;
			this->uoListaPredmeti->Location = System::Drawing::Point(450, 134);
			this->uoListaPredmeti->Name = L"uoListaPredmeti";
			this->uoListaPredmeti->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->uoListaPredmeti->Size = System::Drawing::Size(198, 444);
			this->uoListaPredmeti->TabIndex = 7;
			// 
			// uoListaUceniciURazredu
			// 
			this->uoListaUceniciURazredu->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoListaUceniciURazredu->FormattingEnabled = true;
			this->uoListaUceniciURazredu->ItemHeight = 22;
			this->uoListaUceniciURazredu->Location = System::Drawing::Point(26, 134);
			this->uoListaUceniciURazredu->Name = L"uoListaUceniciURazredu";
			this->uoListaUceniciURazredu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->uoListaUceniciURazredu->Size = System::Drawing::Size(176, 444);
			this->uoListaUceniciURazredu->TabIndex = 6;
			this->uoListaUceniciURazredu->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::uoListaUceniciURazredu_SelectedIndexChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(676, 109);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 22);
			this->label34->TabIndex = 5;
			this->label34->Text = L"Ocjene";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(34, 109);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(149, 22);
			this->label35->TabIndex = 4;
			this->label35->Text = L"Učenici u razredu";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel16->Controls->Add(this->uoBtnNazad);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel16->Location = System::Drawing::Point(0, 620);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1024, 100);
			this->panel16->TabIndex = 2;
			// 
			// uoBtnNazad
			// 
			this->uoBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uoBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->uoBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uoBtnNazad.Image")));
			this->uoBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->uoBtnNazad->Location = System::Drawing::Point(20, 15);
			this->uoBtnNazad->Name = L"uoBtnNazad";
			this->uoBtnNazad->Size = System::Drawing::Size(178, 74);
			this->uoBtnNazad->TabIndex = 0;
			this->uoBtnNazad->Text = L"Nazad";
			this->uoBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->uoBtnNazad->UseVisualStyleBackColor = true;
			this->uoBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::uoBtnNazad_Click);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel17->Controls->Add(this->xUnesiOcjene);
			this->panel17->Controls->Add(this->label36);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel17->Location = System::Drawing::Point(0, 0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1024, 50);
			this->panel17->TabIndex = 0;
			// 
			// xUnesiOcjene
			// 
			this->xUnesiOcjene->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xUnesiOcjene.BackgroundImage")));
			this->xUnesiOcjene->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xUnesiOcjene->Location = System::Drawing::Point(1001, 6);
			this->xUnesiOcjene->Name = L"xUnesiOcjene";
			this->xUnesiOcjene->Size = System::Drawing::Size(21, 23);
			this->xUnesiOcjene->TabIndex = 1;
			this->xUnesiOcjene->TabStop = false;
			this->xUnesiOcjene->Click += gcnew System::EventHandler(this, &MyForm::xUnesiOcjene_Click);
			// 
			// label36
			// 
			this->label36->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Open Sans", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label36->Location = System::Drawing::Point(380, 3);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(206, 39);
			this->label36->TabIndex = 0;
			this->label36->Text = L"Unesi Ocjene";
			this->label36->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tuuLabelOpciUspjeh
			// 
			this->tuuLabelOpciUspjeh->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tuuLabelOpciUspjeh->AutoSize = true;
			this->tuuLabelOpciUspjeh->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tuuLabelOpciUspjeh->Location = System::Drawing::Point(685, 130);
			this->tuuLabelOpciUspjeh->Name = L"tuuLabelOpciUspjeh";
			this->tuuLabelOpciUspjeh->Size = System::Drawing::Size(109, 22);
			this->tuuLabelOpciUspjeh->TabIndex = 5;
			this->tuuLabelOpciUspjeh->Text = L"OPĆI USPJEH";
			this->tuuLabelOpciUspjeh->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label39
			// 
			this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(45, 119);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(40, 28);
			this->label39->TabIndex = 4;
			this->label39->Text = L"RB";
			this->label39->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->listaPredmetaUcenika);
			this->panel5->Location = System::Drawing::Point(303, 21);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(378, 175);
			this->panel5->TabIndex = 2;
			// 
			// listaPredmetaUcenika
			// 
			this->listaPredmetaUcenika->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->listaPredmetaUcenika->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listaPredmetaUcenika->ImeMode = System::Windows::Forms::ImeMode::On;
			this->listaPredmetaUcenika->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
			this->listaPredmetaUcenika->Location = System::Drawing::Point(0, 0);
			this->listaPredmetaUcenika->Name = L"listaPredmetaUcenika";
			this->listaPredmetaUcenika->Size = System::Drawing::Size(378, 175);
			this->listaPredmetaUcenika->TabIndex = 1;
			this->listaPredmetaUcenika->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical270;
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label38->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(118, 95);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(200, 57);
			this->label38->TabIndex = 3;
			this->label38->Text = L"IME I PREZIME UČENIKA";
			this->label38->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label41
			// 
			this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(921, 130);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(90, 22);
			this->label41->TabIndex = 7;
			this->label41->Text = L"VLADANJE";
			this->label41->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(805, 97);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(94, 22);
			this->label42->TabIndex = 8;
			this->label42->Text = L"IZOSTANCI";
			this->label42->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// stranaTabelaUspjehaUcenika
			// 
			this->stranaTabelaUspjehaUcenika->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->stranaTabelaUspjehaUcenika->BackColor = System::Drawing::Color::Transparent;
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->xTabUspUcenika);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label47);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label46);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label45);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label41);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label42);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->tuuLabelOpciUspjeh);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->panel5);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label39);
			this->stranaTabelaUspjehaUcenika->Controls->Add(this->label38);
			this->stranaTabelaUspjehaUcenika->Location = System::Drawing::Point(0, 0);
			this->stranaTabelaUspjehaUcenika->Name = L"stranaTabelaUspjehaUcenika";
			this->stranaTabelaUspjehaUcenika->Size = System::Drawing::Size(1023, 720);
			this->stranaTabelaUspjehaUcenika->TabIndex = 3;
			this->stranaTabelaUspjehaUcenika->Visible = false;
			this->stranaTabelaUspjehaUcenika->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::stranaTabelaUspjehaUcenika_Paint);
			// 
			// xTabUspUcenika
			// 
			this->xTabUspUcenika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xTabUspUcenika.Image")));
			this->xTabUspUcenika->Location = System::Drawing::Point(1001, 6);
			this->xTabUspUcenika->Name = L"xTabUspUcenika";
			this->xTabUspUcenika->Size = System::Drawing::Size(19, 21);
			this->xTabUspUcenika->TabIndex = 14;
			this->xTabUspUcenika->TabStop = false;
			this->xTabUspUcenika->Click += gcnew System::EventHandler(this, &MyForm::xTabUspUcenika_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(878, 130);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(38, 22);
			this->label47->TabIndex = 13;
			this->label47->Text = L"UK.";
			this->label47->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(837, 130);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(38, 22);
			this->label46->TabIndex = 12;
			this->label46->Text = L"NP.";
			this->label46->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(796, 130);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(38, 22);
			this->label45->TabIndex = 11;
			this->label45->Text = L"OP.";
			this->label45->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tabeleStrana
			// 
			this->tabeleStrana->Controls->Add(this->button20);
			this->tabeleStrana->Controls->Add(this->button19);
			this->tabeleStrana->Controls->Add(this->tabBtnTabelaUspjehaUcenika);
			this->tabeleStrana->Controls->Add(this->panel19);
			this->tabeleStrana->Controls->Add(this->panel20);
			this->tabeleStrana->Controls->Add(this->tabListaRazrediPuni);
			this->tabeleStrana->Controls->Add(this->label43);
			this->tabeleStrana->Location = System::Drawing::Point(0, 0);
			this->tabeleStrana->Name = L"tabeleStrana";
			this->tabeleStrana->Size = System::Drawing::Size(1024, 720);
			this->tabeleStrana->TabIndex = 5;
			this->tabeleStrana->Visible = false;
			this->tabeleStrana->VisibleChanged += gcnew System::EventHandler(this, &MyForm::tabeleStrana_VisibleChanged);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button20->Enabled = false;
			this->button20->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button20->Location = System::Drawing::Point(53, 388);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(483, 84);
			this->button20->TabIndex = 28;
			this->button20->Text = L"Tabela pregleda vladanja više razreda";
			this->button20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button19->Enabled = false;
			this->button19->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button19->Location = System::Drawing::Point(53, 273);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(483, 84);
			this->button19->TabIndex = 27;
			this->button19->Text = L" Tabela pregleda uspjeha razreda u učenju";
			this->button19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// tabBtnTabelaUspjehaUcenika
			// 
			this->tabBtnTabelaUspjehaUcenika->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tabBtnTabelaUspjehaUcenika->Enabled = false;
			this->tabBtnTabelaUspjehaUcenika->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabBtnTabelaUspjehaUcenika->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->tabBtnTabelaUspjehaUcenika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabBtnTabelaUspjehaUcenika.Image")));
			this->tabBtnTabelaUspjehaUcenika->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->tabBtnTabelaUspjehaUcenika->Location = System::Drawing::Point(53, 159);
			this->tabBtnTabelaUspjehaUcenika->Name = L"tabBtnTabelaUspjehaUcenika";
			this->tabBtnTabelaUspjehaUcenika->Size = System::Drawing::Size(483, 84);
			this->tabBtnTabelaUspjehaUcenika->TabIndex = 26;
			this->tabBtnTabelaUspjehaUcenika->Text = L"         Tabela pregleda uspjeha učenika u razredu na kraju polugodišta";
			this->tabBtnTabelaUspjehaUcenika->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->tabBtnTabelaUspjehaUcenika->UseVisualStyleBackColor = false;
			this->tabBtnTabelaUspjehaUcenika->Click += gcnew System::EventHandler(this, &MyForm::tabBtnTabelaUspjehaUcenika_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel19->Controls->Add(this->tabBtnNazad);
			this->panel19->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel19->Location = System::Drawing::Point(0, 620);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(1024, 100);
			this->panel19->TabIndex = 4;
			// 
			// tabBtnNazad
			// 
			this->tabBtnNazad->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabBtnNazad->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tabBtnNazad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabBtnNazad.Image")));
			this->tabBtnNazad->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->tabBtnNazad->Location = System::Drawing::Point(20, 15);
			this->tabBtnNazad->Name = L"tabBtnNazad";
			this->tabBtnNazad->Size = System::Drawing::Size(178, 74);
			this->tabBtnNazad->TabIndex = 0;
			this->tabBtnNazad->Text = L"Nazad";
			this->tabBtnNazad->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->tabBtnNazad->UseVisualStyleBackColor = true;
			this->tabBtnNazad->Click += gcnew System::EventHandler(this, &MyForm::tabBtnNazad_Click);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel20->Controls->Add(this->xTabele);
			this->panel20->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel20->Location = System::Drawing::Point(0, 0);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(1024, 50);
			this->panel20->TabIndex = 4;
			// 
			// xTabele
			// 
			this->xTabele->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->xTabele->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xTabele.Image")));
			this->xTabele->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"xTabele.InitialImage")));
			this->xTabele->Location = System::Drawing::Point(1001, 6);
			this->xTabele->Name = L"xTabele";
			this->xTabele->Size = System::Drawing::Size(21, 23);
			this->xTabele->TabIndex = 1;
			this->xTabele->TabStop = false;
			this->xTabele->Click += gcnew System::EventHandler(this, &MyForm::xTabele_Click);
			// 
			// tabListaRazrediPuni
			// 
			this->tabListaRazrediPuni->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabListaRazrediPuni->FormattingEnabled = true;
			this->tabListaRazrediPuni->ItemHeight = 26;
			this->tabListaRazrediPuni->Location = System::Drawing::Point(620, 130);
			this->tabListaRazrediPuni->Name = L"tabListaRazrediPuni";
			this->tabListaRazrediPuni->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabListaRazrediPuni->Size = System::Drawing::Size(319, 446);
			this->tabListaRazrediPuni->TabIndex = 3;
			this->tabListaRazrediPuni->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabListaRazrediPuni_SelectedIndexChanged);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(735, 97);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(75, 22);
			this->label43->TabIndex = 1;
			this->label43->Text = L"Razredi:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 720);
			this->Controls->Add(this->rasporediUcenikeStrana);
			this->Controls->Add(this->razrediStrana);
			this->Controls->Add(this->stranaTabelaUspjehaUcenika);
			this->Controls->Add(this->pocetnaStrana);
			this->Controls->Add(this->tabeleStrana);
			this->Controls->Add(this->uceniciStrana);
			this->Controls->Add(this->izmjeniRazredStrana);
			this->Controls->Add(this->dodajRazredStrana);
			this->Controls->Add(this->izmjeniUcenikaStrana);
			this->Controls->Add(this->dodajUcenikaStrana);
			this->Controls->Add(this->unesiOcjeneStrana);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pocetnaStrana->ResumeLayout(false);
			this->pocetnaStrana->PerformLayout();
			this->meniPocetnaStrana->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xPocetnaStrana))->EndInit();
			this->uceniciStrana->ResumeLayout(false);
			this->uceniciStrana->PerformLayout();
			this->meniUcenici->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xUcenici))->EndInit();
			this->dodajUcenikaStrana->ResumeLayout(false);
			this->dodajUcenikaStrana->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xDodajUcenika))->EndInit();
			this->izmjeniUcenikaStrana->ResumeLayout(false);
			this->izmjeniUcenikaStrana->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xIzmjeniUcenika))->EndInit();
			this->razrediStrana->ResumeLayout(false);
			this->razrediStrana->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->dodajRazredStrana->ResumeLayout(false);
			this->dodajRazredStrana->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xdodajRazred))->EndInit();
			this->izmjeniRazredStrana->ResumeLayout(false);
			this->izmjeniRazredStrana->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xIzmjeniRazred))->EndInit();
			this->rasporediUcenikeStrana->ResumeLayout(false);
			this->rasporediUcenikeStrana->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xRasporediUcenike))->EndInit();
			this->unesiOcjeneStrana->ResumeLayout(false);
			this->unesiOcjeneStrana->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xUnesiOcjene))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->stranaTabelaUspjehaUcenika->ResumeLayout(false);
			this->stranaTabelaUspjehaUcenika->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xTabUspUcenika))->EndInit();
			this->tabeleStrana->ResumeLayout(false);
			this->tabeleStrana->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xTabele))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		//pomoćne funkcije

		string spojiImePrezime(string ime, string prezime, int ucenikID) {
			return to_string(ucenikID+1) + " " + ime + " " + prezime;
		}

		String^ spojiRazredIDIme(string ime, int razredID) {
			return gcnew String(to_string(razredID).c_str()) + " " + gcnew String(ime.c_str());
				
		}

		Vladanje provjeriVladanjeInt(Vladanje novoVladanje, int broj) {
			switch (broj)
			{
			case 1: novoVladanje = vrloDobro;
				break;
			case 2: novoVladanje = dobro;
				break;
			case 3: novoVladanje = zadovoljavajuce;
				break;
			case 4: novoVladanje = lose;
				break;
			default: novoVladanje = primjerno;
				break;
			}
			return novoVladanje;
		}

		bool provjeraUcenikRazredID(int razredID, vector <Ucenik> ucenici) {
			for (auto ucenik : ucenici) {
				if (ucenik.getUcenikRazredID() == razredID)
					return true;
				else
					return false;
			}
		}

		///////////////////////////////////////////////////////////////////////////////
		  //////////////////////		IZLAZ IZ APLIKACIJE	   		 /////////////////////
		  ///////////////////////////////////////////////////////////////////////////////

	private: System::Void xPocetnaStrana_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xUcenici_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void psBtnNapustiApp_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xIzmjeniUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xDodajUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xdodajRazred_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xIzmjeniRazred_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xRasporediUcenike_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xUnesiOcjene_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xTabele_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void xTabUspUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

		   ///////////////////////////////////////////////////////////////////////////////
		  //////////////////////		POKRETANJE FORME	   		 /////////////////////
		  ///////////////////////////////////////////////////////////////////////////////

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		string imeUcenika;
		string prezimeUcenika;
		int ucenikID;
		string spol;
		int vladanje;
		int opravdani;
		int neopravdani;
		bool pohvala;
		int ukor;
		Vladanje novoVladanje;
		Ukori noviUkor;
		int ucenikRazredID;
		int ocjena;
		vector <int> ocjene;

		ifstream inFileUcenici("Ucenici.txt");
	

		while (inFileUcenici >> ucenikID) {
			inFileUcenici >> imeUcenika;
			inFileUcenici >> prezimeUcenika;
			inFileUcenici >> spol;
			inFileUcenici >> vladanje;
			inFileUcenici >> opravdani;
			inFileUcenici >> neopravdani;
			inFileUcenici >> pohvala;
			inFileUcenici >> ukor;
			inFileUcenici >> ucenikRazredID;
			for (int i{ 0 }; i < 16; i++) {
				inFileUcenici >> ocjena;
				if (ocjena != 0)
					ocjene.push_back(ocjena);
			}

			novoVladanje = provjeriVladanjeInt(novoVladanje, vladanje);

			Ucenik ucenikBaza(imeUcenika, prezimeUcenika,spol, opravdani, neopravdani, ucenikID, ucenikRazredID ,novoVladanje);
			ucenikBaza.setOcjene(ocjene);
			sviUcenici.push_back(ucenikBaza);
			ocjene.clear();
		}

		inFileUcenici.close();

		int razredID;
		string imeRazreda;
		string imeRazrednika;
		vector <string> predmeti;
		string predmet;

		ifstream inFileRazredi("Razredi.txt");


		while (inFileRazredi >> razredID) {
			inFileRazredi >> imeRazreda;
			inFileRazredi >> imeRazrednika;
			for (int i{ 0 }; i < 16; i++) {
				inFileRazredi >> predmet;
				if (predmet != "nema")
					predmeti.push_back(predmet);
			}
			Razred noviRazred(razredID, imeRazreda, imeRazrednika, predmeti);
			sviRazredi.push_back(noviRazred);
			predmeti.clear();
		}
	}

		   ///////////////////////////////////////////////////////////////////////////////
		 //////////////////////				 NAVIGACIJE		   		 /////////////////////
		 ///////////////////////////////////////////////////////////////////////////////

	private: System::Void umBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = true;
		uceniciStrana->Visible = false;
	}

	private: System::Void uceniciStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		listaUceniciNeURazredu->Items->Clear();
		listaUceniciURazredu->Items->Clear();
		
		for (Ucenik ucenik : sviUcenici) {
			if(ucenik.getUcenikRazredID()==100)
			listaUceniciNeURazredu->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(), ucenik.getPrezimeUcenika(), ucenik.getIDUcenika()).c_str()));
			else 
			listaUceniciURazredu->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(), ucenik.getPrezimeUcenika(), ucenik.getIDUcenika()).c_str()));
		}
			
	}

	private: System::Void psBtnUcenici_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = false;
		uceniciStrana->Visible = true;
	}

	private: System::Void umBtnDodajUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		uceniciStrana->Visible = false;
		dodajUcenikaStrana->Visible = true;
	}

	private: System::Void umBtnIzmjeniUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		uceniciStrana->Visible = false;
		izmjeniUcenikaStrana->Visible = true;
	}

	private: System::Void iuBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		izmjeniUcenikaStrana->Visible = false;
		uceniciStrana->Visible = true;
	}

	private: System::Void duBtnIzmjeniUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		dodajUcenikaStrana->Visible = false;
		izmjeniUcenikaStrana->Visible = true;
	}

	private: System::Void duBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		dodajUcenikaStrana->Visible = false;
		uceniciStrana->Visible = true;
	}

	private: System::Void rBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = true;
		razrediStrana->Visible = false;
	}

	private: System::Void psBtnRazredi_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = false;
		razrediStrana->Visible = true;
		listaRazrediBezUcenika->Items->Clear();
		listaRazredaSaUcenicima->Items->Clear();
		for (Razred razred : sviRazredi) {
			int brojac{ 0 };
			for (Ucenik ucenik : sviUcenici)
				if (razred.getRazredID() == ucenik.getUcenikRazredID()) {
					brojac++;
				}
			if (brojac != 0)
				listaRazredaSaUcenicima->Items->Add(spojiRazredIDIme(razred.getImeRazreda(), razred.getRazredID()));
			else
				listaRazrediBezUcenika->Items->Add(spojiRazredIDIme(razred.getImeRazreda(), razred.getRazredID()));
		}
		rBtnUnesiOcjene->Enabled = false;
	}

	private: System::Void irBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		izmjeniRazredStrana->Visible = false;
		razrediStrana->Visible = true;
	}
	private: System::Void rBtnIzmjeniRazred_Click(System::Object^ sender, System::EventArgs^ e) {
		razrediStrana->Visible = false;
		izmjeniRazredStrana->Visible = true;
	}

	private: System::Void psBtnTabele_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = false;
		tabeleStrana->Visible = true;

		tabListaRazrediPuni->Items->Clear();
		for (Razred razred : sviRazredi) {
			for (Ucenik ucenik : sviUcenici) {
				if (ucenik.getUcenikRazredID() == razred.getRazredID())
					tabListaRazrediPuni->Items->Add(spojiRazredIDIme(razred.getImeRazreda(), razred.getRazredID()));
				break;
			}
		}
	}

	private: System::Void label38_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}

	private: System::Void stranaTabelaUspjehaUcenika_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {


		//vector < System::Windows::Forms::ToolStripLabel^> listaPredmeta{ listaPredmetaPredmet1, listaPredmetaPredmet2 };



		/*
		for (int i{ 0 }; i <= 0; i++) {
			listaPredmeta[i]->Text = gcnew String(predmeti[i].c_str());
		}*/

	}
	private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void tabBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		tabeleStrana->Visible = false;
		pocetnaStrana->Visible = true;
		tabBtnTabelaUspjehaUcenika->Enabled = false;
	}

		
		   ///////////////////////////////////////////////////////////////////////////////
		   //////////////////////		 STRANA DODAJ UCENIKA		 /////////////////////
		   ///////////////////////////////////////////////////////////////////////////////
		

	private: System::Void duBtnDodajUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		string novoIme = msclr::interop::marshal_as< std::string >(duTFIme->Text); 
		string novoPrezime = msclr::interop::marshal_as< std::string >(duTFPrezime->Text);
		string noviSpol = msclr::interop::marshal_as< std::string >(duComboSpol ->Text);
		string ocjene = " 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0";
		Vladanje novoVladanjeEnm;
		Ukori noviUkor;

		

		novoVladanjeEnm = provjeriVladanjeInt(novoVladanjeEnm, duComboVladanje->SelectedIndex);

		/*switch (duComboVladanje->SelectedIndex)
		{
		case 1: novoVladanjeEnm = vrloDobro;
			break;
		case 2: novoVladanjeEnm = dobro;
			break;
		case 3: novoVladanjeEnm = zadovoljavajuce;
			break;
		case 4: novoVladanjeEnm = lose;
			break;
		default: novoVladanjeEnm = primjerno;
			break;
		}*/

		switch (duComboUkor->SelectedIndex)
		{
		case 1: noviUkor = ukorOS;
			break;
		case 2: noviUkor = ukorOV;
			break;
		case 3: noviUkor = ukorDirektora;
			break;
		case 4: noviUkor = ukorNV;
			break;
		case 5: noviUkor = iskljucenje;
			break;
		default: noviUkor = nema;
			break;
		}
		
		int noviOpravdani = stoi(msclr::interop::marshal_as< std::string >(duTFOpravdani->Text));
		int noviNeopravdani = stoi(msclr::interop::marshal_as< std::string >(duTFNeopravdani->Text));
		
		int noviUcenikID{ 0 };
		for (Ucenik ucenik : sviUcenici)
			noviUcenikID++;

		int noviUcenikRazredID{ 100 };

		Ucenik noviUcenik(novoIme, novoPrezime, noviSpol, noviOpravdani, noviNeopravdani, noviUcenikID, noviUcenikRazredID, novoVladanjeEnm, noviUkor);
		noviUcenik.izracunajUkupnoIzostanke();
		sviUcenici.push_back(noviUcenik);

		duListaSviUcenici->Items->Add(gcnew String(spojiImePrezime(noviUcenik.getImeUcenika(), noviUcenik.getPrezimeUcenika(), noviUcenik.getIDUcenika()).c_str()));
		
		duTFIme->Text = "";
		duTFPrezime->Text = "";
		duTFOpravdani->Text = "";
		duTFNeopravdani->Text = "";
		duComboSpol->Text = "";
		duComboVladanje -> Text = "";
		duComboUkor -> Text = "";

		fstream myFile;

		myFile.open("Ucenici.txt", fstream::app);
		if (!myFile) {
			Application::Exit();
		}
		else {
			myFile << " \n" << noviUcenik.getIDUcenika() << " " << noviUcenik.getImeUcenika() << " " << noviUcenik.getPrezimeUcenika() << " "
				<< noviUcenik.getSpolUcenika() << " " << duComboVladanje->SelectedIndex << " " << noviUcenik.getOpravdani() << " " << noviUcenik.getNeopravdani() << " "
				<< noviUcenik.getPohvala() << " " << duComboUkor->SelectedIndex << " " << noviUcenik.getUcenikRazredID() << " " << ocjene;
		}
		myFile.close();
	}


	private: System::Void dodajUcenikaStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		duListaSviUcenici->Items->Clear();
		for (Ucenik ucenik : sviUcenici)
			duListaSviUcenici->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(), ucenik.getPrezimeUcenika(), ucenik.getIDUcenika()).c_str()));
	}

		   ///////////////////////////////////////////////////////////////////////////////
		   //////////////////////		 STRANA DODAJ RAZRED		 /////////////////////
		   ///////////////////////////////////////////////////////////////////////////////

	string ispisiPredmete(vector <string> predmeti) {
		size_t brojac{ predmeti.size() };
	    string ispis = " ";
		string prazanPredmet = "nema";
		for (auto predmet : predmeti)
			ispis += predmet + " ";
		for (; brojac < 16; brojac++)
			ispis += prazanPredmet + " ";
		return ispis;
	}

	private: System::Void drBtnDodajRazred_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drTFImeRazreda->TextLength > 1 && drTFImeRazrednika->TextLength > 5 && drListaPredmeti->Items->Count > 2) {
			int noviRazredID{ 0 };

			for (auto Razred : sviRazredi)
				noviRazredID++;

			string novoImeRazreda = msclr::interop::marshal_as< std::string >(drTFImeRazreda->Text);
			string novoImeRazrednika = msclr::interop::marshal_as< std::string >(drTFImeRazrednika->Text);
			vector <string> noviPredmeti;
			for (auto predmet : predmetiZaNoviRazred)
				noviPredmeti.push_back(predmet);

			Razred noviRazred(noviRazredID, novoImeRazreda, novoImeRazrednika, noviPredmeti);
			sviRazredi.push_back(noviRazred);

			fstream myFile;

			myFile.open("Razredi.txt", fstream::app);
			if (!myFile) {
				Application::Exit();
			}
			else {
				myFile << " \n" <<noviRazred.getRazredID() << " " << noviRazred.getImeRazreda() << " " << noviRazred.getImeRazrednika() << " " << ispisiPredmete(noviRazred.getPredmeti()) << " ";
			}
			myFile.close();

			drTFImeRazreda->Clear();
			drTFImeRazrednika->Clear();
			drTFPredmet->Clear();
			drListaPredmeti->Items->Clear();
		}
		else
			MessageBox::Show("Unesite ime razreda, ime razrednika i minimalno 2 predmeta da bi napravili novi razred.");
	}


	private: System::Void drBtnDodajPredmet_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drTFPredmet->TextLength!=0) {
			drListaPredmeti->Items->Add(drTFPredmet->Text);
			predmetiZaNoviRazred.push_back(msclr::interop::marshal_as< std::string >(drTFPredmet->Text));
			drTFPredmet->Clear();
			drBtnDodajPredmet->Enabled = false;
		}	else
			MessageBox::Show("Unesite ime predmeta.");
	}
	
	private: System::Void drBtnIzbrisiPredmet_Click(System::Object^ sender, System::EventArgs^ e) {
		if (drTFPredmet->TextLength != 0) {
			drListaPredmeti->Items[drListaPredmeti->SelectedIndex] = drTFPredmet->Text;
			drTFPredmet->Clear();
		}
	}

	private: System::Void drBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		dodajRazredStrana->Visible = false;
		razrediStrana->Visible = true;
	}

	private: System::Void dodajRazredStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		drListaPredmeti->Items->Clear();
	}

	private: System::Void drTFPredmet_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		drBtnDodajPredmet->Enabled = true;
	}

	private: System::Void drListaPredmeti_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (drListaPredmeti->SelectedIndex >= 0)
			drBtnIzbrisiPredmet->Enabled = true;
	}



		   ///////////////////////////////////////////////////////////////////////////////
		  //////////////////////		 RAZREDI STRANA				 /////////////////////
		  ///////////////////////////////////////////////////////////////////////////////

	private: System::Void razrediStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {	
	}

	private: System::Void listaRazredaSaUcenicima_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if(listaRazredaSaUcenicima->SelectedIndex>=0)
			rBtnUnesiOcjene->Enabled = true;
	}

	private: System::Void rBtnRasporediUcenike_Click(System::Object^ sender, System::EventArgs^ e) {
		razrediStrana->Visible = false;
		rasporediUcenikeStrana->Visible = true;
		ruBtnUbaciURazred->Enabled = false;
		ruBtnPrikaziUcenike->Enabled = false;
	}

	private: System::Void rBtnDodajRazred_Click(System::Object^ sender, System::EventArgs^ e) {
		dodajRazredStrana->Visible = true;
		razrediStrana->Visible = false;
		drBtnDodajPredmet->Enabled = false;
		drBtnIzbrisiPredmet->Enabled = false;
	}

		   ///////////////////////////////////////////////////////////////////////////////
		   //////////////////////	 RASPOREDI UČENIKE STRANA		 /////////////////////
		   ///////////////////////////////////////////////////////////////////////////////
	

	private: System::Void rasporediUcenikeStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		ruListaRazredi->Items->Clear();
		ruListaUceniciBezRazreda->Items->Clear();
		ruListaUceniciURazredu->Items->Clear();

		for (Ucenik ucenik : sviUcenici) {
			if (ucenik.getUcenikRazredID() == 100)
				uceniciBezRazreda.push_back(ucenik);
		}

		for (auto ucenik:uceniciBezRazreda)
			ruListaUceniciBezRazreda->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(),ucenik.getPrezimeUcenika(),ucenik.getIDUcenika()).c_str()));

		for (auto razred:sviRazredi)
			ruListaRazredi->Items->Add(gcnew String(razred.getImeRazreda().c_str()));

		//ruListaUceniciURazredu->Items->Add();
	}


	private: System::Void ruBtnUbaciURazred_Click(System::Object^ sender, System::EventArgs^ e) {
		//int broj = ruListaUceniciBezRazreda->SelectedIndex;
		
		if (ruListaRazredi->SelectedIndex >=0 && ruListaUceniciBezRazreda->SelectedIndex>=0) {
			ruListaUceniciURazredu->Items->Clear();
			int ucenikID = uceniciBezRazreda[ruListaUceniciBezRazreda->SelectedIndex].getIDUcenika();
			int razredID = ruListaRazredi->SelectedIndex;
			for (auto &ucenik : sviUcenici) {
				if (ucenik.getIDUcenika() == ucenikID)
					ucenik.setUcenikRazredID(razredID);
				uceniciBezRazreda.clear();
				for (auto ucenik : sviUcenici) {
					if (ucenik.getUcenikRazredID() == 100)
						uceniciBezRazreda.push_back(ucenik);
				}
			}

		for (auto ucenik : sviUcenici) {
			if (ucenik.getUcenikRazredID() == razredID)
			ruListaUceniciURazredu->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(), ucenik.getPrezimeUcenika(), ucenik.getIDUcenika()).c_str()));
		}
		ruListaUceniciBezRazreda->Items->Remove(ruListaUceniciBezRazreda->SelectedItem);
		}
		else {
			MessageBox::Show("Morate odabrati jednog ucenika i razred gdje zelite smjestiti odabranog ucenika.");
		}
	}


	private: System::Void ruBtnPrikaziUcenike_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ruListaRazredi->SelectedIndex >= 0) {
			ruListaUceniciURazredu->Items->Clear();
			int razredID = ruListaRazredi->SelectedIndex;
			for (auto ucenik : sviUcenici) {
				if (ucenik.getUcenikRazredID() == razredID)
				ruListaUceniciURazredu->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(), ucenik.getPrezimeUcenika(), ucenik.getIDUcenika()).c_str()));
			}
		}
		else {
			MessageBox::Show("Prvo odaberite jednog ucenika sa liste -Ucenici bez razreda-.");
		}
		
	}
		  // gcnew String(.c_str())
	private: System::Void ruBtnSpremi_Click(System::Object^ sender, System::EventArgs^ e) {
		
		fstream myFile;
		
		
			myFile.open("Ucenici.txt", fstream::out | fstream::trunc);
			if (!myFile) {
				MessageBox::Show("Spremanje je neuspjesno, pokusajte ponovo.");
			} else {
				for (Ucenik noviUcenik : sviUcenici) {

					int vladanje{};

					switch (noviUcenik.getVladanjeUcenika()) {
					case vrloDobro: vladanje = 1;
						break;
					case dobro: vladanje = 2;
						break;
					case zadovoljavajuce: vladanje = 3;
						break;
					case lose: vladanje = 4;
						break;
					default: vladanje = 5;
						break;
					}
					int noviUkor{};

					switch (noviUcenik.getUkor()) {
					case ukorOS: noviUkor = 1;
						break;
					case ukorOV: noviUkor = 2;
						break;
					case ukorDirektora: noviUkor = 3;
						break;
					case ukorNV: noviUkor = 4;
						break;
					case iskljucenje: noviUkor = 5;
						break;
					default: noviUkor = 0;
						break;
					}

					string ocjene{""};
					string nula{ "0" };
					size_t brojac{ noviUcenik.getNizOcjena().size() };
					for (auto ocjena : noviUcenik.getNizOcjena()) {
						ocjene += to_string(ocjena) + " ";
					}
					for (; brojac < 16; brojac++)
						ocjene += nula + " ";


					myFile << " \n" << noviUcenik.getIDUcenika() << " " << noviUcenik.getImeUcenika() << " " << noviUcenik.getPrezimeUcenika() << " "
						<< noviUcenik.getSpolUcenika() << " " << vladanje << " " << noviUcenik.getOpravdani() << " " << noviUcenik.getNeopravdani() << " "
						<< noviUcenik.getPohvala() << " " << noviUkor << " " << noviUcenik.getUcenikRazredID() << " " << ocjene;
				}
				myFile.close();
			}
			MessageBox::Show("Podaci su uspjesno spremljeni.");
	}

	private: System::Void ruBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		rasporediUcenikeStrana->Visible = false;
		razrediStrana->Visible = true;
		uceniciBezRazreda.clear();
	}

	private: System::Void ruBtnIzbaciIZRazreda_Click(System::Object^ sender, System::EventArgs^ e) {


	}


	private: System::Void ruListaUceniciURazredu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ruListaUceniciURazredu->SelectedIndex >= 0) {
			ruListaUceniciBezRazreda->SelectedIndex = -1;
			ruBtnUbaciURazred->Enabled = false;
		}
	}

	private: System::Void ruListaRazredi_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ruListaRazredi->SelectedIndex >= 0)
			ruBtnPrikaziUcenike->Enabled = true;		
	}

	private: System::Void ruListaUceniciBezRazreda_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ruListaUceniciBezRazreda->SelectedIndex >= 0) {
			ruBtnUbaciURazred->Enabled = true;
			ruListaUceniciURazredu->SelectedIndex = -1;
		}
	}
		   ///////////////////////////////////////////////////////////////////////////////
		   //////////////////////		 UNESI OCJENE STRANA		 /////////////////////
		   ///////////////////////////////////////////////////////////////////////////////
	
		   int razredIDZaUO;


	private: System::Void rBtnUnesiOcjene_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ imeRazredaZaUnos = listaRazredaSaUcenicima->Items[listaRazredaSaUcenicima->SelectedIndex]->ToString();
		razredIDZaUO = imeRazredaZaUnos[0]-48;
		razrediStrana->Visible = false;
		unesiOcjeneStrana->Visible = true;
		uoBtnSacuvajOcjene->Enabled = false;
	}

	private: System::Void unesiOcjeneStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		uoListaUceniciURazredu->Items->Clear();
		uoListaPredmeti->Items->Clear();
		uoListaOcjene->Items->Clear();

		for (Razred razred : sviRazredi) {
			if (razred.getRazredID() == razredIDZaUO) {
				for (auto predmet : razred.getPredmeti())
					if (predmet != "nema")
						uoListaPredmeti->Items->Add(gcnew String(predmet.c_str()));
			}
		}

		for (Ucenik ucenik : sviUcenici) {
			if (ucenik.getUcenikRazredID() == razredIDZaUO) {
				uoUcenici.push_back(ucenik);
				uoListaUceniciURazredu->Items->Add(gcnew String(spojiImePrezime(ucenik.getImeUcenika(), ucenik.getPrezimeUcenika(), ucenik.getIDUcenika()).c_str()));
			}
		}
	}
   
	private: System::Void uoBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		unesiOcjeneStrana->Visible = false;
		razrediStrana->Visible = true;
		listaRazrediBezUcenika->Items->Clear();
		listaRazredaSaUcenicima->Items->Clear();
		for (Razred razred : sviRazredi) {
			int brojac{ 0 };
			for (Ucenik ucenik : sviUcenici)
				if (razred.getRazredID() == ucenik.getUcenikRazredID()) {
					brojac++;
				}
			if (brojac != 0)
				listaRazredaSaUcenicima->Items->Add(spojiRazredIDIme(razred.getImeRazreda(), razred.getRazredID()));
			else
				listaRazrediBezUcenika->Items->Add(spojiRazredIDIme(razred.getImeRazreda(), razred.getRazredID()));
		}
		rBtnUnesiOcjene->Enabled = false;




	}

	private: System::Void uoBtnDodajOcjenu_Click(System::Object^ sender, System::EventArgs^ e) {
		//int brojPredmeta = uoListaPredmeti->Items->Count;
		//int brojOcjena = uoListaOcjene->Items->Count;
		if (uoListaOcjene->Items->Count < uoListaPredmeti->Items->Count) {
			if (uoTFOcjena->TextLength != 0) {
				uoListaOcjene->Items->Add(uoTFOcjena->Text);
				uoTFOcjena->Clear();
			}
		}
	}

	private: System::Void uoBtnPromjeniOcjenu_Click(System::Object^ sender, System::EventArgs^ e) {
		if(uoTFOcjena->TextLength != 0) {
			uoListaOcjene->Items[uoListaOcjene->SelectedIndex] = uoTFOcjena->Text;
			uoTFOcjena->Clear();
		}
	}

		string ispisiOcjene(vector <int> ocjene) {
			size_t brojac{ ocjene.size() };
			string ispis = " ";
			string prazanPredmet = "0";
			for (auto ocjena: ocjene)
				ispis += to_string(ocjena) + " ";
			for (; brojac < 16; brojac++)
				ispis += prazanPredmet + " ";
			return ispis;
		}

	private: System::Void uoBtnSacuvajOcjene_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = uoListaUceniciURazredu->SelectedIndex;
		int index = uoUcenici[i].getIDUcenika();
		vector <int> ocjene;

		for (int i{ 0 }; i < uoListaOcjene->Items->Count; i++) {
			String^ ocjena = uoListaOcjene->Items[i]->ToString();
			ocjene.push_back(ocjena[0] - 48);
		}
		
		for (Ucenik &ucenik : sviUcenici)
			if (ucenik.getIDUcenika() == index) {
				ucenik.setOcjene(ocjene);
				break;
			}
				
		ocjene.clear();
		fstream myFile;


		myFile.open("Ucenici.txt", fstream::out | fstream::trunc);
		if (!myFile) {
			MessageBox::Show("nije uspjelo ucitavanje baze, promjene se nisu spremile.");
		}
		else {
			for (Ucenik noviUcenik : sviUcenici) {

				int vladanje{};

				switch (noviUcenik.getVladanjeUcenika()) {
				case vrloDobro: vladanje = 1;
					break;
				case dobro: vladanje = 2;
					break;
				case zadovoljavajuce: vladanje = 3;
					break;
				case lose: vladanje = 4;
					break;
				default: vladanje = 5;
					break;
				}
				int noviUkor{};

				switch (noviUcenik.getUkor()) {
				case ukorOS: noviUkor = 1;
					break;
				case ukorOV: noviUkor = 2;
					break;
				case ukorDirektora: noviUkor = 3;
					break;
				case ukorNV: noviUkor = 4;
					break;
				case iskljucenje: noviUkor = 5;
					break;
				default: noviUkor = 0;
					break;
				}
				myFile << " \n" << noviUcenik.getIDUcenika() << " " << noviUcenik.getImeUcenika() << " " << noviUcenik.getPrezimeUcenika() << " "
					<< noviUcenik.getSpolUcenika() << " " << vladanje << " " << noviUcenik.getOpravdani() << " " << noviUcenik.getNeopravdani() << " "
					<< noviUcenik.getPohvala() << " " << noviUkor << " " << noviUcenik.getUcenikRazredID() << " " << ispisiOcjene(noviUcenik.getNizOcjena());
			}
			myFile.close();
		}		
	}
	private: System::Void uoBtnPrikaziOcjene_Click(System::Object^ sender, System::EventArgs^ e) {
		uoListaOcjene->Items->Clear();
		int i = uoListaUceniciURazredu->SelectedIndex;
		int index = uoUcenici[i].getIDUcenika();
		for (auto ocjena : sviUcenici[index].getNizOcjena())
			uoListaOcjene->Items->Add(ocjena);
	}


	private: System::Void uoListaUceniciURazredu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		uoBtnSacuvajOcjene->Enabled = true;
	}


		 ///////////////////////////////////////////////////////////////////////////////
		//////////////////////				 TABELE	   			 /////////////////////
		///////////////////////////////////////////////////////////////////////////////

	private: System::Void tabeleStrana_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		/*tabListaRazrediPuni->Items->Clear();
		for (Razred razred : sviRazredi) {
			for (Ucenik ucenik : sviUcenici) {
				if (ucenik.getUcenikRazredID() == razred.getRazredID())
					tabListaRazrediPuni->Items->Add(spojiRazredIDIme(razred.getImeRazreda(), razred.getRazredID()));
				break;
			}
		}*/
	}
	private: System::Void tabListaRazrediPuni_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tabBtnTabelaUspjehaUcenika->Enabled = true;
	}

		   ///////////////////////////////////////////////////////////////////////////////
		//////////////////////     STRANA TABELA USPJEHA UČENIKA 	/////////////////////
		///////////////////////////////////////////////////////////////////////////////
		   int razredIDZaTab;

	private: System::Void tabBtnTabelaUspjehaUcenika_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ imeRazredaZaTab = tabListaRazrediPuni->Items[tabListaRazrediPuni->SelectedIndex]->ToString();
		razredIDZaTab = imeRazredaZaTab[0] - 48;
		
		//System::Windows::Forms::Form::Width = 1023;
		//System::Windows::Forms::Form::Height = 720;
		//System::Windows::Forms::Form::Top = 0;
		//System::Windows::Forms::Form::Left = 0;

		tabeleStrana->Visible = false;
		stranaTabelaUspjehaUcenika->Visible = true;

		for (Razred razred : sviRazredi) {
			if (razred.getRazredID() == razredIDZaTab) {
				for (auto predmeti : razred.getPredmeti())
					listaPredmetaUcenika->Items->Add(gcnew String(predmeti.c_str()));
				break;
			}
		}
		
		int Xosa = 55;
		int Yosa = 200;
		int rb = 1;

		for (Ucenik ucenik : sviUcenici) {
			int Xosa = 55;
			if (ucenik.getUcenikRazredID() == razredIDZaTab) {

				ucenik.izracunajProsjekOcjena();
				ucenik.izracunajUkupnoIzostanke();
				ucenik.provjeriNeopravdane();

				//ispis rednog broja
				String^ RB = rb+"";
				Label^ labelRB = gcnew  Label();
				labelRB->Text = RB;

				Point newLocation;
				newLocation.X = Xosa;
				newLocation.Y = Yosa;
				labelRB->Location = newLocation;
				labelRB->AutoSize = true;
				labelRB->Name = "redniBroj"+rb;
				labelRB->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelRB);

				//Ispis imena učenika
				Xosa = 140;

				String^ imeUcenika = gcnew String(ucenik.getImeUcenika().c_str()) + " " + gcnew String(ucenik.getPrezimeUcenika().c_str());
				Label^ labelIme = gcnew  Label();
				labelIme->Text = imeUcenika;

				Point newLocationIme;
				newLocationIme.X = Xosa;
				newLocationIme.Y = Yosa;
				labelIme->Location = newLocationIme;
				labelIme->AutoSize = true;
				labelIme->Name = "imeUčenika" + rb;
				labelIme->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelIme);

				//ispis ocjena učenika
				Xosa = 318;

				for (int i{ 0 }; i < ucenik.getNizOcjena().size(); i++) {

					String^ ocjene = "" + ucenik.getNizOcjena()[i];
					Label^ ocjena = gcnew  Label();
					ocjena->Text = ocjene;

					Point newLocation;
					newLocation.X = Xosa;
					newLocation.Y = Yosa;
					ocjena->Location = newLocation;
					ocjena->Name = "ocjena" + i;
					ocjena->AutoSize = true;
					ocjena->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					stranaTabelaUspjehaUcenika->Controls->Add(ocjena);
					Xosa += 23;
				}

				//Ispis općeg uspjeha učenika
				Xosa = 730;

				String^ opciUspjeh = "" + ucenik.getOpciUspjeh();
				Label^ labelprosjek = gcnew  Label();
				labelprosjek->Text = opciUspjeh;

				Point newLocationProsjek;
				newLocationProsjek.X = Xosa;
				newLocationProsjek.Y = Yosa;
				labelprosjek->Location = newLocationProsjek;
				labelprosjek->AutoSize = true;
				labelprosjek->Name = "prosjek" + rb;
				labelprosjek->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelprosjek);

				//Ispis opravdanih izostanaka
				Xosa = 800;

				String^ opIzostanci = "" + ucenik.getOpravdani();
				Label^ labelopIzostanci = gcnew  Label();
				labelopIzostanci->Text = opIzostanci;

				Point newLocationopIzostanci;
				newLocationopIzostanci.X = Xosa;
				newLocationopIzostanci.Y = Yosa;
				labelopIzostanci->Location = newLocationopIzostanci;
				labelopIzostanci->AutoSize = true;
				labelopIzostanci->Name = "opr" + rb;
				labelopIzostanci->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelopIzostanci);

				//Ispis Neopravdanih izostanaka
				Xosa = 840;

				String^ opNeIzostanci = " " + ucenik.getNeopravdani();
				Label^ labelopNeIzostanci = gcnew  Label();
				labelopNeIzostanci->Text = opNeIzostanci;

				Point newLocationNeIzostanci;
				newLocationNeIzostanci.X = Xosa;
				newLocationNeIzostanci.Y = Yosa;
				labelopNeIzostanci->Location = newLocationNeIzostanci;
				labelopNeIzostanci->AutoSize = true;
				labelopNeIzostanci->Name = "neopr" + rb;
				labelopNeIzostanci->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelopNeIzostanci);

				//Ispis ukupnih izostanaka
				Xosa = 877;

				String^ UkIzostanci = " " + ucenik.getUkupIzostanci();
				Label^ labelUkIzostanci = gcnew  Label();
				labelUkIzostanci->Text = UkIzostanci;

				Point newLocatiUkIzostanci;
				newLocatiUkIzostanci.X = Xosa;
				newLocatiUkIzostanci.Y = Yosa;
				labelUkIzostanci->Location = newLocatiUkIzostanci;
				labelUkIzostanci->AutoSize = true;
				labelUkIzostanci->Name = "ukupno" + rb;
				labelUkIzostanci->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelUkIzostanci);

				String^ vladanjeStr{};

				switch (ucenik.getVladanjeUcenika()) {
				case vrloDobro: vladanjeStr = "Vrlo Dobro";
					break;
				case dobro: vladanjeStr = "Dobro";
					break;
				case zadovoljavajuce: vladanjeStr = "Zadovoljavajuće";
					break;
				case lose: vladanjeStr = "Loše";
					break;
				default: vladanjeStr = "Primjerno";
					break;
				}

				//Ispis vladanja 
				Xosa = 930;

				String^ vladanje = vladanjeStr;
				Label^ labelVladanje = gcnew  Label();
				labelVladanje->Text = vladanje;

				Point newLocatiVladanje;
				newLocatiVladanje.X = Xosa;
				newLocatiVladanje.Y = Yosa;
				labelVladanje->Location = newLocatiVladanje;
				labelVladanje->AutoSize = true;
				labelVladanje->Name = "vladanje" + rb;
				labelVladanje->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				stranaTabelaUspjehaUcenika->Controls->Add(labelVladanje);


				rb++;
				Yosa += 20;
			}
		}



		/*vector <string> predmeti{ "Bosanski Jezik i književnost","Engleski jezik", "Tjelesni i zdravstveni odgoj", "Historija", "Informatika", "Matematika", "Fizika", "Socijalna demokratija", "Mehanički elementi" };
		

		for (auto predmet : predmeti)
			listaPredmetaUcenika->Items->Add(gcnew String(predmet.c_str()));

*/


		/*vector <int> ocjene{ 1,2,4,5,3,2,4,1,5 };
		for (int i{ 0 }; i < 9; i++) {

			String^ toBeAdded = "" + ocjene[i];
			Label^ job = gcnew  Label();
			job->Text = toBeAdded;

			Point newLocation;
			newLocation.X = 318 + (23 * i);
			newLocation.Y = 198;
			job->Location = newLocation;
			job->Name = "novistring" + i;
			job->AutoSize = true;
			job->Font = (gcnew System::Drawing::Font(L"Open Sans", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			stranaTabelaUspjehaUcenika->Controls->Add(job);


		}*/

		/*String^ toBeAdded = "1";
		Label^ job = gcnew  Label();
		job->Text = toBeAdded;*/

		/*Point newLocation;
		newLocation.X = 50;
		newLocation.Y = 500;
		job->Location = newLocation;
		job->Size.Width = 13;
		job->Size.Height = 13;
		job->AutoSize = true;
		stranaTabelaUspjehaUcenika->Controls->Add(job);


		String^ toBeAdded2 = "2";
		Label^ job2 = gcnew  Label();
		job2->Text = toBeAdded2;

		Point newLocation2;
		newLocation2.X = 70;
		newLocation2.Y = 500;
		job2->Location = newLocation2;
		job2->Size.Width = 13;
		job2->Size.Height = 13;
		job2->AutoSize = true;
		stranaTabelaUspjehaUcenika->Controls->Add(job2);*/
	}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}






};

}

