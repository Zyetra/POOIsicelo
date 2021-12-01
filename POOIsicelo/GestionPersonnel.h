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
	/// Description r�sum�e de GestionPersonnel
	/// </summary>
	public ref class GestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		GestionPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addPersonnel;
	private: System::Windows::Forms::Button^ delPersonnel;
	private: System::Windows::Forms::Button^ modPersonnel;
	private: System::Windows::Forms::Button^ affPersonnel;
	protected:

	private: CLservices^ oSvc;
	private: MAdresse^ Adresse1;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::GroupBox^ infoPersonnel;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ dateEmbauche;

	private: System::Windows::Forms::TextBox^ nomPersonnel;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ prenomPersonnel;

	private: System::Windows::Forms::GroupBox^ adresseClient;

	private: System::Windows::Forms::TextBox^ codePostalDomicile;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ numAdresse;
	private: System::Windows::Forms::ComboBox^ villeAdresse;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ rueAdresse;
	private: System::Windows::Forms::GroupBox^ infoSuperieur;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nomSuperieur;
	private: System::Windows::Forms::TextBox^ prenomSuperieur;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridViewPersonnel;

	private: System::Windows::Forms::Button^ affListePersonnel;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->addPersonnel = (gcnew System::Windows::Forms::Button());
			this->delPersonnel = (gcnew System::Windows::Forms::Button());
			this->modPersonnel = (gcnew System::Windows::Forms::Button());
			this->affPersonnel = (gcnew System::Windows::Forms::Button());
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->infoPersonnel = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->nomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->prenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->adresseClient = (gcnew System::Windows::Forms::GroupBox());
			this->codePostalDomicile = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numAdresse = (gcnew System::Windows::Forms::TextBox());
			this->villeAdresse = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->rueAdresse = (gcnew System::Windows::Forms::TextBox());
			this->infoSuperieur = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nomSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->prenomSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->affListePersonnel = (gcnew System::Windows::Forms::Button());
			this->infoPersonnel->SuspendLayout();
			this->adresseClient->SuspendLayout();
			this->infoSuperieur->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// addPersonnel
			// 
			this->addPersonnel->AccessibleDescription = L"hello";
			this->addPersonnel->Location = System::Drawing::Point(16, 15);
			this->addPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->addPersonnel->Name = L"addPersonnel";
			this->addPersonnel->Size = System::Drawing::Size(177, 28);
			this->addPersonnel->TabIndex = 2;
			this->addPersonnel->Text = L"Ajouter un Personnel";
			this->addPersonnel->UseVisualStyleBackColor = true;
			this->addPersonnel->Click += gcnew System::EventHandler(this, &GestionPersonnel::addClient_Click);
			// 
			// delPersonnel
			// 
			this->delPersonnel->Location = System::Drawing::Point(16, 57);
			this->delPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->delPersonnel->Name = L"delPersonnel";
			this->delPersonnel->Size = System::Drawing::Size(177, 28);
			this->delPersonnel->TabIndex = 3;
			this->delPersonnel->Text = L"Supprimer un Personnel";
			this->delPersonnel->UseVisualStyleBackColor = true;
			// 
			// modPersonnel
			// 
			this->modPersonnel->Location = System::Drawing::Point(16, 101);
			this->modPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->modPersonnel->Name = L"modPersonnel";
			this->modPersonnel->Size = System::Drawing::Size(177, 28);
			this->modPersonnel->TabIndex = 4;
			this->modPersonnel->Text = L"Modifier un Personnel";
			this->modPersonnel->UseVisualStyleBackColor = true;
			// 
			// affPersonnel
			// 
			this->affPersonnel->Location = System::Drawing::Point(16, 147);
			this->affPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->affPersonnel->Name = L"affPersonnel";
			this->affPersonnel->Size = System::Drawing::Size(177, 28);
			this->affPersonnel->TabIndex = 5;
			this->affPersonnel->Text = L"Afficher un Personnel";
			this->affPersonnel->UseVisualStyleBackColor = true;
			this->affPersonnel->Click += gcnew System::EventHandler(this, &GestionPersonnel::affPersonnel_Click);
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(16, 250);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(101, 48);
			this->buttonRetour->TabIndex = 6;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &GestionPersonnel::buttonRetour_Click);
			// 
			// infoPersonnel
			// 
			this->infoPersonnel->Controls->Add(this->label7);
			this->infoPersonnel->Controls->Add(this->label5);
			this->infoPersonnel->Controls->Add(this->dateEmbauche);
			this->infoPersonnel->Controls->Add(this->nomPersonnel);
			this->infoPersonnel->Controls->Add(this->label6);
			this->infoPersonnel->Controls->Add(this->prenomPersonnel);
			this->infoPersonnel->Location = System::Drawing::Point(246, 15);
			this->infoPersonnel->Name = L"infoPersonnel";
			this->infoPersonnel->Size = System::Drawing::Size(185, 274);
			this->infoPersonnel->TabIndex = 7;
			this->infoPersonnel->TabStop = false;
			this->infoPersonnel->Text = L"Informations Personnel";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 139);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Date d\'embauche :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 31);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Nom :";
			// 
			// dateEmbauche
			// 
			this->dateEmbauche->Location = System::Drawing::Point(7, 163);
			this->dateEmbauche->Margin = System::Windows::Forms::Padding(4);
			this->dateEmbauche->Name = L"dateEmbauche";
			this->dateEmbauche->Size = System::Drawing::Size(132, 22);
			this->dateEmbauche->TabIndex = 20;
			// 
			// nomPersonnel
			// 
			this->nomPersonnel->Location = System::Drawing::Point(7, 49);
			this->nomPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->nomPersonnel->Name = L"nomPersonnel";
			this->nomPersonnel->Size = System::Drawing::Size(132, 22);
			this->nomPersonnel->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 85);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Pr�nom :";
			// 
			// prenomPersonnel
			// 
			this->prenomPersonnel->Location = System::Drawing::Point(7, 105);
			this->prenomPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->prenomPersonnel->Name = L"prenomPersonnel";
			this->prenomPersonnel->Size = System::Drawing::Size(132, 22);
			this->prenomPersonnel->TabIndex = 18;
			// 
			// adresseClient
			// 
			this->adresseClient->Controls->Add(this->codePostalDomicile);
			this->adresseClient->Controls->Add(this->label9);
			this->adresseClient->Controls->Add(this->label12);
			this->adresseClient->Controls->Add(this->numAdresse);
			this->adresseClient->Controls->Add(this->villeAdresse);
			this->adresseClient->Controls->Add(this->label10);
			this->adresseClient->Controls->Add(this->label11);
			this->adresseClient->Controls->Add(this->rueAdresse);
			this->adresseClient->Location = System::Drawing::Point(505, 15);
			this->adresseClient->Name = L"adresseClient";
			this->adresseClient->Size = System::Drawing::Size(185, 274);
			this->adresseClient->TabIndex = 8;
			this->adresseClient->TabStop = false;
			this->adresseClient->Text = L"Adresse Domicile";
			// 
			// codePostalDomicile
			// 
			this->codePostalDomicile->Location = System::Drawing::Point(7, 221);
			this->codePostalDomicile->Margin = System::Windows::Forms::Padding(4);
			this->codePostalDomicile->Name = L"codePostalDomicile";
			this->codePostalDomicile->Size = System::Drawing::Size(132, 22);
			this->codePostalDomicile->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 31);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 16);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Num�ro :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 201);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 16);
			this->label12->TabIndex = 32;
			this->label12->Text = L" Code postal :";
			// 
			// numAdresse
			// 
			this->numAdresse->Location = System::Drawing::Point(7, 49);
			this->numAdresse->Margin = System::Windows::Forms::Padding(4);
			this->numAdresse->Name = L"numAdresse";
			this->numAdresse->Size = System::Drawing::Size(132, 22);
			this->numAdresse->TabIndex = 27;
			// 
			// villeAdresse
			// 
			this->villeAdresse->FormattingEnabled = true;
			this->villeAdresse->Location = System::Drawing::Point(7, 163);
			this->villeAdresse->Margin = System::Windows::Forms::Padding(4);
			this->villeAdresse->Name = L"villeAdresse";
			this->villeAdresse->Size = System::Drawing::Size(160, 24);
			this->villeAdresse->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
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
			this->label11->Location = System::Drawing::Point(7, 139);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Ville :";
			// 
			// rueAdresse
			// 
			this->rueAdresse->Location = System::Drawing::Point(7, 105);
			this->rueAdresse->Margin = System::Windows::Forms::Padding(4);
			this->rueAdresse->Name = L"rueAdresse";
			this->rueAdresse->Size = System::Drawing::Size(132, 22);
			this->rueAdresse->TabIndex = 29;
			// 
			// infoSuperieur
			// 
			this->infoSuperieur->Controls->Add(this->label1);
			this->infoSuperieur->Controls->Add(this->nomSuperieur);
			this->infoSuperieur->Controls->Add(this->prenomSuperieur);
			this->infoSuperieur->Controls->Add(this->label2);
			this->infoSuperieur->Location = System::Drawing::Point(761, 15);
			this->infoSuperieur->Name = L"infoSuperieur";
			this->infoSuperieur->Size = System::Drawing::Size(185, 274);
			this->infoSuperieur->TabIndex = 9;
			this->infoSuperieur->TabStop = false;
			this->infoSuperieur->Text = L"Informations Sup�rieur";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Nom :";
			// 
			// nomSuperieur
			// 
			this->nomSuperieur->Location = System::Drawing::Point(7, 49);
			this->nomSuperieur->Margin = System::Windows::Forms::Padding(4);
			this->nomSuperieur->Name = L"nomSuperieur";
			this->nomSuperieur->Size = System::Drawing::Size(132, 22);
			this->nomSuperieur->TabIndex = 22;
			// 
			// prenomSuperieur
			// 
			this->prenomSuperieur->Location = System::Drawing::Point(7, 105);
			this->prenomSuperieur->Margin = System::Windows::Forms::Padding(4);
			this->prenomSuperieur->Name = L"prenomSuperieur";
			this->prenomSuperieur->Size = System::Drawing::Size(132, 22);
			this->prenomSuperieur->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 85);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Pr�nom :";
			// 
			// dataGridViewPersonnel
			// 
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPersonnel->Location = System::Drawing::Point(16, 318);
			this->dataGridViewPersonnel->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->RowHeadersWidth = 51;
			this->dataGridViewPersonnel->Size = System::Drawing::Size(963, 212);
			this->dataGridViewPersonnel->TabIndex = 10;
			// 
			// affListePersonnel
			// 
			this->affListePersonnel->Location = System::Drawing::Point(16, 193);
			this->affListePersonnel->Margin = System::Windows::Forms::Padding(4);
			this->affListePersonnel->Name = L"affListePersonnel";
			this->affListePersonnel->Size = System::Drawing::Size(177, 45);
			this->affListePersonnel->TabIndex = 53;
			this->affListePersonnel->Text = L"Afficher la liste du Personnel";
			this->affListePersonnel->UseVisualStyleBackColor = true;
			this->affListePersonnel->Click += gcnew System::EventHandler(this, &GestionPersonnel::affListePersonnel_Click);
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(995, 533);
			this->Controls->Add(this->affListePersonnel);
			this->Controls->Add(this->dataGridViewPersonnel);
			this->Controls->Add(this->infoSuperieur);
			this->Controls->Add(this->adresseClient);
			this->Controls->Add(this->infoPersonnel);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->affPersonnel);
			this->Controls->Add(this->modPersonnel);
			this->Controls->Add(this->delPersonnel);
			this->Controls->Add(this->addPersonnel);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionPersonnel";
			this->Text = L"GestionPersonnel";
			this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			this->infoPersonnel->ResumeLayout(false);
			this->infoPersonnel->PerformLayout();
			this->adresseClient->ResumeLayout(false);
			this->adresseClient->PerformLayout();
			this->infoSuperieur->ResumeLayout(false);
			this->infoSuperieur->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void addClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ajouterUneAdresse(this->numAdresse->Text, this->rueAdresse->Text, this->villeAdresse->Text, this->codePostalDomicile->Text);
	this->oSvc->ajouterPersonnel(this->nomPersonnel->Text, this->prenomPersonnel->Text, this->dateEmbauche->Text, this->nomSuperieur->Text, this->prenomSuperieur->Text);
}
private: System::Void affListePersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridViewPersonnel->Refresh();
	this->oDs = this->oSvc->selectionnerTousLePersonnel("Gestion_du_Personnel");
	this->dataGridViewPersonnel->DataSource = this->oDs;
	this->dataGridViewPersonnel->DataMember = "Gestion_du_Personnel";
}

private: System::Void affPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	this->dataGridViewPersonnel->Refresh();
	this->oDs = this->oSvc->selectionnerPersonnel("Gestion_du_Personnel", this->nomPersonnel->Text, this->prenomPersonnel->Text, this->dateEmbauche->Text, this->nomSuperieur->Text, this->prenomSuperieur->Text);
	this->dataGridViewPersonnel->DataSource = this->oDs;
	this->dataGridViewPersonnel->DataMember = "Gestion_du_Personnel";
	*/
}
};
}
