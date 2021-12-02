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
			this->oSvc2 = gcnew CLservices();
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
	private: CLservices^ oSvc2;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->prixHT = (gcnew System::Windows::Forms::TextBox());
			this->prixTVA = (gcnew System::Windows::Forms::TextBox());
			this->prixTTC = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->nomClient1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->nomSociete = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->numService = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->adrSociete = (gcnew System::Windows::Forms::TextBox());
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
			this->creerCommande->Location = System::Drawing::Point(12, 12);
			this->creerCommande->Name = L"creerCommande";
			this->creerCommande->Size = System::Drawing::Size(123, 34);
			this->creerCommande->TabIndex = 3;
			this->creerCommande->Text = L"Créer une Commande";
			this->creerCommande->UseVisualStyleBackColor = true;
			this->creerCommande->Click += gcnew System::EventHandler(this, &Commandes::creerCommande_Click);
			// 
			// delCommande
			// 
			this->delCommande->Location = System::Drawing::Point(12, 53);
			this->delCommande->Name = L"delCommande";
			this->delCommande->Size = System::Drawing::Size(123, 39);
			this->delCommande->TabIndex = 4;
			this->delCommande->Text = L"Supprimer une Commande";
			this->delCommande->UseVisualStyleBackColor = true;
			this->delCommande->Click += gcnew System::EventHandler(this, &Commandes::delCommande_Click);
			// 
			// modArticle
			// 
			this->modArticle->Location = System::Drawing::Point(12, 98);
			this->modArticle->Name = L"modArticle";
			this->modArticle->Size = System::Drawing::Size(123, 37);
			this->modArticle->TabIndex = 5;
			this->modArticle->Text = L"Modifier une Commande";
			this->modArticle->UseVisualStyleBackColor = true;
			this->modArticle->Click += gcnew System::EventHandler(this, &Commandes::modArticle_Click);
			// 
			// affCommande
			// 
			this->affCommande->Location = System::Drawing::Point(12, 141);
			this->affCommande->Name = L"affCommande";
			this->affCommande->Size = System::Drawing::Size(123, 36);
			this->affCommande->TabIndex = 6;
			this->affCommande->Text = L"Afficher une Commande";
			this->affCommande->UseVisualStyleBackColor = true;
			this->affCommande->Click += gcnew System::EventHandler(this, &Commandes::affCommande_Click);
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(11, 196);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(76, 39);
			this->buttonRetour->TabIndex = 7;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &Commandes::buttonRetour_Click);
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(12, 248);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->RowHeadersWidth = 51;
			this->dataGridViewCommande->Size = System::Drawing::Size(1046, 172);
			this->dataGridViewCommande->TabIndex = 11;
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(334, 12);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(206, 223);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Commande";
			// 
			// quantiteArticle
			// 
			this->quantiteArticle->Location = System::Drawing::Point(4, 198);
			this->quantiteArticle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->quantiteArticle->Name = L"quantiteArticle";
			this->quantiteArticle->Size = System::Drawing::Size(127, 20);
			this->quantiteArticle->TabIndex = 29;
			this->quantiteArticle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(136, 173);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 19);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Actualiser";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Commandes::button2_Click);
			// 
			// addArticle
			// 
			this->addArticle->FormattingEnabled = true;
			this->addArticle->Location = System::Drawing::Point(4, 173);
			this->addArticle->Margin = System::Windows::Forms::Padding(2);
			this->addArticle->Name = L"addArticle";
			this->addArticle->Size = System::Drawing::Size(128, 21);
			this->addArticle->TabIndex = 27;
			this->addArticle->SelectedIndexChanged += gcnew System::EventHandler(this, &Commandes::addArticle_SelectedIndexChanged);
			// 
			// dateLivraison
			// 
			this->dateLivraison->CustomFormat = L"yyyy-MM-dd";
			this->dateLivraison->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateLivraison->Location = System::Drawing::Point(4, 136);
			this->dateLivraison->Margin = System::Windows::Forms::Padding(2);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(192, 20);
			this->dateLivraison->TabIndex = 26;
			// 
			// dateEmission
			// 
			this->dateEmission->CustomFormat = L"yyyy-MM-dd";
			this->dateEmission->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateEmission->Location = System::Drawing::Point(4, 89);
			this->dateEmission->Margin = System::Windows::Forms::Padding(2);
			this->dateEmission->Name = L"dateEmission";
			this->dateEmission->Size = System::Drawing::Size(192, 20);
			this->dateEmission->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(136, 200);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 19);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Commandes::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 158);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Article à ajouter :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 120);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Date de livraison prévue :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 73);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Date d\'émission :";
			// 
			// refCommande
			// 
			this->refCommande->Location = System::Drawing::Point(5, 41);
			this->refCommande->Name = L"refCommande";
			this->refCommande->Size = System::Drawing::Size(191, 20);
			this->refCommande->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 25);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Référence :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->moyenPaiement);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->datePaiement);
			this->groupBox2->Controls->Add(this->montant1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(561, 12);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(204, 223);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Paiement";
			// 
			// moyenPaiement
			// 
			this->moyenPaiement->FormattingEnabled = true;
			this->moyenPaiement->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CB", L"paypal" });
			this->moyenPaiement->Location = System::Drawing::Point(4, 90);
			this->moyenPaiement->Name = L"moyenPaiement";
			this->moyenPaiement->Size = System::Drawing::Size(117, 21);
			this->moyenPaiement->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 173);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Nombre de Paiements :";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(4, 188);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(111, 20);
			this->numericUpDown1->TabIndex = 36;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// datePaiement
			// 
			this->datePaiement->CustomFormat = L"yyyy-MM-dd";
			this->datePaiement->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePaiement->Location = System::Drawing::Point(4, 41);
			this->datePaiement->Margin = System::Windows::Forms::Padding(2);
			this->datePaiement->Name = L"datePaiement";
			this->datePaiement->Size = System::Drawing::Size(192, 20);
			this->datePaiement->TabIndex = 27;
			// 
			// montant1
			// 
			this->montant1->Location = System::Drawing::Point(4, 134);
			this->montant1->Name = L"montant1";
			this->montant1->Size = System::Drawing::Size(112, 20);
			this->montant1->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 120);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Montant :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 73);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Moyen :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 25);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Date de Paiement :";
			// 
			// groupBox3
			// 
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
			this->groupBox3->Location = System::Drawing::Point(796, 12);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(262, 223);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Facture";
			// 
			// adresseFacturation
			// 
			this->adresseFacturation->Location = System::Drawing::Point(154, 198);
			this->adresseFacturation->Name = L"adresseFacturation";
			this->adresseFacturation->Size = System::Drawing::Size(102, 20);
			this->adresseFacturation->TabIndex = 61;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(152, 182);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(66, 13);
			this->label21->TabIndex = 60;
			this->label21->Text = L"Facturation :";
			// 
			// adresseLivraison
			// 
			this->adresseLivraison->Location = System::Drawing::Point(5, 198);
			this->adresseLivraison->Name = L"adresseLivraison";
			this->adresseLivraison->Size = System::Drawing::Size(126, 20);
			this->adresseLivraison->TabIndex = 59;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(4, 182);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(55, 13);
			this->label20->TabIndex = 58;
			this->label20->Text = L"Livraison :";
			// 
			// codeClient
			// 
			this->codeClient->Location = System::Drawing::Point(154, 161);
			this->codeClient->Name = L"codeClient";
			this->codeClient->Size = System::Drawing::Size(102, 20);
			this->codeClient->TabIndex = 57;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(152, 145);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 13);
			this->label19->TabIndex = 56;
			this->label19->Text = L"Code client:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(202, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 55);
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// prixHT
			// 
			this->prixHT->Location = System::Drawing::Point(5, 86);
			this->prixHT->Name = L"prixHT";
			this->prixHT->Size = System::Drawing::Size(66, 20);
			this->prixHT->TabIndex = 49;
			// 
			// prixTVA
			// 
			this->prixTVA->Location = System::Drawing::Point(100, 86);
			this->prixTVA->Name = L"prixTVA";
			this->prixTVA->Size = System::Drawing::Size(66, 20);
			this->prixTVA->TabIndex = 48;
			// 
			// prixTTC
			// 
			this->prixTTC->Location = System::Drawing::Point(190, 86);
			this->prixTTC->Name = L"prixTTC";
			this->prixTTC->Size = System::Drawing::Size(66, 20);
			this->prixTTC->TabIndex = 47;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(190, 70);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 45;
			this->label15->Text = L"TTC :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(100, 72);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 13);
			this->label14->TabIndex = 44;
			this->label14->Text = L"TVA :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 70);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 13);
			this->label13->TabIndex = 43;
			this->label13->Text = L"HT :";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dateNaissance);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->prenomClient);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->nomClient);
			this->groupBox4->Location = System::Drawing::Point(160, 12);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(160, 223);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Informations Client";
			// 
			// dateNaissance
			// 
			this->dateNaissance->CustomFormat = L"yyyy-MM-dd";
			this->dateNaissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateNaissance->Location = System::Drawing::Point(4, 136);
			this->dateNaissance->Margin = System::Windows::Forms::Padding(2);
			this->dateNaissance->Name = L"dateNaissance";
			this->dateNaissance->Size = System::Drawing::Size(151, 20);
			this->dateNaissance->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 120);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Date de Naissance :";
			// 
			// prenomClient
			// 
			this->prenomClient->Location = System::Drawing::Point(4, 89);
			this->prenomClient->Margin = System::Windows::Forms::Padding(2);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(152, 20);
			this->prenomClient->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 73);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Prénom du Client :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 25);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 13);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Nom du Client :";
			// 
			// nomClient
			// 
			this->nomClient->Location = System::Drawing::Point(4, 41);
			this->nomClient->Margin = System::Windows::Forms::Padding(2);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(152, 20);
			this->nomClient->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 145);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(78, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Nom du client :";
			// 
			// nomClient1
			// 
			this->nomClient1->Location = System::Drawing::Point(5, 161);
			this->nomClient1->Name = L"nomClient1";
			this->nomClient1->Size = System::Drawing::Size(126, 20);
			this->nomClient1->TabIndex = 55;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 25);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 13);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Nom de ma société :";
			// 
			// nomSociete
			// 
			this->nomSociete->Location = System::Drawing::Point(5, 41);
			this->nomSociete->Name = L"nomSociete";
			this->nomSociete->Size = System::Drawing::Size(126, 20);
			this->nomSociete->TabIndex = 43;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(152, 107);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 13);
			this->label17->TabIndex = 52;
			this->label17->Text = L"Numéro de service :";
			// 
			// numService
			// 
			this->numService->Location = System::Drawing::Point(154, 124);
			this->numService->Name = L"numService";
			this->numService->Size = System::Drawing::Size(102, 20);
			this->numService->TabIndex = 53;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 107);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 13);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Adresse de société :";
			// 
			// adrSociete
			// 
			this->adrSociete->Location = System::Drawing::Point(5, 124);
			this->adrSociete->Name = L"adrSociete";
			this->adrSociete->Size = System::Drawing::Size(126, 20);
			this->adrSociete->TabIndex = 51;
			// 
			// Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 433);
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
			this->Margin = System::Windows::Forms::Padding(2);
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