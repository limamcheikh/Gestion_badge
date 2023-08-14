#pragma once
#include <Windows.h>
#include <gdiplus.h>
#include <string>
#include <vcclr.h>
#include <string>
#include <Windows.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <stdexcept>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cliext/vector>
#include <cliext/list>
#include <cliext/algorithm>
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>


using namespace System;
using namespace System::Windows::Forms;




#pragma comment(lib, "Gdiplus.lib")

namespace Project13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace Gdiplus;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace MySql::Data::MySqlClient;




	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlcon = gcnew	MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		MySqlDataAdapter^ sqlDTA = gcnew MySqlDataAdapter();
		DataTable^ sqlDT = gcnew DataTable();
		MySqlDataReader^ sqlRD;


	private: System::Windows::Forms::TextBox^ texttelephone;

	private: System::Windows::Forms::TextBox^ textgmail;


	private: System::Windows::Forms::Label^ labelTelephone;

	private: System::Windows::Forms::Label^ labelGmail;
	private: System::Windows::Forms::TextBox^ textSexe;
	private: System::Windows::Forms::Label^ labelsexe;
	private: System::Windows::Forms::Label^ labelNNI;
	private: System::Windows::Forms::TextBox^ textNNI;
	private: System::Windows::Forms::Button^ buttonreffresh;
	private: System::Windows::Forms::DateTimePicker^ dateproduction;
	private: System::Windows::Forms::DateTimePicker^ dateExpiration;
	private: System::Windows::Forms::DateTimePicker^ dateEmbauche;

	private: System::Windows::Forms::TextBox^ textFamille;






	public:
		MyForm2(void)
		{
			InitializeComponent();


			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ buttonmodificate;


	private: System::Windows::Forms::Button^ buttonAddnew;


	private: System::Windows::Forms::Button^ buttonReset;


	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Label^ labelNom;



	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ labelDateEmbauche;

	private: System::Windows::Forms::Label^ labelIdemployer;

	private: System::Windows::Forms::TextBox^ textIdEmployre;


	private: System::Windows::Forms::TextBox^ textPrenom;
	private: System::Windows::Forms::Label^ labelPrenom;


	private: System::Windows::Forms::TextBox^ textNom;
	private: System::Windows::Forms::Label^ labelNumeroSerie;


	private: System::Windows::Forms::TextBox^ textNumeroSerie;

	private: System::Windows::Forms::TextBox^ textIdbudge;


	private: System::Windows::Forms::Label^ labelIdBadge;
	private: System::Windows::Forms::Label^ labeldateproduction;






	private: System::Windows::Forms::Label^ labelDtaeExpBadge;


	private: System::Windows::Forms::Label^ labelStatut;

	private: System::Windows::Forms::TextBox^ textStatut;
	private: System::Windows::Forms::Label^ labelPhoto;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelNomfamille;
private: System::Windows::Forms::TextBox^ textSearchID;







	private: System::Windows::Forms::Button^ buttonSearch;



	public:
		Form^ obj;
		MyForm2(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			dataBaseintiallize();


			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






















	protected:











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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateproduction = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateExpiration = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->textSexe = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->labelsexe = (gcnew System::Windows::Forms::Label());
			this->labelNNI = (gcnew System::Windows::Forms::Label());
			this->textNNI = (gcnew System::Windows::Forms::TextBox());
			this->texttelephone = (gcnew System::Windows::Forms::TextBox());
			this->textgmail = (gcnew System::Windows::Forms::TextBox());
			this->labelTelephone = (gcnew System::Windows::Forms::Label());
			this->labelGmail = (gcnew System::Windows::Forms::Label());
			this->textFamille = (gcnew System::Windows::Forms::TextBox());
			this->labelPhoto = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->buttonAddnew = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonmodificate = (gcnew System::Windows::Forms::Button());
			this->buttonreffresh = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelNomfamille = (gcnew System::Windows::Forms::Label());
			this->textSearchID = (gcnew System::Windows::Forms::TextBox());
			this->labelDtaeExpBadge = (gcnew System::Windows::Forms::Label());
			this->labelStatut = (gcnew System::Windows::Forms::Label());
			this->textStatut = (gcnew System::Windows::Forms::TextBox());
			this->labeldateproduction = (gcnew System::Windows::Forms::Label());
			this->labelNumeroSerie = (gcnew System::Windows::Forms::Label());
			this->textNumeroSerie = (gcnew System::Windows::Forms::TextBox());
			this->textIdbudge = (gcnew System::Windows::Forms::TextBox());
			this->labelIdBadge = (gcnew System::Windows::Forms::Label());
			this->labelDateEmbauche = (gcnew System::Windows::Forms::Label());
			this->labelIdemployer = (gcnew System::Windows::Forms::Label());
			this->textIdEmployre = (gcnew System::Windows::Forms::TextBox());
			this->textPrenom = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenom = (gcnew System::Windows::Forms::Label());
			this->textNom = (gcnew System::Windows::Forms::TextBox());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dateproduction);
			this->panel1->Controls->Add(this->dateExpiration);
			this->panel1->Controls->Add(this->dateEmbauche);
			this->panel1->Controls->Add(this->textSexe);
			this->panel1->Controls->Add(this->buttonSearch);
			this->panel1->Controls->Add(this->labelsexe);
			this->panel1->Controls->Add(this->labelNNI);
			this->panel1->Controls->Add(this->textNNI);
			this->panel1->Controls->Add(this->texttelephone);
			this->panel1->Controls->Add(this->textgmail);
			this->panel1->Controls->Add(this->labelTelephone);
			this->panel1->Controls->Add(this->labelGmail);
			this->panel1->Controls->Add(this->textFamille);
			this->panel1->Controls->Add(this->labelPhoto);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->labelNomfamille);
			this->panel1->Controls->Add(this->textSearchID);
			this->panel1->Controls->Add(this->labelDtaeExpBadge);
			this->panel1->Controls->Add(this->labelStatut);
			this->panel1->Controls->Add(this->textStatut);
			this->panel1->Controls->Add(this->labeldateproduction);
			this->panel1->Controls->Add(this->labelNumeroSerie);
			this->panel1->Controls->Add(this->textNumeroSerie);
			this->panel1->Controls->Add(this->textIdbudge);
			this->panel1->Controls->Add(this->labelIdBadge);
			this->panel1->Controls->Add(this->labelDateEmbauche);
			this->panel1->Controls->Add(this->labelIdemployer);
			this->panel1->Controls->Add(this->textIdEmployre);
			this->panel1->Controls->Add(this->textPrenom);
			this->panel1->Controls->Add(this->labelPrenom);
			this->panel1->Controls->Add(this->textNom);
			this->panel1->Controls->Add(this->labelNom);
			this->panel1->Location = System::Drawing::Point(-3, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1582, 299);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel1_Paint_1);
			// 
			// dateproduction
			// 
			this->dateproduction->CustomFormat = L"yyyy-MM-dd";
			this->dateproduction->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateproduction->Location = System::Drawing::Point(752, 196);
			this->dateproduction->Name = L"dateproduction";
			this->dateproduction->Size = System::Drawing::Size(200, 25);
			this->dateproduction->TabIndex = 35;
			// 
			// dateExpiration
			// 
			this->dateExpiration->CustomFormat = L"yyyy-MM-dd";
			this->dateExpiration->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateExpiration->Location = System::Drawing::Point(1202, 8);
			this->dateExpiration->Name = L"dateExpiration";
			this->dateExpiration->Size = System::Drawing::Size(200, 25);
			this->dateExpiration->TabIndex = 34;
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->CustomFormat = L"yyyy-MM-dd";
			this->dateEmbauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEmbauche->Location = System::Drawing::Point(235, 112);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(200, 25);
			this->dateEmbauche->TabIndex = 33;
			// 
			// textSexe
			// 
			this->textSexe->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textSexe->Location = System::Drawing::Point(752, 47);
			this->textSexe->Name = L"textSexe";
			this->textSexe->Size = System::Drawing::Size(206, 25);
			this->textSexe->TabIndex = 32;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->Location = System::Drawing::Point(1084, 107);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(87, 40);
			this->buttonSearch->TabIndex = 6;
			this->buttonSearch->Text = L"Search";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm2::buttonSearch_Click);
			// 
			// labelsexe
			// 
			this->labelsexe->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelsexe->Location = System::Drawing::Point(484, 42);
			this->labelsexe->Name = L"labelsexe";
			this->labelsexe->Size = System::Drawing::Size(151, 30);
			this->labelsexe->TabIndex = 31;
			this->labelsexe->Text = L"Sexe";
			// 
			// labelNNI
			// 
			this->labelNNI->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNNI->Location = System::Drawing::Point(484, 4);
			this->labelNNI->Name = L"labelNNI";
			this->labelNNI->Size = System::Drawing::Size(151, 30);
			this->labelNNI->TabIndex = 30;
			this->labelNNI->Text = L"NNI";
			// 
			// textNNI
			// 
			this->textNNI->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textNNI->Location = System::Drawing::Point(752, 6);
			this->textNNI->Name = L"textNNI";
			this->textNNI->Size = System::Drawing::Size(206, 25);
			this->textNNI->TabIndex = 29;
			// 
			// texttelephone
			// 
			this->texttelephone->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->texttelephone->Location = System::Drawing::Point(235, 241);
			this->texttelephone->Name = L"texttelephone";
			this->texttelephone->Size = System::Drawing::Size(206, 25);
			this->texttelephone->TabIndex = 28;
			// 
			// textgmail
			// 
			this->textgmail->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textgmail->Location = System::Drawing::Point(235, 199);
			this->textgmail->Name = L"textgmail";
			this->textgmail->Size = System::Drawing::Size(206, 25);
			this->textgmail->TabIndex = 27;
			// 
			// labelTelephone
			// 
			this->labelTelephone->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTelephone->Location = System::Drawing::Point(15, 236);
			this->labelTelephone->Name = L"labelTelephone";
			this->labelTelephone->Size = System::Drawing::Size(151, 30);
			this->labelTelephone->TabIndex = 25;
			this->labelTelephone->Text = L"numeroTel";
			// 
			// labelGmail
			// 
			this->labelGmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGmail->Location = System::Drawing::Point(20, 194);
			this->labelGmail->Name = L"labelGmail";
			this->labelGmail->Size = System::Drawing::Size(151, 30);
			this->labelGmail->TabIndex = 24;
			this->labelGmail->Text = L"Gmail";
			// 
			// textFamille
			// 
			this->textFamille->Location = System::Drawing::Point(235, 155);
			this->textFamille->Name = L"textFamille";
			this->textFamille->Size = System::Drawing::Size(206, 25);
			this->textFamille->TabIndex = 23;
			// 
			// labelPhoto
			// 
			this->labelPhoto->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPhoto->Location = System::Drawing::Point(1464, 107);
			this->labelPhoto->Name = L"labelPhoto";
			this->labelPhoto->Size = System::Drawing::Size(76, 30);
			this->labelPhoto->TabIndex = 22;
			this->labelPhoto->Text = L"Photo";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->buttonAddnew);
			this->flowLayoutPanel1->Controls->Add(this->buttonDelete);
			this->flowLayoutPanel1->Controls->Add(this->buttonReset);
			this->flowLayoutPanel1->Controls->Add(this->buttonExit);
			this->flowLayoutPanel1->Controls->Add(this->buttonmodificate);
			this->flowLayoutPanel1->Controls->Add(this->buttonreffresh);
			this->flowLayoutPanel1->Location = System::Drawing::Point(1081, 155);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(539, 132);
			this->flowLayoutPanel1->TabIndex = 1;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::flowLayoutPanel1_Paint);
			// 
			// buttonAddnew
			// 
			this->buttonAddnew->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddnew->Location = System::Drawing::Point(3, 3);
			this->buttonAddnew->Name = L"buttonAddnew";
			this->buttonAddnew->Size = System::Drawing::Size(156, 51);
			this->buttonAddnew->TabIndex = 1;
			this->buttonAddnew->Text = L"AddNew";
			this->buttonAddnew->UseVisualStyleBackColor = true;
			this->buttonAddnew->Click += gcnew System::EventHandler(this, &MyForm2::buttonAddnew_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->Location = System::Drawing::Point(165, 3);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(156, 51);
			this->buttonDelete->TabIndex = 5;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm2::buttonDelete_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReset->Location = System::Drawing::Point(327, 3);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(156, 51);
			this->buttonReset->TabIndex = 3;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm2::buttonReset_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(3, 60);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(156, 51);
			this->buttonExit->TabIndex = 1;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm2::buttonExit_Click);
			// 
			// buttonmodificate
			// 
			this->buttonmodificate->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonmodificate->Location = System::Drawing::Point(165, 60);
			this->buttonmodificate->Name = L"buttonmodificate";
			this->buttonmodificate->Size = System::Drawing::Size(156, 51);
			this->buttonmodificate->TabIndex = 0;
			this->buttonmodificate->Text = L"modificate";
			this->buttonmodificate->UseVisualStyleBackColor = true;
			this->buttonmodificate->Click += gcnew System::EventHandler(this, &MyForm2::buttonmodificate_Click);
			// 
			// buttonreffresh
			// 
			this->buttonreffresh->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonreffresh->Location = System::Drawing::Point(327, 60);
			this->buttonreffresh->Name = L"buttonreffresh";
			this->buttonreffresh->Size = System::Drawing::Size(156, 51);
			this->buttonreffresh->TabIndex = 33;
			this->buttonreffresh->Text = L"reffresh";
			this->buttonreffresh->UseVisualStyleBackColor = true;
			this->buttonreffresh->Click += gcnew System::EventHandler(this, &MyForm2::buttonreffresh_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1425, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(146, 101);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// labelNomfamille
			// 
			this->labelNomfamille->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNomfamille->Location = System::Drawing::Point(20, 150);
			this->labelNomfamille->Name = L"labelNomfamille";
			this->labelNomfamille->Size = System::Drawing::Size(151, 30);
			this->labelNomfamille->TabIndex = 20;
			this->labelNomfamille->Text = L"nomFamille";
			// 
			// textSearchID
			// 
			this->textSearchID->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textSearchID->Location = System::Drawing::Point(1202, 112);
			this->textSearchID->Name = L"textSearchID";
			this->textSearchID->Size = System::Drawing::Size(206, 25);
			this->textSearchID->TabIndex = 19;
			// 
			// labelDtaeExpBadge
			// 
			this->labelDtaeExpBadge->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDtaeExpBadge->Location = System::Drawing::Point(998, 6);
			this->labelDtaeExpBadge->Name = L"labelDtaeExpBadge";
			this->labelDtaeExpBadge->Size = System::Drawing::Size(209, 30);
			this->labelDtaeExpBadge->TabIndex = 17;
			this->labelDtaeExpBadge->Text = L"Date d\'exp badge";
			// 
			// labelStatut
			// 
			this->labelStatut->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelStatut->Location = System::Drawing::Point(484, 231);
			this->labelStatut->Name = L"labelStatut";
			this->labelStatut->Size = System::Drawing::Size(151, 30);
			this->labelStatut->TabIndex = 16;
			this->labelStatut->Text = L"Statut";
			// 
			// textStatut
			// 
			this->textStatut->Location = System::Drawing::Point(752, 241);
			this->textStatut->Name = L"textStatut";
			this->textStatut->Size = System::Drawing::Size(206, 25);
			this->textStatut->TabIndex = 15;
			// 
			// labeldateproduction
			// 
			this->labeldateproduction->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldateproduction->Location = System::Drawing::Point(484, 194);
			this->labeldateproduction->Name = L"labeldateproduction";
			this->labeldateproduction->Size = System::Drawing::Size(233, 30);
			this->labeldateproduction->TabIndex = 14;
			this->labeldateproduction->Text = L"Date productionBadge";
			// 
			// labelNumeroSerie
			// 
			this->labelNumeroSerie->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumeroSerie->Location = System::Drawing::Point(484, 150);
			this->labelNumeroSerie->Name = L"labelNumeroSerie";
			this->labelNumeroSerie->Size = System::Drawing::Size(151, 30);
			this->labelNumeroSerie->TabIndex = 12;
			this->labelNumeroSerie->Text = L"Numero serie ";
			// 
			// textNumeroSerie
			// 
			this->textNumeroSerie->Location = System::Drawing::Point(752, 155);
			this->textNumeroSerie->Name = L"textNumeroSerie";
			this->textNumeroSerie->Size = System::Drawing::Size(206, 25);
			this->textNumeroSerie->TabIndex = 11;
			// 
			// textIdbudge
			// 
			this->textIdbudge->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textIdbudge->Location = System::Drawing::Point(752, 107);
			this->textIdbudge->Name = L"textIdbudge";
			this->textIdbudge->Size = System::Drawing::Size(206, 25);
			this->textIdbudge->TabIndex = 10;
			// 
			// labelIdBadge
			// 
			this->labelIdBadge->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIdBadge->Location = System::Drawing::Point(484, 107);
			this->labelIdBadge->Name = L"labelIdBadge";
			this->labelIdBadge->Size = System::Drawing::Size(151, 30);
			this->labelIdBadge->TabIndex = 8;
			this->labelIdBadge->Text = L"ID Badge       ";
			// 
			// labelDateEmbauche
			// 
			this->labelDateEmbauche->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateEmbauche->Location = System::Drawing::Point(20, 104);
			this->labelDateEmbauche->Name = L"labelDateEmbauche";
			this->labelDateEmbauche->Size = System::Drawing::Size(209, 30);
			this->labelDateEmbauche->TabIndex = 7;
			this->labelDateEmbauche->Text = L"Date d\'embauche";
			// 
			// labelIdemployer
			// 
			this->labelIdemployer->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIdemployer->Location = System::Drawing::Point(20, 73);
			this->labelIdemployer->Name = L"labelIdemployer";
			this->labelIdemployer->Size = System::Drawing::Size(147, 30);
			this->labelIdemployer->TabIndex = 6;
			this->labelIdemployer->Text = L"ID employer   ";
			// 
			// textIdEmployre
			// 
			this->textIdEmployre->Location = System::Drawing::Point(235, 78);
			this->textIdEmployre->Name = L"textIdEmployre";
			this->textIdEmployre->Size = System::Drawing::Size(206, 25);
			this->textIdEmployre->TabIndex = 4;
			// 
			// textPrenom
			// 
			this->textPrenom->Location = System::Drawing::Point(235, 42);
			this->textPrenom->Name = L"textPrenom";
			this->textPrenom->Size = System::Drawing::Size(206, 25);
			this->textPrenom->TabIndex = 3;
			// 
			// labelPrenom
			// 
			this->labelPrenom->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrenom->Location = System::Drawing::Point(20, 42);
			this->labelPrenom->Name = L"labelPrenom";
			this->labelPrenom->Size = System::Drawing::Size(99, 30);
			this->labelPrenom->TabIndex = 2;
			this->labelPrenom->Text = L"prenom ";
			// 
			// textNom
			// 
			this->textNom->Location = System::Drawing::Point(235, 11);
			this->textNom->Name = L"textNom";
			this->textNom->Size = System::Drawing::Size(206, 25);
			this->textNom->TabIndex = 1;
			this->textNom->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// labelNom
			// 
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->Location = System::Drawing::Point(20, 11);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(70, 30);
			this->labelNom->TabIndex = 0;
			this->labelNom->Text = L"nom ";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Location = System::Drawing::Point(-3, 310);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(1571, 301);
			this->flowLayoutPanel2->TabIndex = 2;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::flowLayoutPanel2_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 310);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1568, 298);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm2::dataGridView1_CellContentClick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1580, 645);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

	private: System::Void dataBaseintiallize() {

		try {
			sqlcon->ConnectionString = "datasource=localhost; port=3306; username=root; password=limam123; database=gcc_database";
			sqlcon->Open();

			// Load data into dataGridView1
			sqlcmd->Connection = sqlcon;
			sqlcmd->CommandText = "select * from gcc_database.employer";
			sqlRD = sqlcmd->ExecuteReader();
			sqlDT->Load(sqlRD);
			sqlRD->Close();
			dataGridView1->DataSource = sqlDT;

			// Load data into dataGridView2
			sqlcmd->CommandText = "select * from gcc_database.badge";
			sqlRD = sqlcmd->ExecuteReader();
			sqlDT->Load(sqlRD);
			sqlRD->Close();
			dataGridView1->DataSource = sqlDT;

			sqlcon->Close(); // Close the connection after loading data
		}
		catch (Exception^ ex) {
			// Handle and log the exception
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

		   // reffresh data base

	private: System::Void ReffreshDB() {
		try {
			sqlcon->ConnectionString = "datasource=localhost; port=3306; username=root; password=limam123; database=gcc_database";
			sqlcon->Open();

			// Refresh 'employer' data
			MySqlDataAdapter^ sqlDTAEmployer = gcnew MySqlDataAdapter("select * from gcc_database.employer", sqlcon);
			DataTable^ sqlDTEmployer = gcnew DataTable();
			sqlDTAEmployer->Fill(sqlDTEmployer);
			dataGridView1->DataSource = sqlDTEmployer;

			// Refresh 'badge' data
			MySqlDataAdapter^ sqlDTABadge = gcnew MySqlDataAdapter("select * from gcc_database.badge", sqlcon);
			DataTable^ sqlDTBadge = gcnew DataTable();
			sqlDTABadge->Fill(sqlDTBadge);
			dataGridView1->DataSource = sqlDTBadge;

			sqlcon->Close();
		}
		catch (Exception^ ex) {
			// Handle and log the exception
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
	}



// add new data to datbase 

		




	
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{


	}



	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			textIdEmployre->Text = "";
			textNom->Text = "";
			textPrenom->Text = "";
			textFamille->Text = "";
			dateEmbauche->ResetText();
			textIdbudge->Text = "";
			textNumeroSerie->Text = "";
			dateproduction->ResetText();
			textStatut->Text = "";
			dateExpiration->ResetText();
			textSearchID->Text = "";
			textNNI->Text = "";
			texttelephone->Text = "";
			textgmail->Text = "";
			

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			// iExit = MessageBox::Show("confirm if you want to exit, this Application ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (MessageBox::Show("Confirm if you want to exit this Application?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				Application::Exit();
			}
		}
		catch (Exception^ ex) {
			// Display the exception message with an "OK" button for acknowledgment
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}






	private: System::Void dateEmission_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void buttonconnectDatabase_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {


		textIdEmployre->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		textNom->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		textPrenom->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		textFamille->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		textgmail->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		textNNI->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		textSexe->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		texttelephone->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		dateEmbauche->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		textIdbudge->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		textNumeroSerie->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		dateproduction->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		textStatut->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
		dateExpiration->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}

}


