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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ glavniNaslov;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ psBtnNapustiApp;
	private: System::Windows::Forms::Button^ psBtnTabele;
	private: System::Windows::Forms::Button^ psBtnRazredi;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->glavniNaslov = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->uceniciStrana = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listaUceniciNeURazredu = (gcnew System::Windows::Forms::ListBox());
			this->listaUceniciURazredu = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->meniPocetnaStrana = (gcnew System::Windows::Forms::Panel());
			this->psBtnNapustiApp = (gcnew System::Windows::Forms::Button());
			this->psBtnTabele = (gcnew System::Windows::Forms::Button());
			this->psBtnRazredi = (gcnew System::Windows::Forms::Button());
			this->psBtnUcenici = (gcnew System::Windows::Forms::Button());
			this->meniUcenici = (gcnew System::Windows::Forms::Panel());
			this->umBtnNazad = (gcnew System::Windows::Forms::Button());
			this->pocetnaStrana->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->uceniciStrana->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->meniPocetnaStrana->SuspendLayout();
			this->meniUcenici->SuspendLayout();
			this->SuspendLayout();
			// 
			// pocetnaStrana
			// 
			this->pocetnaStrana->Controls->Add(this->panel1);
			this->pocetnaStrana->Controls->Add(this->label2);
			this->pocetnaStrana->Controls->Add(this->label1);
			this->pocetnaStrana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pocetnaStrana->Location = System::Drawing::Point(0, 0);
			this->pocetnaStrana->Margin = System::Windows::Forms::Padding(0, 0, 3, 3);
			this->pocetnaStrana->Name = L"pocetnaStrana";
			this->pocetnaStrana->Size = System::Drawing::Size(1024, 620);
			this->pocetnaStrana->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->glavniNaslov);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1024, 49);
			this->panel1->TabIndex = 0;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(277, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(483, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"razredu (predmeti, opravani, neopravdani časovi, procenti itd).";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(254, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(556, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dobro došli u alpha fazi aplikacije za tabelarni prikaz uspjeha učenika po ";
			// 
			// uceniciStrana
			// 
			this->uceniciStrana->Controls->Add(this->panel2);
			this->uceniciStrana->Controls->Add(this->listaUceniciNeURazredu);
			this->uceniciStrana->Controls->Add(this->listaUceniciURazredu);
			this->uceniciStrana->Controls->Add(this->label3);
			this->uceniciStrana->Controls->Add(this->label4);
			this->uceniciStrana->Location = System::Drawing::Point(0, 0);
			this->uceniciStrana->Name = L"uceniciStrana";
			this->uceniciStrana->Size = System::Drawing::Size(1024, 620);
			this->uceniciStrana->TabIndex = 3;
			this->uceniciStrana->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1024, 49);
			this->panel2->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Location = System::Drawing::Point(1001, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(21, 23);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(616, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Učenici koji nisu raspoređeni po razredima:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(64, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(323, 22);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Učenici koji su raspoređeni po razredima:";
			// 
			// meniPocetnaStrana
			// 
			this->meniPocetnaStrana->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->meniPocetnaStrana->Controls->Add(this->psBtnNapustiApp);
			this->meniPocetnaStrana->Controls->Add(this->psBtnTabele);
			this->meniPocetnaStrana->Controls->Add(this->psBtnRazredi);
			this->meniPocetnaStrana->Controls->Add(this->psBtnUcenici);
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
			// meniUcenici
			// 
			this->meniUcenici->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->meniUcenici->Controls->Add(this->umBtnNazad);
			this->meniUcenici->Location = System::Drawing::Point(0, 620);
			this->meniUcenici->Name = L"meniUcenici";
			this->meniUcenici->Size = System::Drawing::Size(1024, 100);
			this->meniUcenici->TabIndex = 4;
			this->meniUcenici->Visible = false;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 720);
			this->Controls->Add(this->meniPocetnaStrana);
			this->Controls->Add(this->meniUcenici);
			this->Controls->Add(this->uceniciStrana);
			this->Controls->Add(this->pocetnaStrana);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->pocetnaStrana->ResumeLayout(false);
			this->pocetnaStrana->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->uceniciStrana->ResumeLayout(false);
			this->uceniciStrana->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->meniPocetnaStrana->ResumeLayout(false);
			this->meniUcenici->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		//	************* X - IKSEVI - EXIT BUTTONS *************

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

	private: System::Void umBtnNazad_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = true;
		meniPocetnaStrana->Visible = true;
		uceniciStrana->Visible = false;
		meniUcenici->Visible = false;
	}
	private: System::Void psBtnUcenici_Click(System::Object^ sender, System::EventArgs^ e) {
		pocetnaStrana->Visible = false;
		meniPocetnaStrana->Visible = false;
		uceniciStrana->Visible = true;
		meniUcenici->Visible = true;
		listaUceniciNeURazredu->Items->Clear();
		listaUceniciURazredu->Items->Clear();
		

		vector <string> ucenici{ "Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Al2len Al-Shamali", "Ahmedd Agic", "Emraf durmic", "Edmra helja","Allen Al-Sdhamali", "Ahmed Agdic", "Emrah durfmic", "Emra heslja","Allen Al-Sahamali", "Ahmed Agdic", "Emrah dusrmic", "Emra hfelja","Allen Al-Shamaali", "Ahmed Agdic", "Emrah dufrmic", "Emrsa helja","Aldlen Al-Shamasli", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja","Allen Al-Shamali", "Ahmed Agic", "Emrah durmic", "Emra helja", };
		

		for (string ime : ucenici) {
			listaUceniciNeURazredu->Items->Add(gcnew String(ime.c_str()));
		}
			
		

		
	}





};
}
