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
	/// Description résumée de Statistiques
	/// </summary>
	public ref class Statistiques : public System::Windows::Forms::Form
	{
	public:
		Statistiques(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->oSvc = gcnew CLservices();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Statistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SelectAll;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: MStats^ Stats1;
	private: System::Windows::Forms::ComboBox^ comboBoxMois;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::TextBox^ textBoxAnnee;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ CalculCAButton;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxTVA;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxMarge;
	private: System::Windows::Forms::TextBox^ textBoxRemise;
	private: System::Windows::Forms::TextBox^ textBoxDemarque;
	private: System::Windows::Forms::Button^ Simuler;
	private: System::Windows::Forms::Label^ ActionLabel;
	private: System::Windows::Forms::Button^ retourMenu;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistiques::typeid));
			this->SelectAll = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CalculCAButton = (gcnew System::Windows::Forms::Button());
			this->textBoxAnnee = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxMarge = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRemise = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDemarque = (gcnew System::Windows::Forms::TextBox());
			this->Simuler = (gcnew System::Windows::Forms::Button());
			this->ActionLabel = (gcnew System::Windows::Forms::Label());
			this->retourMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// SelectAll
			// 
			this->SelectAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SelectAll->Location = System::Drawing::Point(527, 315);
			this->SelectAll->Name = L"SelectAll";
			this->SelectAll->Size = System::Drawing::Size(129, 35);
			this->SelectAll->TabIndex = 0;
			this->SelectAll->Text = L"Afficher toutes les commandes";
			this->SelectAll->UseVisualStyleBackColor = true;
			this->SelectAll->Click += gcnew System::EventHandler(this, &Statistiques::SelectAll_Click);
			this->SelectAll->MouseHover += gcnew System::EventHandler(this, &Statistiques::SelectAll_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 198);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(644, 111);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->DataSource = NULL;
			// 
			// comboBoxMois
			// 
			this->comboBoxMois->FormattingEnabled = true;
			this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Février", L"Mars", L"Avril", L"Mai",
					L"Juin", L"Juillet", L"Août", L"Septembre", L"Octobre", L"Novembre", L"Décembre"
			});
			this->comboBoxMois->Location = System::Drawing::Point(146, 12);
			this->comboBoxMois->Name = L"comboBoxMois";
			this->comboBoxMois->Size = System::Drawing::Size(80, 21);
			this->comboBoxMois->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(9, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Chiffre d\'affaire du mois de";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(234, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"de l\'année";
			// 
			// CalculCAButton
			// 
			this->CalculCAButton->AccessibleName = L"";
			this->CalculCAButton->AutoSize = true;
			this->CalculCAButton->BackColor = System::Drawing::Color::Transparent;
			//this->CalculCAButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CalculCAButton.BackgroundImage")));
			//this->CalculCAButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CalculCAButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CalculCAButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->CalculCAButton->FlatAppearance->BorderSize = 0;
			this->CalculCAButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CalculCAButton->Location = System::Drawing::Point(357, 5);
			this->CalculCAButton->Name = L"CalculCAButton";
			this->CalculCAButton->Size = System::Drawing::Size(32, 32);
			this->CalculCAButton->TabIndex = 6;
			this->CalculCAButton->UseVisualStyleBackColor = false;
			this->CalculCAButton->Click += gcnew System::EventHandler(this, &Statistiques::CalculCAButton_Click);
			this->CalculCAButton->MouseLeave += gcnew System::EventHandler(this, &Statistiques::CalculCAButton_MouseLeave);
			this->CalculCAButton->MouseHover += gcnew System::EventHandler(this, &Statistiques::CalculCAButton_MouseHover);
			// 
			// textBoxAnnee
			// 
			this->textBoxAnnee->Location = System::Drawing::Point(295, 12);
			this->textBoxAnnee->Name = L"textBoxAnnee";
			this->textBoxAnnee->Size = System::Drawing::Size(56, 20);
			this->textBoxAnnee->TabIndex = 7;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Afficher le panier moyen (après remise)",
					L"Afficher la valeur d\'achat du stock", L"Afficher la valeur commerciale du stock", L"Afficher les produits sous le seuil de réapprovisionnement",
					L"Afficher le montant total des achats pour un client", L"Afficher les 10 articles les moins vendus", L"Afficher les 10 articles les plus vendus"
			});
			this->checkedListBox1->Location = System::Drawing::Point(12, 47);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(339, 109);
			this->checkedListBox1->TabIndex = 8;
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::Transparent;
			//this->searchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchButton.BackgroundImage")));
			//this->searchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->searchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchButton->FlatAppearance->BorderSize = 0;
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchButton->Location = System::Drawing::Point(357, 47);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(32, 32);
			this->searchButton->TabIndex = 9;
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &Statistiques::searchButton_Click);
			this->searchButton->MouseLeave += gcnew System::EventHandler(this, &Statistiques::searchButton_MouseLeave);
			this->searchButton->MouseHover += gcnew System::EventHandler(this, &Statistiques::searchButton_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(422, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Simuler des variations de valeurs commerciales :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(422, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"TVA (%) :";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(589, 44);
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(58, 20);
			this->textBoxTVA->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(422, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Marge commerciale :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(422, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Remise commerciale :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(422, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Démarque inconnue :";
			// 
			// textBoxMarge
			// 
			this->textBoxMarge->Location = System::Drawing::Point(589, 74);
			this->textBoxMarge->Name = L"textBoxMarge";
			this->textBoxMarge->Size = System::Drawing::Size(58, 20);
			this->textBoxMarge->TabIndex = 16;
			// 
			// textBoxRemise
			// 
			this->textBoxRemise->Location = System::Drawing::Point(589, 104);
			this->textBoxRemise->Name = L"textBoxRemise";
			this->textBoxRemise->Size = System::Drawing::Size(58, 20);
			this->textBoxRemise->TabIndex = 17;
			// 
			// textBoxDemarque
			// 
			this->textBoxDemarque->Location = System::Drawing::Point(589, 134);
			this->textBoxDemarque->Name = L"textBoxDemarque";
			this->textBoxDemarque->Size = System::Drawing::Size(58, 20);
			this->textBoxDemarque->TabIndex = 18;
			// 
			// Simuler
			// 
			this->Simuler->AccessibleName = L"";
			this->Simuler->BackColor = System::Drawing::Color::Transparent;
			//this->Simuler->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Simuler.BackgroundImage")));
			//this->Simuler->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Simuler->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Simuler->FlatAppearance->BorderSize = 0;
			this->Simuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Simuler->Location = System::Drawing::Point(615, 160);
			this->Simuler->Name = L"Simuler";
			this->Simuler->Size = System::Drawing::Size(32, 32);
			this->Simuler->TabIndex = 19;
			this->Simuler->UseVisualStyleBackColor = false;
			this->Simuler->Click += gcnew System::EventHandler(this, &Statistiques::Simuler_Click);
			this->Simuler->MouseLeave += gcnew System::EventHandler(this, &Statistiques::Simuler_MouseLeave);
			this->Simuler->MouseHover += gcnew System::EventHandler(this, &Statistiques::Simuler_MouseHover);
			// 
			// ActionLabel
			// 
			this->ActionLabel->AutoSize = true;
			this->ActionLabel->Location = System::Drawing::Point(12, 326);
			this->ActionLabel->Name = L"ActionLabel";
			this->ActionLabel->Size = System::Drawing::Size(0, 13);
			this->ActionLabel->TabIndex = 20;
			// 
			// retourMenu
			// 
			this->retourMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->retourMenu->Location = System::Drawing::Point(295, 322);
			this->retourMenu->Name = L"retourMenu";
			this->retourMenu->Size = System::Drawing::Size(75, 23);
			this->retourMenu->TabIndex = 21;
			this->retourMenu->Text = L"Retour";
			this->retourMenu->UseVisualStyleBackColor = true;
			this->retourMenu->Click += gcnew System::EventHandler(this, &Statistiques::retourMenu_Click);
			this->retourMenu->MouseLeave += gcnew System::EventHandler(this, &Statistiques::Simuler_MouseLeave);
			this->retourMenu->MouseHover += gcnew System::EventHandler(this, &Statistiques::retourMenu_MouseHover);
			// 
			// Statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			//this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(666, 361);
			this->Controls->Add(this->retourMenu);
			this->Controls->Add(this->ActionLabel);
			this->Controls->Add(this->Simuler);
			this->Controls->Add(this->textBoxDemarque);
			this->Controls->Add(this->textBoxRemise);
			this->Controls->Add(this->textBoxMarge);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBoxAnnee);
			this->Controls->Add(this->CalculCAButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxMois);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->SelectAll);
			this->DoubleBuffered = true;
			//this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Statistiques";
			this->Text = L"Statistiques";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SelectAll_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesDonnees("Gestion_des_Commandes");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Gestion_des_Commandes";
	}

	private: System::Void CalculCAButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->CalculCA(this->comboBoxMois->Text, Convert::ToInt16(this->textBoxAnnee->Text));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Gestion_des_Commandes";
	}
	private: System::Void CalculCAButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->ActionLabel->Text = L"Afficher le chiffre d'affaire.";
	}
	private: System::Void CalculCAButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->ActionLabel->Text = L"";
	}

	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->checkList(this->checkedListBox1->SelectedIndex);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Gestion_des_Commandes";
	}
	private: System::Void searchButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->ActionLabel->Text = L"Afficher la case cochée.";
	}
	private: System::Void searchButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->ActionLabel->Text = L"";
	}

	private: System::Void Simuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->Simuler(Convert::ToInt16(this->textBoxTVA->Text), Convert::ToInt16(this->textBoxTVA->Text), 4, 2);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Gestion_des_Commandes";
	}
	private: System::Void Simuler_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->ActionLabel->Text = "Simuler les variations.";
	}
	private: System::Void Simuler_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->ActionLabel->Text = "";
	}

private: System::Void retourMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void retourMenu_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->ActionLabel->Text = "Retourner au menu.";
}
private: System::Void retourMenu_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->ActionLabel->Text = "";
}
};
}
