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
	/// Description résumée de Form1
	/// </summary>
	public ref class GestionClient : public System::Windows::Forms::Form
	{
	public:
		GestionClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->oSvc = gcnew CLservices();
			this->Adresse1 = gcnew MAdresse();
			this->oMappClient = gcnew MClient();
			this->oCad = gcnew CLcad();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::Button^ addClient;
	private: System::Windows::Forms::Button^ delClient;
	private: System::Windows::Forms::Button^ modClient;
	private: System::Windows::Forms::Button^ affClient;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::DataGridView^ dataGridViewClient;



	private: CLservices^ oSvc;
	private: MAdresse^ Adresse1;
	private: MClient^ oMappClient;
	private: CLcad^ oCad;
	private: System::Data::DataSet^ oDs;



	private: System::Windows::Forms::Label^ label8;









	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ numClient;














	private: System::Windows::Forms::GroupBox^ infoClient;












	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;



	private: System::Windows::Forms::TextBox^ nomClient;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::GroupBox^ adresseDomicile;


	private: System::Windows::Forms::TextBox^ codePostalDomicile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ numAdresse;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ rueAdresse;












private: System::Windows::Forms::Button^ affListeClient;
private: System::Windows::Forms::DateTimePicker^ dateNaissanceClient;
private: System::Windows::Forms::DateTimePicker^ datePremierAchat;
private: System::Windows::Forms::TextBox^ villeAdresse;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionClient::typeid));
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->addClient = (gcnew System::Windows::Forms::Button());
			this->delClient = (gcnew System::Windows::Forms::Button());
			this->modClient = (gcnew System::Windows::Forms::Button());
			this->affClient = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numClient = (gcnew System::Windows::Forms::TextBox());
			this->infoClient = (gcnew System::Windows::Forms::GroupBox());
			this->datePremierAchat = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateNaissanceClient = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->adresseDomicile = (gcnew System::Windows::Forms::GroupBox());
			this->villeAdresse = (gcnew System::Windows::Forms::TextBox());
			this->codePostalDomicile = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numAdresse = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->rueAdresse = (gcnew System::Windows::Forms::TextBox());
			this->affListeClient = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->BeginInit();
			this->infoClient->SuspendLayout();
			this->adresseDomicile->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonRetour
			// 
			this->buttonRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRetour->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->buttonRetour->Location = System::Drawing::Point(15, 250);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(189, 48);
			this->buttonRetour->TabIndex = 0;
			this->buttonRetour->Text = L"Retour au menu";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &GestionClient::buttonRetour_Click);
			// 
			// addClient
			// 
			this->addClient->AccessibleDescription = L"hello";
			this->addClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addClient->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->addClient->Location = System::Drawing::Point(16, 15);
			this->addClient->Margin = System::Windows::Forms::Padding(4);
			this->addClient->Name = L"addClient";
			this->addClient->Size = System::Drawing::Size(188, 28);
			this->addClient->TabIndex = 1;
			this->addClient->Text = L"Ajouter un Client";
			this->addClient->UseVisualStyleBackColor = true;
			this->addClient->Click += gcnew System::EventHandler(this, &GestionClient::addClient_Click);
			// 
			// delClient
			// 
			this->delClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delClient->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->delClient->Location = System::Drawing::Point(16, 57);
			this->delClient->Margin = System::Windows::Forms::Padding(4);
			this->delClient->Name = L"delClient";
			this->delClient->Size = System::Drawing::Size(188, 28);
			this->delClient->TabIndex = 2;
			this->delClient->Text = L"Supprimer un Client";
			this->delClient->UseVisualStyleBackColor = true;
			this->delClient->Click += gcnew System::EventHandler(this, &GestionClient::delClient_Click);
			// 
			// modClient
			// 
			this->modClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modClient->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->modClient->Location = System::Drawing::Point(16, 101);
			this->modClient->Margin = System::Windows::Forms::Padding(4);
			this->modClient->Name = L"modClient";
			this->modClient->Size = System::Drawing::Size(188, 28);
			this->modClient->TabIndex = 3;
			this->modClient->Text = L"Modifier un Client";
			this->modClient->UseVisualStyleBackColor = true;
			this->modClient->Click += gcnew System::EventHandler(this, &GestionClient::button3_Click);
			// 
			// affClient
			// 
			this->affClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->affClient->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->affClient->Location = System::Drawing::Point(16, 147);
			this->affClient->Margin = System::Windows::Forms::Padding(4);
			this->affClient->Name = L"affClient";
			this->affClient->Size = System::Drawing::Size(188, 28);
			this->affClient->TabIndex = 4;
			this->affClient->Text = L"Afficher un Client";
			this->affClient->UseVisualStyleBackColor = true;
			this->affClient->Click += gcnew System::EventHandler(this, &GestionClient::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 6;
			// 
			// dataGridViewClient
			// 
			this->dataGridViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClient->Location = System::Drawing::Point(15, 318);
			this->dataGridViewClient->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewClient->Name = L"dataGridViewClient";
			this->dataGridViewClient->RowHeadersWidth = 51;
			this->dataGridViewClient->Size = System::Drawing::Size(1124, 202);
			this->dataGridViewClient->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label8->Location = System::Drawing::Point(7, 198);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"1er achat effectué le :";
			this->label8->Click += gcnew System::EventHandler(this, &GestionClient::label8_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label13->Location = System::Drawing::Point(7, 248);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(63, 16);
			this->label13->TabIndex = 26;
			this->label13->Text = L"N° Client :";
			// 
			// numClient
			// 
			this->numClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->numClient->Location = System::Drawing::Point(87, 246);
			this->numClient->Margin = System::Windows::Forms::Padding(4);
			this->numClient->Name = L"numClient";
			this->numClient->Size = System::Drawing::Size(86, 22);
			this->numClient->TabIndex = 27;
			// 
			// infoClient
			// 
			this->infoClient->BackColor = System::Drawing::Color::Transparent;
			this->infoClient->Controls->Add(this->datePremierAchat);
			this->infoClient->Controls->Add(this->dateNaissanceClient);
			this->infoClient->Controls->Add(this->label14);
			this->infoClient->Controls->Add(this->label15);
			this->infoClient->Controls->Add(this->nomClient);
			this->infoClient->Controls->Add(this->label20);
			this->infoClient->Controls->Add(this->prenomClient);
			this->infoClient->Controls->Add(this->label8);
			this->infoClient->Controls->Add(this->label13);
			this->infoClient->Controls->Add(this->numClient);
			this->infoClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoClient->Location = System::Drawing::Point(356, 15);
			this->infoClient->Name = L"infoClient";
			this->infoClient->Size = System::Drawing::Size(250, 274);
			this->infoClient->TabIndex = 48;
			this->infoClient->TabStop = false;
			this->infoClient->Text = L"Informations Client";
			// 
			// datePremierAchat
			// 
			this->datePremierAchat->CustomFormat = L"yyyy-MM-dd";
			this->datePremierAchat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->datePremierAchat->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePremierAchat->Location = System::Drawing::Point(7, 219);
			this->datePremierAchat->Name = L"datePremierAchat";
			this->datePremierAchat->Size = System::Drawing::Size(236, 22);
			this->datePremierAchat->TabIndex = 29;
			// 
			// dateNaissanceClient
			// 
			this->dateNaissanceClient->CustomFormat = L"yyyy-MM-dd";
			this->dateNaissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->dateNaissanceClient->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateNaissanceClient->Location = System::Drawing::Point(7, 161);
			this->dateNaissanceClient->Name = L"dateNaissanceClient";
			this->dateNaissanceClient->Size = System::Drawing::Size(236, 22);
			this->dateNaissanceClient->TabIndex = 28;
			this->dateNaissanceClient->ValueChanged += gcnew System::EventHandler(this, &GestionClient::dateTimePicker1_ValueChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label14->Location = System::Drawing::Point(7, 139);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(126, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Date de naissance :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label15->Location = System::Drawing::Point(7, 31);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 16);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Nom :";
			// 
			// nomClient
			// 
			this->nomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->nomClient->Location = System::Drawing::Point(7, 49);
			this->nomClient->Margin = System::Windows::Forms::Padding(4);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(236, 22);
			this->nomClient->TabIndex = 16;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label20->Location = System::Drawing::Point(7, 85);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Prénom :";
			// 
			// prenomClient
			// 
			this->prenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->prenomClient->Location = System::Drawing::Point(7, 105);
			this->prenomClient->Margin = System::Windows::Forms::Padding(4);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(236, 22);
			this->prenomClient->TabIndex = 18;
			// 
			// adresseDomicile
			// 
			this->adresseDomicile->BackColor = System::Drawing::Color::Transparent;
			this->adresseDomicile->Controls->Add(this->villeAdresse);
			this->adresseDomicile->Controls->Add(this->codePostalDomicile);
			this->adresseDomicile->Controls->Add(this->label9);
			this->adresseDomicile->Controls->Add(this->label12);
			this->adresseDomicile->Controls->Add(this->numAdresse);
			this->adresseDomicile->Controls->Add(this->label10);
			this->adresseDomicile->Controls->Add(this->label11);
			this->adresseDomicile->Controls->Add(this->rueAdresse);
			this->adresseDomicile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresseDomicile->Location = System::Drawing::Point(747, 15);
			this->adresseDomicile->Name = L"adresseDomicile";
			this->adresseDomicile->Size = System::Drawing::Size(250, 274);
			this->adresseDomicile->TabIndex = 49;
			this->adresseDomicile->TabStop = false;
			this->adresseDomicile->Text = L"Adresse Domicile";
			// 
			// villeAdresse
			// 
			this->villeAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->villeAdresse->Location = System::Drawing::Point(7, 159);
			this->villeAdresse->Margin = System::Windows::Forms::Padding(4);
			this->villeAdresse->Name = L"villeAdresse";
			this->villeAdresse->Size = System::Drawing::Size(236, 22);
			this->villeAdresse->TabIndex = 34;
			// 
			// codePostalDomicile
			// 
			this->codePostalDomicile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->codePostalDomicile->Location = System::Drawing::Point(7, 221);
			this->codePostalDomicile->Margin = System::Windows::Forms::Padding(4);
			this->codePostalDomicile->Name = L"codePostalDomicile";
			this->codePostalDomicile->Size = System::Drawing::Size(236, 22);
			this->codePostalDomicile->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(7, 31);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 16);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Numéro :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label12->Location = System::Drawing::Point(7, 201);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L" Code postal :";
			// 
			// numAdresse
			// 
			this->numAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->numAdresse->Location = System::Drawing::Point(7, 49);
			this->numAdresse->Margin = System::Windows::Forms::Padding(4);
			this->numAdresse->Name = L"numAdresse";
			this->numAdresse->Size = System::Drawing::Size(236, 22);
			this->numAdresse->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label10->Location = System::Drawing::Point(7, 85);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Rue :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label11->Location = System::Drawing::Point(7, 139);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Ville :";
			// 
			// rueAdresse
			// 
			this->rueAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->rueAdresse->Location = System::Drawing::Point(7, 105);
			this->rueAdresse->Margin = System::Windows::Forms::Padding(4);
			this->rueAdresse->Name = L"rueAdresse";
			this->rueAdresse->Size = System::Drawing::Size(236, 22);
			this->rueAdresse->TabIndex = 29;
			// 
			// affListeClient
			// 
			this->affListeClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->affListeClient->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->affListeClient->Location = System::Drawing::Point(16, 193);
			this->affListeClient->Margin = System::Windows::Forms::Padding(4);
			this->affListeClient->Name = L"affListeClient";
			this->affListeClient->Size = System::Drawing::Size(188, 45);
			this->affListeClient->TabIndex = 52;
			this->affListeClient->Text = L"Afficher la liste des Clients";
			this->affListeClient->UseVisualStyleBackColor = true;
			this->affListeClient->Click += gcnew System::EventHandler(this, &GestionClient::affListeClient_Click);
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1147, 530);
			this->Controls->Add(this->affListeClient);
			this->Controls->Add(this->adresseDomicile);
			this->Controls->Add(this->infoClient);
			this->Controls->Add(this->dataGridViewClient);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->affClient);
			this->Controls->Add(this->modClient);
			this->Controls->Add(this->delClient);
			this->Controls->Add(this->addClient);
			this->Controls->Add(this->buttonRetour);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"GestionClient";
			this->Text = L"Gestion Client";
			this->Load += gcnew System::EventHandler(this, &GestionClient::GestionClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClient))->EndInit();
			this->infoClient->ResumeLayout(false);
			this->infoClient->PerformLayout();
			this->adresseDomicile->ResumeLayout(false);
			this->adresseDomicile->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUneAdresse(this->numAdresse->Text, this->rueAdresse->Text, this->villeAdresse->Text, this->codePostalDomicile->Text);
		this->oSvc->modifierUneAdresse(this->numAdresse->Text, this->rueAdresse->Text, this->villeAdresse->Text, this->codePostalDomicile->Text, this->numClient->Text);
		this->prenomClient->ResetText();
		this->nomClient->ResetText();
		this->dateNaissanceClient->ResetText();
		this->datePremierAchat->ResetText();
		this->numAdresse->ResetText();
		this->rueAdresse->ResetText();
		this->villeAdresse->ResetText();
		this->codePostalDomicile->ResetText();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridViewClient->Refresh();
	this->oDs = this->oSvc->selectionnerUnClient("Gestion_des_Clients", this->nomClient->Text, this->prenomClient->Text, this->dateNaissanceClient->Text);
	this->dataGridViewClient->DataSource = this->oDs;
	this->dataGridViewClient->DataMember = "Gestion_des_Clients";
	this->numAdresse->AppendText(this->oCad->DataRead("SELECT numero FROM Gestion_des_Clients INNER JOIN adresse ON Gestion_des_Clients.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE Nom_Client = '" + this->nomClient->Text + "' AND Prenom_Client = '" + this->prenomClient->Text + "' AND Date_Naissance_Client = '" + this->dateNaissanceClient->Text + "'; "));
	this->rueAdresse->AppendText(this->oCad->DataRead("SELECT rue FROM Gestion_des_Clients INNER JOIN adresse ON Gestion_des_Clients.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE Nom_Client = '" + this->nomClient->Text + "' AND Prenom_Client = '" + this->prenomClient->Text + "' AND Date_Naissance_Client = '" + this->dateNaissanceClient->Text + "'; "));
	this->villeAdresse->AppendText(this->oCad->DataRead("SELECT nom_ville FROM Gestion_des_Clients INNER JOIN adresse ON Gestion_des_Clients.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE Nom_Client = '" + this->nomClient->Text + "' AND Prenom_Client = '" + this->prenomClient->Text + "' AND Date_Naissance_Client = '" + this->dateNaissanceClient->Text + "'; "));
	this->codePostalDomicile->AppendText(this->oCad->DataRead("SELECT code_postal FROM Gestion_des_Clients INNER JOIN adresse ON Gestion_des_Clients.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE Nom_Client = '" + this->nomClient->Text + "' AND Prenom_Client = '" + this->prenomClient->Text + "' AND Date_Naissance_Client = '" + this->dateNaissanceClient->Text + "'; "));




}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addClient_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->ajouterUneAdresse(this->numAdresse->Text, this->rueAdresse->Text, this->villeAdresse->Text, this->codePostalDomicile->Text);
	this->oSvc->ajouterUnClient(this->nomClient->Text, this->prenomClient->Text, this->dateNaissanceClient->Text, this->datePremierAchat->Text);

	this->prenomClient->ResetText();
	this->nomClient->ResetText();
	this->dateNaissanceClient->ResetText();
	this->datePremierAchat->ResetText();
	this->numAdresse->ResetText();
	this->rueAdresse->ResetText();
	this->villeAdresse->ResetText();
	this->codePostalDomicile->ResetText();

}
private: System::Void villeAdresse_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void affListeClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridViewClient->Refresh();
	this->oDs = this->oSvc->selectionnerTousLesClients("Gestion_des_Clients");
	this->dataGridViewClient->DataSource = this->oDs;
	this->dataGridViewClient->DataMember = "Gestion_des_Clients";
}
private: System::Void delClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->supprimerUnClient(this->nomClient->Text, this->prenomClient->Text, this->dateNaissanceClient->Text, this->numClient->Text);
	this->prenomClient->ResetText();
	this->nomClient->ResetText();
	this->dateNaissanceClient->ResetText();
	this->datePremierAchat->ResetText();
	this->numAdresse->ResetText();
	this->rueAdresse->ResetText();
	this->villeAdresse->ResetText();
	this->codePostalDomicile->ResetText();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void GestionClient_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
