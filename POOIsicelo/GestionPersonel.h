#pragma once

namespace POOIsicelo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionPersonel
	/// </summary>
	public ref class GestionPersonel : public System::Windows::Forms::Form
	{
	public:
		GestionPersonel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionPersonel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ addClient;
	private: System::Windows::Forms::Button^ delClient;
	private: System::Windows::Forms::Button^ modClient;
	private: System::Windows::Forms::Button^ affClient;
	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::GroupBox^ infoClient;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ dateNaissanceClient;
	private: System::Windows::Forms::TextBox^ nomClient;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ prenomClient;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->addClient = (gcnew System::Windows::Forms::Button());
			this->delClient = (gcnew System::Windows::Forms::Button());
			this->modClient = (gcnew System::Windows::Forms::Button());
			this->affClient = (gcnew System::Windows::Forms::Button());
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->infoClient = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateNaissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->infoClient->SuspendLayout();
			this->adresseClient->SuspendLayout();
			this->infoSuperieur->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// addClient
			// 
			this->addClient->AccessibleDescription = L"hello";
			this->addClient->Location = System::Drawing::Point(16, 15);
			this->addClient->Margin = System::Windows::Forms::Padding(4);
			this->addClient->Name = L"addClient";
			this->addClient->Size = System::Drawing::Size(147, 28);
			this->addClient->TabIndex = 2;
			this->addClient->Text = L"Ajouter un Client";
			this->addClient->UseVisualStyleBackColor = true;
			// 
			// delClient
			// 
			this->delClient->Location = System::Drawing::Point(16, 66);
			this->delClient->Margin = System::Windows::Forms::Padding(4);
			this->delClient->Name = L"delClient";
			this->delClient->Size = System::Drawing::Size(147, 28);
			this->delClient->TabIndex = 3;
			this->delClient->Text = L"Supprimer un Client";
			this->delClient->UseVisualStyleBackColor = true;
			// 
			// modClient
			// 
			this->modClient->Location = System::Drawing::Point(16, 122);
			this->modClient->Margin = System::Windows::Forms::Padding(4);
			this->modClient->Name = L"modClient";
			this->modClient->Size = System::Drawing::Size(147, 28);
			this->modClient->TabIndex = 4;
			this->modClient->Text = L"Modifier un Client";
			this->modClient->UseVisualStyleBackColor = true;
			// 
			// affClient
			// 
			this->affClient->Location = System::Drawing::Point(16, 180);
			this->affClient->Margin = System::Windows::Forms::Padding(4);
			this->affClient->Name = L"affClient";
			this->affClient->Size = System::Drawing::Size(147, 28);
			this->affClient->TabIndex = 5;
			this->affClient->Text = L"Afficher un Client";
			this->affClient->UseVisualStyleBackColor = true;
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(16, 241);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(101, 48);
			this->buttonRetour->TabIndex = 6;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &GestionPersonel::buttonRetour_Click);
			// 
			// infoClient
			// 
			this->infoClient->Controls->Add(this->label7);
			this->infoClient->Controls->Add(this->label5);
			this->infoClient->Controls->Add(this->dateNaissanceClient);
			this->infoClient->Controls->Add(this->nomClient);
			this->infoClient->Controls->Add(this->label6);
			this->infoClient->Controls->Add(this->prenomClient);
			this->infoClient->Location = System::Drawing::Point(200, 15);
			this->infoClient->Name = L"infoClient";
			this->infoClient->Size = System::Drawing::Size(185, 274);
			this->infoClient->TabIndex = 7;
			this->infoClient->TabStop = false;
			this->infoClient->Text = L"Informations Client";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 139);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Date de naissance :";
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
			// dateNaissanceClient
			// 
			this->dateNaissanceClient->Location = System::Drawing::Point(7, 163);
			this->dateNaissanceClient->Margin = System::Windows::Forms::Padding(4);
			this->dateNaissanceClient->Name = L"dateNaissanceClient";
			this->dateNaissanceClient->Size = System::Drawing::Size(132, 22);
			this->dateNaissanceClient->TabIndex = 20;
			// 
			// nomClient
			// 
			this->nomClient->Location = System::Drawing::Point(7, 49);
			this->nomClient->Margin = System::Windows::Forms::Padding(4);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(132, 22);
			this->nomClient->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 85);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Prénom :";
			// 
			// prenomClient
			// 
			this->prenomClient->Location = System::Drawing::Point(7, 105);
			this->prenomClient->Margin = System::Windows::Forms::Padding(4);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(132, 22);
			this->prenomClient->TabIndex = 18;
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
			this->adresseClient->Location = System::Drawing::Point(480, 15);
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
			this->label9->Text = L"Numéro :";
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
			this->infoSuperieur->Controls->Add(this->textBox1);
			this->infoSuperieur->Controls->Add(this->textBox2);
			this->infoSuperieur->Controls->Add(this->label2);
			this->infoSuperieur->Location = System::Drawing::Point(761, 15);
			this->infoSuperieur->Name = L"infoSuperieur";
			this->infoSuperieur->Size = System::Drawing::Size(185, 274);
			this->infoSuperieur->TabIndex = 9;
			this->infoSuperieur->TabStop = false;
			this->infoSuperieur->Text = L"Informations Supérieur";
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 49);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 105);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 85);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Prénom :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 305);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(963, 212);
			this->dataGridView1->TabIndex = 10;
			// 
			// GestionPersonel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(995, 533);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->infoSuperieur);
			this->Controls->Add(this->adresseClient);
			this->Controls->Add(this->infoClient);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->affClient);
			this->Controls->Add(this->modClient);
			this->Controls->Add(this->delClient);
			this->Controls->Add(this->addClient);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionPersonel";
			this->Text = L"GestionPersonel";
			this->Load += gcnew System::EventHandler(this, &GestionPersonel::GestionPersonel_Load);
			this->infoClient->ResumeLayout(false);
			this->infoClient->PerformLayout();
			this->adresseClient->ResumeLayout(false);
			this->adresseClient->PerformLayout();
			this->infoSuperieur->ResumeLayout(false);
			this->infoSuperieur->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionPersonel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
