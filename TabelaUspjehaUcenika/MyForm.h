#pragma once
#include <vector>
#include <string>

namespace TabelaUspjehaUcenika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Button^ duBtnIzmjeniUcenika;
	private: System::Windows::Forms::Button^ duBtnNazad;


	private: System::Windows::Forms::Panel^ izmjeniUcenikaStrana;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ iuBtnNazad;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ xIzmjeniUcenika;


	private: System::Windows::Forms::Label^ iuGlavniNaslov;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ labelduIme;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ labelduPrezime;
	private: System::Windows::Forms::Label^ labelduIzostanciNP;
	private: System::Windows::Forms::Label^ labelduIzostanciOP;
	private: System::Windows::Forms::Label^ labelduIzostanci;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	public protected: System::Windows::Forms::RadioButton^ radioButton6;
	private:

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Label^ label2;
public protected: System::Windows::Forms::RadioButton^ radioButton10;
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
private: System::Windows::Forms::Button^ button4;
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
private: System::Windows::Forms::ListBox^ listaRazredaSaUčenicima;
private: System::Windows::Forms::ListBox^ listaRazrediBezUcenika;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Panel^ dodajRazredStrana;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::GroupBox^ groupBox9;


private:

public protected:




private:

public protected:





private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;

private: System::Windows::Forms::Label^ label20;

private: System::Windows::Forms::Label^ label21;



private: System::Windows::Forms::TextBox^ textBox15;
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
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ListBox^ listBox6;
private: System::Windows::Forms::ListBox^ listBox4;
private: System::Windows::Forms::ListBox^ listBox5;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Button^ ruBtnNazad;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::PictureBox^ xRasporediUcenike;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Panel^ unesiOcjeneStrana;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::ListBox^ listBox7;
private: System::Windows::Forms::ListBox^ listBox8;
private: System::Windows::Forms::ListBox^ listBox9;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Button^ uoBtnNazad;

private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::PictureBox^ xUnesiOcjene;

