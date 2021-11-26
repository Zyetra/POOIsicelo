#pragma once

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ nomClient;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ dateNaissanceClient;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ datePremierAchat;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ numAdresse;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ rueAdresse;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ villeAdresse;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ codePostalDomicile;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ numClient;





	private: System::Windows::Forms::TextBox^ codePostalFacturation;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ villeFacturation;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ rueFacturation;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ numFacturation;
	private: System::Windows::Forms::Label^ label19;



	private: System::Windows::Forms::TextBox^ codePostalLivraison;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::ComboBox^ villeLivraison;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ rueLivraison;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ numLivraison;
	private: System::Windows::Forms::Label^ label24;

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
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->addClient = (gcnew System::Windows::Forms::Button());
			this->delClient = (gcnew System::Windows::Forms::Button());
			this->modClient = (gcnew System::Windows::Forms::Button());
			this->affClient = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateNaissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->datePremierAchat = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numAdresse = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->rueAdresse = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->villeAdresse = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->codePostalDomicile = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numClient = (gcnew System::Windows::Forms::TextBox());
			this->codePostalFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->villeFacturation = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->rueFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->codePostalLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->villeLivraison = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->rueLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->numLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(11, 196);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(76, 39);
			this->buttonRetour->TabIndex = 0;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &GestionClient::buttonRetour_Click);
			// 
			// addClient
			// 
			this->addClient->AccessibleDescription = L"hello";
			this->addClient->Location = System::Drawing::Point(11, 12);
			this->addClient->Name = L"addClient";
			this->addClient->Size = System::Drawing::Size(110, 23);
			this->addClient->TabIndex = 1;
			this->addClient->Text = L"Ajouter un Client";
			this->addClient->UseVisualStyleBackColor = true;
			// 
			// delClient
			// 
			this->delClient->Location = System::Drawing::Point(12, 54);
			this->delClient->Name = L"delClient";
			this->delClient->Size = System::Drawing::Size(110, 23);
			this->delClient->TabIndex = 2;
			this->delClient->Text = L"Supprimer un Client";
			this->delClient->UseVisualStyleBackColor = true;
			// 
			// modClient
			// 
			this->modClient->Location = System::Drawing::Point(12, 99);
			this->modClient->Name = L"modClient";
			this->modClient->Size = System::Drawing::Size(110, 23);
			this->modClient->TabIndex = 3;
			this->modClient->Text = L"Modifier un Client";
			this->modClient->UseVisualStyleBackColor = true;
			this->modClient->Click += gcnew System::EventHandler(this, &GestionClient::button3_Click);
			// 
			// affClient
			// 
			this->affClient->Location = System::Drawing::Point(12, 146);
			this->affClient->Name = L"affClient";
			this->affClient->Size = System::Drawing::Size(110, 23);
			this->affClient->TabIndex = 4;
			this->affClient->Text = L"Afficher un Client";
			this->affClient->UseVisualStyleBackColor = true;
			this->affClient->Click += gcnew System::EventHandler(this, &GestionClient::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(157, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Informations Client";
			this->label1->Click += gcnew System::EventHandler(this, &GestionClient::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(300, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Adresse Domicile";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(601, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Adresse Livraison";
			this->label3->Click += gcnew System::EventHandler(this, &GestionClient::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(452, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Adresse Facturation";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 248);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(722, 172);
			this->dataGridView1->TabIndex = 9;
			// 
			// nomClient
			// 
			this->nomClient->Location = System::Drawing::Point(160, 54);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(100, 20);
			this->nomClient->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(160, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Nom :";
			this->label5->Click += gcnew System::EventHandler(this, &GestionClient::label5_Click);
			// 
			// prenomClient
			// 
			this->prenomClient->Location = System::Drawing::Point(160, 99);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(100, 20);
			this->prenomClient->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(160, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Prénom :";
			// 
			// dateNaissanceClient
			// 
			this->dateNaissanceClient->Location = System::Drawing::Point(160, 146);
			this->dateNaissanceClient->Name = L"dateNaissanceClient";
			this->dateNaissanceClient->Size = System::Drawing::Size(100, 20);
			this->dateNaissanceClient->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(160, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Date de naissance :";
			// 
			// datePremierAchat
			// 
			this->datePremierAchat->Location = System::Drawing::Point(160, 193);
			this->datePremierAchat->Name = L"datePremierAchat";
			this->datePremierAchat->Size = System::Drawing::Size(100, 20);
			this->datePremierAchat->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(160, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"1er achat effectué le :";
			this->label8->Click += gcnew System::EventHandler(this, &GestionClient::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(309, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Numéro :";
			this->label9->Click += gcnew System::EventHandler(this, &GestionClient::label9_Click);
			// 
			// numAdresse
			// 
			this->numAdresse->Location = System::Drawing::Point(303, 54);
			this->numAdresse->Name = L"numAdresse";
			this->numAdresse->Size = System::Drawing::Size(100, 20);
			this->numAdresse->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(309, 83);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Rue :";
			// 
			// rueAdresse
			// 
			this->rueAdresse->Location = System::Drawing::Point(303, 99);
			this->rueAdresse->Name = L"rueAdresse";
			this->rueAdresse->Size = System::Drawing::Size(100, 20);
			this->rueAdresse->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(309, 127);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Ville :";
			// 
			// villeAdresse
			// 
			this->villeAdresse->FormattingEnabled = true;
			this->villeAdresse->Location = System::Drawing::Point(303, 146);
			this->villeAdresse->Name = L"villeAdresse";
			this->villeAdresse->Size = System::Drawing::Size(121, 21);
			this->villeAdresse->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(307, 177);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L" Code postal :";
			// 
			// codePostalDomicile
			// 
			this->codePostalDomicile->Location = System::Drawing::Point(303, 193);
			this->codePostalDomicile->Name = L"codePostalDomicile";
			this->codePostalDomicile->Size = System::Drawing::Size(100, 20);
			this->codePostalDomicile->TabIndex = 25;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(160, 221);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"N° Client :";
			// 
			// numClient
			// 
			this->numClient->Location = System::Drawing::Point(220, 219);
			this->numClient->Name = L"numClient";
			this->numClient->Size = System::Drawing::Size(40, 20);
			this->numClient->TabIndex = 27;
			// 
			// codePostalFacturation
			// 
			this->codePostalFacturation->Location = System::Drawing::Point(453, 193);
			this->codePostalFacturation->Name = L"codePostalFacturation";
			this->codePostalFacturation->Size = System::Drawing::Size(100, 20);
			this->codePostalFacturation->TabIndex = 37;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(457, 177);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 13);
			this->label16->TabIndex = 36;
			this->label16->Text = L" Code postal :";
			// 
			// villeFacturation
			// 
			this->villeFacturation->FormattingEnabled = true;
			this->villeFacturation->Location = System::Drawing::Point(453, 146);
			this->villeFacturation->Name = L"villeFacturation";
			this->villeFacturation->Size = System::Drawing::Size(121, 21);
			this->villeFacturation->TabIndex = 35;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(459, 127);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Ville :";
			// 
			// rueFacturation
			// 
			this->rueFacturation->Location = System::Drawing::Point(453, 99);
			this->rueFacturation->Name = L"rueFacturation";
			this->rueFacturation->Size = System::Drawing::Size(100, 20);
			this->rueFacturation->TabIndex = 33;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(459, 83);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(33, 13);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Rue :";
			// 
			// numFacturation
			// 
			this->numFacturation->Location = System::Drawing::Point(453, 54);
			this->numFacturation->Name = L"numFacturation";
			this->numFacturation->Size = System::Drawing::Size(100, 20);
			this->numFacturation->TabIndex = 31;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(459, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 13);
			this->label19->TabIndex = 30;
			this->label19->Text = L"Numéro :";
			// 
			// codePostalLivraison
			// 
			this->codePostalLivraison->Location = System::Drawing::Point(604, 193);
			this->codePostalLivraison->Name = L"codePostalLivraison";
			this->codePostalLivraison->Size = System::Drawing::Size(100, 20);
			this->codePostalLivraison->TabIndex = 47;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(608, 177);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(72, 13);
			this->label21->TabIndex = 46;
			this->label21->Text = L" Code postal :";
			// 
			// villeLivraison
			// 
			this->villeLivraison->FormattingEnabled = true;
			this->villeLivraison->Location = System::Drawing::Point(604, 146);
			this->villeLivraison->Name = L"villeLivraison";
			this->villeLivraison->Size = System::Drawing::Size(121, 21);
			this->villeLivraison->TabIndex = 45;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(610, 127);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(32, 13);
			this->label22->TabIndex = 44;
			this->label22->Text = L"Ville :";
			// 
			// rueLivraison
			// 
			this->rueLivraison->Location = System::Drawing::Point(604, 99);
			this->rueLivraison->Name = L"rueLivraison";
			this->rueLivraison->Size = System::Drawing::Size(100, 20);
			this->rueLivraison->TabIndex = 43;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(610, 83);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(33, 13);
			this->label23->TabIndex = 42;
			this->label23->Text = L"Rue :";
			// 
			// numLivraison
			// 
			this->numLivraison->Location = System::Drawing::Point(604, 54);
			this->numLivraison->Name = L"numLivraison";
			this->numLivraison->Size = System::Drawing::Size(100, 20);
			this->numLivraison->TabIndex = 41;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(610, 39);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(50, 13);
			this->label24->TabIndex = 40;
			this->label24->Text = L"Numéro :";
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 433);
			this->Controls->Add(this->codePostalLivraison);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->villeLivraison);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->rueLivraison);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->numLivraison);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->codePostalFacturation);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->villeFacturation);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->rueFacturation);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->numFacturation);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->numClient);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->codePostalDomicile);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->villeAdresse);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->rueAdresse);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->numAdresse);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->datePremierAchat);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateNaissanceClient);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->prenomClient);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->nomClient);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->affClient);
			this->Controls->Add(this->modClient);
			this->Controls->Add(this->delClient);
			this->Controls->Add(this->addClient);
			this->Controls->Add(this->buttonRetour);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GestionClient";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