private: System::Void buttonreffresh_Click(System::Object^ sender, System::EventArgs^ e) {
	ReffreshDB();
}

	private: System::Void buttonmodificate_Click(System::Object^ sender, System::EventArgs^ e) {





}
private: System::Void buttonAddnew_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		sqlcon->ConnectionString = "datasource=localhost; port=3306; username=root; password=limam123; database=gcc_database";
		sqlcon->Open();

		// Insert into 'employer' table
		MySqlCommand^ sqlcmdEmployer = gcnew MySqlCommand();
		sqlcmdEmployer->Connection = sqlcon;
		sqlcmdEmployer->CommandText = "INSERT INTO gcc_database.employer (id_employer, nom, prenom, nomFamille, Adresee_electronique, NNI, N_telephone, Sexe, date_embauche) "
			"VALUES ('" + textIdEmployre->Text + "','" + textNom->Text + "','" + textPrenom->Text + "','" + textFamille->Text + "','" + textgmail->Text + "','" + textNNI->Text + "','" + texttelephone->Text +
			"','" + textSexe->Text + "','" + dateEmbauche->Text + "')";
		sqlcmdEmployer->ExecuteNonQuery();

		sqlcon->Close();
		dataBaseintiallize();
		ReffreshDB();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error - Employer", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	try {
		sqlcon->Open();

		// Insert into 'badge' table
		MySqlCommand^ sqlcmdBadge = gcnew MySqlCommand();
		sqlcmdBadge->Connection = sqlcon;
		sqlcmdBadge->CommandText = "INSERT INTO gcc_database.badge (id_badge, date_production, date_expiration, statut, numero_serie) "
			"VALUES ('" + textIdbudge->Text + "','" + dateproduction->Text + "','" + dateExpiration->Text + "','" + textStatut->Text + "','" + textNumeroSerie->Text + "')";
		sqlcmdBadge->ExecuteNonQuery();

		sqlcon->Close();
		dataBaseintiallize();
		ReffreshDB();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error - Badge", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}



}

private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		DataView^ dv = sqlDT->DefaultView;
		dv->RowFilter = String::Format("nom like '%{0}'", textSearchID->Text);
		dataGridView1->DataSource = dv->ToTable();

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
	
}
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