private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button17;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->labelduIme = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->labelduPrezime = (gcnew System::Windows::Forms::Label());
			this->labelduIzostanciNP = (gcnew System::Windows::Forms::Label());
			this->labelduIzostanciOP = (gcnew System::Windows::Forms::Label());
			this->labelduIzostanci = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->duBtnIzmjeniUcenika = (gcnew System::Windows::Forms::Button());
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
			this->listaRazredaSaUčenicima = (gcnew System::Windows::Forms::ListBox());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
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
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->ruBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->xRasporediUcenike = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->unesiOcjeneStrana = (gcnew System::Windows::Forms::Panel());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->uoBtnNazad = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->xUnesiOcjene = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->dodajUcenikaStrana->Controls->Add(this->button4);
			this->dodajUcenikaStrana->Controls->Add(this->listBox1);
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
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button4->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(406, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(235, 84);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Dodaj učenika";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Location = System::Drawing::Point(662, 132);
			this->listBox1->Name = L"listBox1";
			this->listBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox1->Size = System::Drawing::Size(319, 446);
			this->listBox1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(649, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(340, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Učenici koji su raspoređeni po razredima:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->labelduIme);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->labelduPrezime);
			this->groupBox1->Controls->Add(this->labelduIzostanciNP);
			this->groupBox1->Controls->Add(this->labelduIzostanciOP);
			this->groupBox1->Controls->Add(this->labelduIzostanci);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(20, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(369, 558);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Unesite tražene podatke";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton9);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton5);
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Location = System::Drawing::Point(58, 422);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(292, 113);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ukor";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton10->Location = System::Drawing::Point(6, 37);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(99, 38);
			this->radioButton10->TabIndex = 21;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"nema";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton9->Location = System::Drawing::Point(204, 69);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->radioButton9->Size = System::Drawing::Size(83, 38);
			this->radioButton9->TabIndex = 22;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"isklj.";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton8->Location = System::Drawing::Point(130, 69);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->radioButton8->Size = System::Drawing::Size(67, 38);
			this->radioButton8->TabIndex = 21;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"NV";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(34, 69);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(71, 38);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"dir.";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(219, 37);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(67, 38);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"OV";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(131, 37);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(66, 38);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"OS";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Location = System::Drawing::Point(58, 341);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(293, 81);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pohvala";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(195, 37);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(66, 38);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"NE";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(75, 37);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(67, 38);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"DA";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(58, 151);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(293, 81);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Spol";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(171, 37);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(116, 38);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Žensko";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(54, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 38);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Muško";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(176, 42);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(174, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 42);
			this->textBox1->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(304, 293);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(46, 42);
			this->textBox6->TabIndex = 18;
			// 
			// labelduIme
			// 
			this->labelduIme->AutoSize = true;
			this->labelduIme->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIme->Location = System::Drawing::Point(106, 58);
			this->labelduIme->Name = L"labelduIme";
			this->labelduIme->Size = System::Drawing::Size(70, 34);
			this->labelduIme->TabIndex = 7;
			this->labelduIme->Text = L"Ime:";
			this->labelduIme->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(212, 293);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(46, 42);
			this->textBox5->TabIndex = 17;
			// 
			// labelduPrezime
			// 
			this->labelduPrezime->AutoSize = true;
			this->labelduPrezime->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduPrezime->Location = System::Drawing::Point(52, 106);
			this->labelduPrezime->Name = L"labelduPrezime";
			this->labelduPrezime->Size = System::Drawing::Size(124, 34);
			this->labelduPrezime->TabIndex = 9;
			this->labelduPrezime->Text = L"Prezime:";
			this->labelduPrezime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelduIzostanciNP
			// 
			this->labelduIzostanciNP->AutoSize = true;
			this->labelduIzostanciNP->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIzostanciNP->Location = System::Drawing::Point(259, 295);
			this->labelduIzostanciNP->Name = L"labelduIzostanciNP";
			this->labelduIzostanciNP->Size = System::Drawing::Size(49, 34);
			this->labelduIzostanciNP->TabIndex = 16;
			this->labelduIzostanciNP->Text = L"NP";
			this->labelduIzostanciNP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelduIzostanciOP
			// 
			this->labelduIzostanciOP->AutoSize = true;
			this->labelduIzostanciOP->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIzostanciOP->Location = System::Drawing::Point(168, 295);
			this->labelduIzostanciOP->Name = L"labelduIzostanciOP";
			this->labelduIzostanciOP->Size = System::Drawing::Size(49, 34);
			this->labelduIzostanciOP->TabIndex = 15;
			this->labelduIzostanciOP->Text = L"OP";
			this->labelduIzostanciOP->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelduIzostanci
			// 
			this->labelduIzostanci->AutoSize = true;
			this->labelduIzostanci->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelduIzostanci->Location = System::Drawing::Point(45, 295);
			this->labelduIzostanci->Name = L"labelduIzostanci";
			this->labelduIzostanci->Size = System::Drawing::Size(132, 34);
			this->labelduIzostanci->TabIndex = 14;
			this->labelduIzostanci->Text = L"Izostanci:";
			this->labelduIzostanci->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(174, 245);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(176, 42);
			this->textBox4->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 34);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Vladanje:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel3->Controls->Add(this->duBtnIzmjeniUcenika);
			this->panel3->Controls->Add(this->duBtnNazad);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 620);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1024, 100);
			this->panel3->TabIndex = 5;
			// 
			// duBtnIzmjeniUcenika
			// 
			this->duBtnIzmjeniUcenika->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->duBtnIzmjeniUcenika->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->duBtnIzmjeniUcenika->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"duBtnIzmjeniUcenika.Image")));
			this->duBtnIzmjeniUcenika->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->duBtnIzmjeniUcenika->Location = System::Drawing::Point(732, 15);
			this->duBtnIzmjeniUcenika->Name = L"duBtnIzmjeniUcenika";
			this->duBtnIzmjeniUcenika->Size = System::Drawing::Size(178, 74);
			this->duBtnIzmjeniUcenika->TabIndex = 2;
			this->duBtnIzmjeniUcenika->Text = L"Izmjeni učenika";
			this->duBtnIzmjeniUcenika->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->duBtnIzmjeniUcenika->UseVisualStyleBackColor = true;
			this->duBtnIzmjeniUcenika->Click += gcnew System::EventHandler(this, &MyForm::duBtnIzmjeniUcenika_Click);
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
			this->razrediStrana->Controls->Add(this->listaRazredaSaUčenicima);
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
			// 
			// listaRazredaSaUčenicima
			// 
			this->listaRazredaSaUčenicima->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listaRazredaSaUčenicima->FormattingEnabled = true;
			this->listaRazredaSaUčenicima->ItemHeight = 26;
			this->listaRazredaSaUčenicima->Location = System::Drawing::Point(616, 130);
			this->listaRazredaSaUčenicima->Name = L"listaRazredaSaUčenicima";
			this->listaRazredaSaUčenicima->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listaRazredaSaUčenicima->Size = System::Drawing::Size(319, 446);
			this->listaRazredaSaUčenicima->TabIndex = 7;
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
			this->dodajRazredStrana->Controls->Add(this->button5);
			this->dodajRazredStrana->Controls->Add(this->button6);
			this->dodajRazredStrana->Controls->Add(this->button7);
			this->dodajRazredStrana->Controls->Add(this->listBox3);
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
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(269, 434);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(235, 84);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Dodaj razred";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(406, 329);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(235, 84);
			this->button6->TabIndex = 26;
			this->button6->Text = L"izbriši predmet";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(135, 330);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(235, 84);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Dodaj Predmet";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 26;
			this->listBox3->Location = System::Drawing::Point(703, 132);
			this->listBox3->Name = L"listBox3";
			this->listBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox3->Size = System::Drawing::Size(188, 446);
			this->listBox3->TabIndex = 24;
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
			this->groupBox9->Controls->Add(this->textBox11);
			this->groupBox9->Controls->Add(this->textBox12);
			this->groupBox9->Controls->Add(this->label20);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->textBox15);
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
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(234, 96);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(176, 33);
			this->textBox11->TabIndex = 8;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(234, 48);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(176, 33);
			this->textBox12->TabIndex = 6;
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
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(234, 144);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(176, 33);
			this->textBox15->TabIndex = 12;
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
			this->button9->Text = L"izbriši predmet";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = false;
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
			this->rasporediUcenikeStrana->Controls->Add(this->button13);
			this->rasporediUcenikeStrana->Controls->Add(this->button12);
			this->rasporediUcenikeStrana->Controls->Add(this->button11);
			this->rasporediUcenikeStrana->Controls->Add(this->label32);
			this->rasporediUcenikeStrana->Controls->Add(this->listBox6);
			this->rasporediUcenikeStrana->Controls->Add(this->listBox4);
			this->rasporediUcenikeStrana->Controls->Add(this->listBox5);
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
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->Location = System::Drawing::Point(285, 448);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(235, 84);
			this->button13->TabIndex = 28;
			this->button13->Text = L"Prikaži učenike";
			this->button13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button12->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->Location = System::Drawing::Point(285, 307);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(235, 84);
			this->button12->TabIndex = 27;
			this->button12->Text = L"Izbaci iz razreda";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button11->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(285, 207);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(235, 84);
			this->button11->TabIndex = 26;
			this->button11->Text = L"Ubaci u razred";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button11->UseVisualStyleBackColor = false;
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
			// listBox6
			// 
			this->listBox6->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 26;
			this->listBox6->Location = System::Drawing::Point(722, 126);
			this->listBox6->Name = L"listBox6";
			this->listBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox6->Size = System::Drawing::Size(217, 446);
			this->listBox6->TabIndex = 8;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 26;
			this->listBox4->Location = System::Drawing::Point(564, 126);
			this->listBox4->Name = L"listBox4";
			this->listBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox4->Size = System::Drawing::Size(115, 446);
			this->listBox4->TabIndex = 7;
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 26;
			this->listBox5->Location = System::Drawing::Point(26, 130);
			this->listBox5->Name = L"listBox5";
			this->listBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox5->Size = System::Drawing::Size(217, 446);
			this->listBox5->TabIndex = 6;
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
			this->unesiOcjeneStrana->Controls->Add(this->textBox17);
			this->unesiOcjeneStrana->Controls->Add(this->label37);
			this->unesiOcjeneStrana->Controls->Add(this->button17);
			this->unesiOcjeneStrana->Controls->Add(this->button14);
			this->unesiOcjeneStrana->Controls->Add(this->button15);
			this->unesiOcjeneStrana->Controls->Add(this->button16);
			this->unesiOcjeneStrana->Controls->Add(this->label33);
			this->unesiOcjeneStrana->Controls->Add(this->listBox7);
			this->unesiOcjeneStrana->Controls->Add(this->listBox8);
			this->unesiOcjeneStrana->Controls->Add(this->listBox9);
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
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(884, 155);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(61, 33);
			this->textBox17->TabIndex = 30;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Open Sans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(787, 156);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(91, 28);
			this->label37->TabIndex = 31;
			this->label37->Text = L"Ocjena:";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button17->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button17->Location = System::Drawing::Point(746, 425);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(235, 84);
			this->button17->TabIndex = 29;
			this->button17->Text = L"Izbriši ocjenu";
			this->button17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button14->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button14->Location = System::Drawing::Point(244, 204);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(235, 84);
			this->button14->TabIndex = 28;
			this->button14->Text = L"Prikaži ocjene";
			this->button14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button15->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button15->Location = System::Drawing::Point(746, 204);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(235, 84);
			this->button15->TabIndex = 27;
			this->button15->Text = L"Dodaj Ocjenu";
			this->button15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button16->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button16->Location = System::Drawing::Point(746, 307);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(235, 84);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Promjeni ocjene";
			this->button16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(509, 107);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(83, 22);
			this->label33->TabIndex = 9;
			this->label33->Text = L"Predmeti";
			// 
			// listBox7
			// 
			this->listBox7->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 26;
			this->listBox7->Location = System::Drawing::Point(626, 132);
			this->listBox7->Name = L"listBox7";
			this->listBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox7->Size = System::Drawing::Size(83, 446);
			this->listBox7->TabIndex = 8;
			// 
			// listBox8
			// 
			this->listBox8->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 26;
			this->listBox8->Location = System::Drawing::Point(495, 132);
			this->listBox8->Name = L"listBox8";
			this->listBox8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox8->Size = System::Drawing::Size(115, 446);
			this->listBox8->TabIndex = 7;
			// 
			// listBox9
			// 
			this->listBox9->Font = (gcnew System::Drawing::Font(L"Open Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox9->FormattingEnabled = true;
			this->listBox9->ItemHeight = 26;
			this->listBox9->Location = System::Drawing::Point(50, 132);
			this->listBox9->Name = L"listBox9";
			this->listBox9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox9->Size = System::Drawing::Size(176, 446);
			this->listBox9->TabIndex = 6;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(635, 107);
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
			this->label35->Location = System::Drawing::Point(55, 107);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 720);
			this->Controls->Add(this->uceniciStrana);
			this->Controls->Add(this->izmjeniRazredStrana);
			this->Controls->Add(this->dodajRazredStrana);
			this->Controls->Add(this->izmjeniUcenikaStrana);
			this->Controls->Add(this->dodajUcenikaStrana);
			this->Controls->Add(this->unesiOcjeneStrana);
			this->Controls->Add(this->rasporediUcenikeStrana);
			this->Controls->Add(this->razrediStrana);
			this->Controls->Add(this->pocetnaStrana);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
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
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
			this->ResumeLayout(false);

		}
