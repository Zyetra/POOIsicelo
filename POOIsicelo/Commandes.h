#pragma once
#include "CLServices.h"
#include "CLCad.h"
#include "CLCommande.h"
#include "CLPersonne.h"
#include "CLStats.h"
#include "CLArticle.h"

namespace POOIsicelo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Commandes
	/// </summary>
	public ref class Commandes : public System::Windows::Forms::Form
	{
	public:
		//System::String^ VilleL;

		Commandes(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->oSvc = gcnew CLservices();
			this->oCad = gcnew CLcad();
			this->Com1 = gcnew MCommande();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Commandes()
		{
			if (components)
			{
				delete components;
			}
		}

	private: CLservices^ oSvc;
	private: CLcad^ oCad;
	private: MCommande^ Com1;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ creerCommande;
	private: System::Windows::Forms::Button^ delCommande;
	private: System::Windows::Forms::Button^ modArticle;
	private: System::Windows::Forms::Button^ affCommande;
	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommande;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ refCommande;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;







	private: System::Windows::Forms::TextBox^ montant1;




	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ prixHT;
	private: System::Windows::Forms::TextBox^ prixTVA;
	private: System::Windows::Forms::TextBox^ prixTTC;







	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ adresseLivraison;





	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ codeClient;

	private: System::Windows::Forms::Label^ label19;



	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ adresseFacturation;

	private: System::Windows::Forms::DateTimePicker^ dateEmission;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DateTimePicker^ datePaiement;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ nomClient;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::DateTimePicker^ dateNaissance;
private: System::Windows::Forms::ComboBox^ moyenPaiement;
private: System::Windows::Forms::ComboBox^ addArticle;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::NumericUpDown^ quantiteArticle;
private: System::Windows::Forms::TextBox^ nomClient1;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ numService;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ adrSociete;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ nomSociete;
private: System::Windows::Forms::Label^ label12;










	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Commandes::typeid));
			this->creerCommande = (gcnew System::Windows::Forms::Button());
			this->delCommande = (gcnew System::Windows::Forms::Button());
			this->modArticle = (gcnew System::Windows::Forms::Button());
			this->affCommande = (gcnew System::Windows::Forms::Button());
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->dataGridViewCommande = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->quantiteArticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->addArticle = (gcnew System::Windows::Forms::ComboBox());
			this->dateLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateEmission = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->refCommande = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->moyenPaiement = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->datePaiement = (gcnew System::Windows::Forms::DateTimePicker());
			this->montant1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->adresseFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->adresseLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->codeClient = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->nomClient1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numService = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->adrSociete = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->prixHT = (gcnew System::Windows::Forms::TextBox());
			this->prixTVA = (gcnew System::Windows::Forms::TextBox());
			this->prixTTC = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->nomSociete = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantiteArticle))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// creerCommande
			// 
			this->creerCommande->AccessibleDescription = L"hello";
			this->creerCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->creerCommande->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->creerCommande->Location = System::Drawing::Point(16, 15);
			this->creerCommande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->creerCommande->Name = L"creerCommande";
			this->creerCommande->Size = System::Drawing::Size(164, 42);
			this->creerCommande->TabIndex = 3;
			this->creerCommande->Text = L"Créer une Commande";
			this->creerCommande->UseVisualStyleBackColor = true;
			this->creerCommande->Click += gcnew System::EventHandler(this, &Commandes::creerCommande_Click);
			// 
			// delCommande
			// 
			this->delCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->delCommande->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->delCommande->Location = System::Drawing::Point(16, 67);
			this->delCommande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->delCommande->Name = L"delCommande";
			this->delCommande->Size = System::Drawing::Size(164, 48);
			this->delCommande->TabIndex = 4;
			this->delCommande->Text = L"Supprimer une Commande";
			this->delCommande->UseVisualStyleBackColor = true;
			this->delCommande->Click += gcnew System::EventHandler(this, &Commandes::delCommande_Click);
			// 
			// modArticle
			// 
			this->modArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->modArticle->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->modArticle->Location = System::Drawing::Point(16, 125);
			this->modArticle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->modArticle->Name = L"modArticle";
			this->modArticle->Size = System::Drawing::Size(164, 46);
			this->modArticle->TabIndex = 5;
			this->modArticle->Text = L"Modifier une Commande";
			this->modArticle->UseVisualStyleBackColor = true;
			this->modArticle->Click += gcnew System::EventHandler(this, &Commandes::modArticle_Click);
			// 
			// affCommande
			// 
			this->affCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->affCommande->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->affCommande->Location = System::Drawing::Point(16, 182);
			this->affCommande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->affCommande->Name = L"affCommande";
			this->affCommande->Size = System::Drawing::Size(164, 44);
			this->affCommande->TabIndex = 6;
			this->affCommande->Text = L"Afficher une Commande";
			this->affCommande->UseVisualStyleBackColor = true;
			this->affCommande->Click += gcnew System::EventHandler(this, &Commandes::affCommande_Click);
			// 
			// buttonRetour
			// 
			this->buttonRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->buttonRetour->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->buttonRetour->Location = System::Drawing::Point(15, 241);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(165, 48);
			this->buttonRetour->TabIndex = 7;
			this->buttonRetour->Text = L"Retour au menu";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &Commandes::buttonRetour_Click);
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(16, 305);
			this->dataGridViewCommande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->RowHeadersWidth = 51;
			this->dataGridViewCommande->Size = System::Drawing::Size(1395, 212);
			this->dataGridViewCommande->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->quantiteArticle);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->addArticle);
			this->groupBox1->Controls->Add(this->dateLivraison);
			this->groupBox1->Controls->Add(this->dateEmission);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->refCommande);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(482, 11);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(275, 274);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Commande";
			// 
			// quantiteArticle
			// 
			this->quantiteArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->quantiteArticle->Location = System::Drawing::Point(5, 244);
			this->quantiteArticle->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->quantiteArticle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->quantiteArticle->Name = L"quantiteArticle";
			this->quantiteArticle->Size = System::Drawing::Size(159, 22);
			this->quantiteArticle->TabIndex = 29;
			this->quantiteArticle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(170, 213);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Actualiser";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Commandes::button2_Click);
			// 
			// addArticle
			// 
			this->addArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->addArticle->FormattingEnabled = true;
			this->addArticle->Location = System::Drawing::Point(5, 213);
			this->addArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addArticle->Name = L"addArticle";
			this->addArticle->Size = System::Drawing::Size(159, 24);
			this->addArticle->TabIndex = 27;
			this->addArticle->SelectedIndexChanged += gcnew System::EventHandler(this, &Commandes::addArticle_SelectedIndexChanged);
			// 
			// dateLivraison
			// 
			this->dateLivraison->CustomFormat = L"yyyy-MM-dd";
			this->dateLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->dateLivraison->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateLivraison->Location = System::Drawing::Point(5, 167);
			this->dateLivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(260, 22);
			this->dateLivraison->TabIndex = 26;
			// 
			// dateEmission
			// 
			this->dateEmission->CustomFormat = L"yyyy-MM-dd";
			this->dateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->dateEmission->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEmission->Location = System::Drawing::Point(5, 110);
			this->dateEmission->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateEmission->Name = L"dateEmission";
			this->dateEmission->Size = System::Drawing::Size(260, 22);
			this->dateEmission->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(171, 246);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Commandes::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label4->Location = System::Drawing::Point(7, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Article à ajouter :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label3->Location = System::Drawing::Point(5, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Date de livraison prévue :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label2->Location = System::Drawing::Point(5, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Date d\'émission :";
			// 
			// refCommande
			// 
			this->refCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->refCommande->Location = System::Drawing::Point(7, 50);
			this->refCommande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->refCommande->Name = L"refCommande";
			this->refCommande->Size = System::Drawing::Size(258, 22);
			this->refCommande->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label1->Location = System::Drawing::Point(5, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Référence :";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->moyenPaiement);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->datePaiement);
			this->groupBox2->Controls->Add(this->montant1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(819, 15);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(193, 274);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Paiement";
			// 
			// moyenPaiement
			// 
			this->moyenPaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->moyenPaiement->FormattingEnabled = true;
			this->moyenPaiement->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CB", L"paypal" });
			this->moyenPaiement->Location = System::Drawing::Point(5, 111);
			this->moyenPaiement->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->moyenPaiement->Name = L"moyenPaiement";
			this->moyenPaiement->Size = System::Drawing::Size(176, 24);
			this->moyenPaiement->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label8->Location = System::Drawing::Point(5, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Nombre de Paiements :";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->numericUpDown1->Location = System::Drawing::Point(5, 231);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(176, 22);
			this->numericUpDown1->TabIndex = 36;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// datePaiement
			// 
			this->datePaiement->CustomFormat = L"yyyy-MM-dd";
			this->datePaiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->datePaiement->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePaiement->Location = System::Drawing::Point(5, 50);
			this->datePaiement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->datePaiement->Name = L"datePaiement";
			this->datePaiement->Size = System::Drawing::Size(176, 22);
			this->datePaiement->TabIndex = 27;
			// 
			// montant1
			// 
			this->montant1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->montant1->Location = System::Drawing::Point(5, 165);
			this->montant1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->montant1->Name = L"montant1";
			this->montant1->Size = System::Drawing::Size(176, 22);
			this->montant1->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label7->Location = System::Drawing::Point(5, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Montant :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label6->Location = System::Drawing::Point(5, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Moyen :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label5->Location = System::Drawing::Point(5, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Date de Paiement :";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->adresseFacturation);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->adresseLivraison);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->codeClient);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->nomClient1);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->numService);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->adrSociete);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->prixHT);
			this->groupBox3->Controls->Add(this->prixTVA);
			this->groupBox3->Controls->Add(this->prixTTC);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->nomSociete);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(1061, 15);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(349, 274);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Facture";
			// 
			// adresseFacturation
			// 
			this->adresseFacturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->adresseFacturation->Location = System::Drawing::Point(205, 244);
			this->adresseFacturation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adresseFacturation->Name = L"adresseFacturation";
			this->adresseFacturation->Size = System::Drawing::Size(135, 22);
			this->adresseFacturation->TabIndex = 61;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label21->Location = System::Drawing::Point(203, 224);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(79, 16);
			this->label21->TabIndex = 60;
			this->label21->Text = L"Facturation :";
			// 
			// adresseLivraison
			// 
			this->adresseLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->adresseLivraison->Location = System::Drawing::Point(7, 244);
			this->adresseLivraison->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adresseLivraison->Name = L"adresseLivraison";
			this->adresseLivraison->Size = System::Drawing::Size(167, 22);
			this->adresseLivraison->TabIndex = 59;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label20->Location = System::Drawing::Point(5, 224);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 16);
			this->label20->TabIndex = 58;
			this->label20->Text = L"Livraison :";
			// 
			// codeClient
			// 
			this->codeClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->codeClient->Location = System::Drawing::Point(205, 198);
			this->codeClient->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->codeClient->Name = L"codeClient";
			this->codeClient->Size = System::Drawing::Size(135, 22);
			this->codeClient->TabIndex = 57;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label19->Location = System::Drawing::Point(203, 178);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 16);
			this->label19->TabIndex = 56;
			this->label19->Text = L"Code client:";
			// 
			// nomClient1
			// 
			this->nomClient1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->nomClient1->Location = System::Drawing::Point(7, 198);
			this->nomClient1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nomClient1->Name = L"nomClient1";
			this->nomClient1->Size = System::Drawing::Size(167, 22);
			this->nomClient1->TabIndex = 55;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label18->Location = System::Drawing::Point(5, 178);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 16);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Nom du client :";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(269, 17);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 68);
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// numService
			// 
			this->numService->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->numService->Location = System::Drawing::Point(205, 153);
			this->numService->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numService->Name = L"numService";
			this->numService->Size = System::Drawing::Size(135, 22);
			this->numService->TabIndex = 53;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label17->Location = System::Drawing::Point(203, 132);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(127, 16);
			this->label17->TabIndex = 52;
			this->label17->Text = L"Numéro de service :";
			// 
			// adrSociete
			// 
			this->adrSociete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->adrSociete->Location = System::Drawing::Point(7, 153);
			this->adrSociete->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adrSociete->Name = L"adrSociete";
			this->adrSociete->Size = System::Drawing::Size(167, 22);
			this->adrSociete->TabIndex = 51;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label16->Location = System::Drawing::Point(5, 132);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 16);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Adresse de société :";
			// 
			// prixHT
			// 
			this->prixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->prixHT->Location = System::Drawing::Point(7, 106);
			this->prixHT->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prixHT->Name = L"prixHT";
			this->prixHT->Size = System::Drawing::Size(87, 22);
			this->prixHT->TabIndex = 49;
			// 
			// prixTVA
			// 
			this->prixTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->prixTVA->Location = System::Drawing::Point(133, 106);
			this->prixTVA->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prixTVA->Name = L"prixTVA";
			this->prixTVA->Size = System::Drawing::Size(87, 22);
			this->prixTVA->TabIndex = 48;
			// 
			// prixTTC
			// 
			this->prixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->prixTTC->Location = System::Drawing::Point(253, 106);
			this->prixTTC->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prixTTC->Name = L"prixTTC";
			this->prixTTC->Size = System::Drawing::Size(87, 22);
			this->prixTTC->TabIndex = 47;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label15->Location = System::Drawing::Point(253, 86);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 16);
			this->label15->TabIndex = 45;
			this->label15->Text = L"TTC :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label14->Location = System::Drawing::Point(133, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 16);
			this->label14->TabIndex = 44;
			this->label14->Text = L"TVA :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label13->Location = System::Drawing::Point(5, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 16);
			this->label13->TabIndex = 43;
			this->label13->Text = L"HT :";
			// 
			// nomSociete
			// 
			this->nomSociete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->nomSociete->Location = System::Drawing::Point(7, 50);
			this->nomSociete->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nomSociete->Name = L"nomSociete";
			this->nomSociete->Size = System::Drawing::Size(167, 22);
			this->nomSociete->TabIndex = 43;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label12->Location = System::Drawing::Point(5, 31);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 16);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Nom de ma société :";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->dateNaissance);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->prenomClient);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->nomClient);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(213, 15);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(213, 274);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Informations Client";
			// 
			// dateNaissance
			// 
			this->dateNaissance->CustomFormat = L"yyyy-MM-dd";
			this->dateNaissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->dateNaissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateNaissance->Location = System::Drawing::Point(5, 167);
			this->dateNaissance->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(200, 22);
			this->dateNaissance->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label11->Location = System::Drawing::Point(5, 148);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Date de Naissance :";
			// 
			// prenomClient
			// 
			this->prenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->prenomClient->Location = System::Drawing::Point(5, 110);
			this->prenomClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(201, 22);
			this->prenomClient->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(5, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Prénom du Client :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(5, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Nom du Client :";
			// 
			// nomClient
			// 
			this->nomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->nomClient->Location = System::Drawing::Point(5, 50);
			this->nomClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(201, 22);
			this->nomClient->TabIndex = 0;
			// 
			// Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1453, 533);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridViewCommande);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->affCommande);
			this->Controls->Add(this->modArticle);
			this->Controls->Add(this->delCommande);
			this->Controls->Add(this->creerCommande);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Commandes";
			this->Text = L"Commandes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantiteArticle))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void creerCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ajouterUneCommande(this->dateEmission->Text, this->dateLivraison->Text,this->nomClient->Text, this->prenomClient->Text, this->datePaiement->Text, this->moyenPaiement->Text, this->dateNaissance->Text, float::Parse(this->montant1->Text) , System::Convert::ToInt16(this->numericUpDown1->Text));
	this->nomSociete->AppendText(this->oCad->DataRead("SELECT Nom_Societe FROM Gestion_de_la_facturation WHERE ID_Emmision_Facture = '1'"));
	

	this->dateEmission->ResetText();
	this->dateLivraison->ResetText();
	this->nomClient->ResetText();
	this->prenomClient->ResetText();
	this->datePaiement->ResetText();
	this->moyenPaiement->ResetText();
	this->dateNaissance->ResetText();
	this->montant1->ResetText();
	this->numericUpDown1->ResetText();
}

private: System::Void affCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridViewCommande->Refresh();
	this->oDs = this->oSvc->selectionnerToutesLesCommandes("Gestion_Commande");
	this->dataGridViewCommande->DataSource = this->oDs;
	this->dataGridViewCommande->DataMember = "Gestion_Commande";
}

private: System::Void delCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->deleteUneCommande(this->refCommande->Text);
}

private: System::Void modArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->nomClient->AppendText(this->oCad->DataRead("SELECT Nom_Client FROM Gestion_des_commandes INNER JOIN Gestion_des_clients ON(Gestion_des_commandes.ID_Numero_Client=Gestion_des_clients.ID_Numero_Client) WHERE Reference_Commande = '" + this->refCommande + "'"));
	//this->prenomClient->AppendText(this->oCad->DataRead("SELECT Prenom_Client FROM Gestion_des_commandes INNER JOIN Gestion_des_clients ON(Gestion_des_commandes.ID_Numero_Client=Gestion_des_clients.ID_Numero_Client) WHERE Reference_Commande = '" + this->refCommande + "'"));
	//this->montant1->AppendText(this->oCad->DataRead("SELECT Montant_Total_HT FROM Gestion_des_commandes WHERE Reference_Commande = '" + this->refCommande + "'"));
	this->oSvc->updateUneCommande(this->refCommande->Text,this->dateEmission->Text, this->dateLivraison->Text, this->moyenPaiement->Text, this->datePaiement->Text);
}

private: System::Void addArticle_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->addArticle->SelectedValue->ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oSvc->selectionnerToutLesArticles("Gestion_des_articles");
	this->addArticle->DataSource = oDs ->Tables[0];
	this->addArticle->DisplayMember = "Nom_Produit";
	this->addArticle->ValueMember = "Designation_Article";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ajouterArticleCommande(this->addArticle->Text,System::Convert::ToInt16(this->quantiteArticle));
}
};
}