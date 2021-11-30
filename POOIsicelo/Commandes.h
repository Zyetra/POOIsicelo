#pragma once

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
		Commandes(void)
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
		~Commandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ creerCommande;
	private: System::Windows::Forms::Button^ delCommande;
	private: System::Windows::Forms::Button^ modArticle;
	private: System::Windows::Forms::Button^ affCommande;
	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommande;
	private: System::Windows::Forms::DataGridView^ dataGridViewArticles;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ articleAdd;
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
	private: System::Windows::Forms::TextBox^ numService;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ adrSociete;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ nomSociete;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ livraison;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ code;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ nomClient1;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ facturation;
	private: System::Windows::Forms::DateTimePicker^ dateEmission;
	private: System::Windows::Forms::DateTimePicker^ dateLivraison;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DateTimePicker^ datePaiement;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ prenomClient;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ nomClient;






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
			this->dataGridViewArticles = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateEmission = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->articleAdd = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->refCommande = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->montant1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->facturation = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->livraison = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->code = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->nomClient1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numService = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->adrSociete = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->nomSociete = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dateLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePaiement = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->nomClient = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->prenomClient = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// creerCommande
			// 
			this->creerCommande->AccessibleDescription = L"hello";
			this->creerCommande->Location = System::Drawing::Point(16, 15);
			this->creerCommande->Margin = System::Windows::Forms::Padding(4);
			this->creerCommande->Name = L"creerCommande";
			this->creerCommande->Size = System::Drawing::Size(164, 28);
			this->creerCommande->TabIndex = 3;
			this->creerCommande->Text = L"Créer une Commande";
			this->creerCommande->UseVisualStyleBackColor = true;
			// 
			// delCommande
			// 
			this->delCommande->Location = System::Drawing::Point(16, 66);
			this->delCommande->Margin = System::Windows::Forms::Padding(4);
			this->delCommande->Name = L"delCommande";
			this->delCommande->Size = System::Drawing::Size(164, 28);
			this->delCommande->TabIndex = 4;
			this->delCommande->Text = L"Supprimer une Commande";
			this->delCommande->UseVisualStyleBackColor = true;
			// 
			// modArticle
			// 
			this->modArticle->Location = System::Drawing::Point(16, 122);
			this->modArticle->Margin = System::Windows::Forms::Padding(4);
			this->modArticle->Name = L"modArticle";
			this->modArticle->Size = System::Drawing::Size(164, 28);
			this->modArticle->TabIndex = 5;
			this->modArticle->Text = L"Modifier une Commande";
			this->modArticle->UseVisualStyleBackColor = true;
			// 
			// affCommande
			// 
			this->affCommande->Location = System::Drawing::Point(16, 180);
			this->affCommande->Margin = System::Windows::Forms::Padding(4);
			this->affCommande->Name = L"affCommande";
			this->affCommande->Size = System::Drawing::Size(164, 28);
			this->affCommande->TabIndex = 6;
			this->affCommande->Text = L"Afficher une Commande";
			this->affCommande->UseVisualStyleBackColor = true;
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(15, 241);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(101, 48);
			this->buttonRetour->TabIndex = 7;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &Commandes::buttonRetour_Click);
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(16, 305);
			this->dataGridViewCommande->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->RowHeadersWidth = 51;
			this->dataGridViewCommande->Size = System::Drawing::Size(705, 212);
			this->dataGridViewCommande->TabIndex = 11;
			// 
			// dataGridViewArticles
			// 
			this->dataGridViewArticles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArticles->Location = System::Drawing::Point(729, 305);
			this->dataGridViewArticles->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewArticles->Name = L"dataGridViewArticles";
			this->dataGridViewArticles->RowHeadersWidth = 51;
			this->dataGridViewArticles->Size = System::Drawing::Size(705, 212);
			this->dataGridViewArticles->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateLivraison);
			this->groupBox1->Controls->Add(this->dateEmission);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->articleAdd);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->refCommande);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(446, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(275, 274);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Commande";
			// 
			// dateEmission
			// 
			this->dateEmission->Location = System::Drawing::Point(6, 109);
			this->dateEmission->Name = L"dateEmission";
			this->dateEmission->Size = System::Drawing::Size(254, 22);
			this->dateEmission->TabIndex = 25;
			this->dateEmission->ValueChanged += gcnew System::EventHandler(this, &Commandes::dateTimePicker1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// articleAdd
			// 
			this->articleAdd->Location = System::Drawing::Point(7, 231);
			this->articleAdd->Margin = System::Windows::Forms::Padding(4);
			this->articleAdd->Name = L"articleAdd";
			this->articleAdd->Size = System::Drawing::Size(158, 22);
			this->articleAdd->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Article à ajouter :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Date de livraison prévue :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Date d\'émission :";
			// 
			// refCommande
			// 
			this->refCommande->Location = System::Drawing::Point(7, 51);
			this->refCommande->Margin = System::Windows::Forms::Padding(4);
			this->refCommande->Name = L"refCommande";
			this->refCommande->Size = System::Drawing::Size(253, 22);
			this->refCommande->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Référence :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->datePaiement);
			this->groupBox2->Controls->Add(this->montant1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(748, 15);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(272, 274);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Paiement";
			// 
			// montant1
			// 
			this->montant1->Location = System::Drawing::Point(6, 165);
			this->montant1->Margin = System::Windows::Forms::Padding(4);
			this->montant1->Name = L"montant1";
			this->montant1->Size = System::Drawing::Size(148, 22);
			this->montant1->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Montant :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Moyen :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Date de Paiement :";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->facturation);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->livraison);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->code);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->nomClient1);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->numService);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->adrSociete);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->nomSociete);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Location = System::Drawing::Point(1062, 15);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(350, 274);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Facture";
			// 
			// facturation
			// 
			this->facturation->Location = System::Drawing::Point(205, 244);
			this->facturation->Margin = System::Windows::Forms::Padding(4);
			this->facturation->Name = L"facturation";
			this->facturation->Size = System::Drawing::Size(135, 22);
			this->facturation->TabIndex = 61;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(202, 224);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(79, 16);
			this->label21->TabIndex = 60;
			this->label21->Text = L"Facturation :";
			// 
			// livraison
			// 
			this->livraison->Location = System::Drawing::Point(7, 244);
			this->livraison->Margin = System::Windows::Forms::Padding(4);
			this->livraison->Name = L"livraison";
			this->livraison->Size = System::Drawing::Size(166, 22);
			this->livraison->TabIndex = 59;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 224);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 16);
			this->label20->TabIndex = 58;
			this->label20->Text = L"Livraison :";
			// 
			// code
			// 
			this->code->Location = System::Drawing::Point(205, 198);
			this->code->Margin = System::Windows::Forms::Padding(4);
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(135, 22);
			this->code->TabIndex = 57;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(202, 178);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(46, 16);
			this->label19->TabIndex = 56;
			this->label19->Text = L"Code :";
			// 
			// nomClient1
			// 
			this->nomClient1->Location = System::Drawing::Point(7, 198);
			this->nomClient1->Margin = System::Windows::Forms::Padding(4);
			this->nomClient1->Name = L"nomClient1";
			this->nomClient1->Size = System::Drawing::Size(166, 22);
			this->nomClient1->TabIndex = 55;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 178);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 16);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Nom du client :";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(269, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 68);
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// numService
			// 
			this->numService->Location = System::Drawing::Point(205, 152);
			this->numService->Margin = System::Windows::Forms::Padding(4);
			this->numService->Name = L"numService";
			this->numService->Size = System::Drawing::Size(135, 22);
			this->numService->TabIndex = 53;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(202, 132);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(127, 16);
			this->label17->TabIndex = 52;
			this->label17->Text = L"Numéro de service :";
			// 
			// adrSociete
			// 
			this->adrSociete->Location = System::Drawing::Point(7, 152);
			this->adrSociete->Margin = System::Windows::Forms::Padding(4);
			this->adrSociete->Name = L"adrSociete";
			this->adrSociete->Size = System::Drawing::Size(166, 22);
			this->adrSociete->TabIndex = 51;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 132);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 16);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Adresse de société :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 106);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 22);
			this->textBox2->TabIndex = 49;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 106);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 22);
			this->textBox1->TabIndex = 48;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(254, 106);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 22);
			this->textBox3->TabIndex = 47;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(254, 86);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 16);
			this->label15->TabIndex = 45;
			this->label15->Text = L"TTC :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(133, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 16);
			this->label14->TabIndex = 44;
			this->label14->Text = L"TVA :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 86);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 16);
			this->label13->TabIndex = 43;
			this->label13->Text = L"HT :";
			// 
			// nomSociete
			// 
			this->nomSociete->Location = System::Drawing::Point(7, 51);
			this->nomSociete->Margin = System::Windows::Forms::Padding(4);
			this->nomSociete->Name = L"nomSociete";
			this->nomSociete->Size = System::Drawing::Size(166, 22);
			this->nomSociete->TabIndex = 43;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 31);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 16);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Nom de ma société :";
			// 
			// dateLivraison
			// 
			this->dateLivraison->Location = System::Drawing::Point(6, 167);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(254, 22);
			this->dateLivraison->TabIndex = 26;
			// 
			// datePaiement
			// 
			this->datePaiement->Location = System::Drawing::Point(6, 50);
			this->datePaiement->Name = L"datePaiement";
			this->datePaiement->Size = System::Drawing::Size(254, 22);
			this->datePaiement->TabIndex = 27;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(6, 232);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(148, 22);
			this->numericUpDown1->TabIndex = 36;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Nombre de Paiements :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(7, 110);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 22);
			this->textBox4->TabIndex = 38;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->prenomClient);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->nomClient);
			this->groupBox4->Location = System::Drawing::Point(214, 15);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(213, 274);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Informations Client";
			// 
			// nomClient
			// 
			this->nomClient->Location = System::Drawing::Point(6, 50);
			this->nomClient->Name = L"nomClient";
			this->nomClient->Size = System::Drawing::Size(201, 22);
			this->nomClient->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Nom du Client :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Prénom du Client :";
			// 
			// prenomClient
			// 
			this->prenomClient->Location = System::Drawing::Point(6, 109);
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->Size = System::Drawing::Size(201, 22);
			this->prenomClient->TabIndex = 29;
			// 
			// Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1454, 533);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridViewArticles);
			this->Controls->Add(this->dataGridViewCommande);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->affCommande);
			this->Controls->Add(this->modArticle);
			this->Controls->Add(this->delCommande);
			this->Controls->Add(this->creerCommande);
			this->Name = L"Commandes";
			this->Text = L"Commandes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