#pragma endregion

		//	************* X - IKSEVI - EXIT BUTTONS *************

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

		//  ************* X - IKSEVI - EXIT BUTTONS END *************

	private: System::Void umBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = true;
		uceniciStrana->Visible = false;
	}
	private: System::Void psBtnUcenici_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = false;
		uceniciStrana->Visible = true;
		listaUceniciNeURazredu->Items->Clear();
		listaUceniciURazredu->Items->Clear();
		

		vector <string> ucenici{ "Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Al2len Al-Shamali", "Ahmedd Agic", "Emraf durmic", "Edmra helja","Allen Al-Sdhamali", "Ahmed Agdic", "Emrah durfmic", "Emra heslja","Allen Al-Sahamali", "Ahmed Agdic", "Emrah dusrmic", "Emra hfelja","Allen Al-Shamaali", "Ahmed Agdic", "Emrah dufrmic", "Emrsa helja","Aldlen Al-Shamasli", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja", };
		

		for (string ime : ucenici) {
			listaUceniciNeURazredu->Items->Add(gcnew String(ime.c_str()));
		}
			
		

		
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
}


private: System::Void drBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
	dodajRazredStrana->Visible = false;
	razrediStrana->Visible = true;
}
private: System::Void rBtnDodajRazred_Click(System::Object^ sender, System::EventArgs^ e) {
	dodajRazredStrana->Visible = true;
	razrediStrana->Visible = false;
}

private: System::Void irBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
	izmjeniRazredStrana->Visible = false;
	razrediStrana->Visible = true;
}
private: System::Void rBtnIzmjeniRazred_Click(System::Object^ sender, System::EventArgs^ e) {
	razrediStrana->Visible = false;
	izmjeniRazredStrana->Visible = true;
}

private: System::Void ruBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
	rasporediUcenikeStrana->Visible = false;
	razrediStrana->Visible = true;
}

private: System::Void rBtnRasporediUcenike_Click(System::Object^ sender, System::EventArgs^ e) {
	razrediStrana->Visible = false;
	rasporediUcenikeStrana->Visible = true;
}
private: System::Void uoBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
	unesiOcjeneStrana->Visible = false;
	razrediStrana->Visible = true;
}
private: System::Void rBtnUnesiOcjene_Click(System::Object^ sender, System::EventArgs^ e) {
	razrediStrana->Visible = false;
	unesiOcjeneStrana->Visible = true;
	razrediStrana->Visible = false;
	unesiOcjeneStrana->Visible = true;
	razrediStrana->Visible = false;
	unesiOcjeneStrana->Visible = true;
	razrediStrana->Visible = false;
	unesiOcjeneStrana->Visible = true;

}

};
}
