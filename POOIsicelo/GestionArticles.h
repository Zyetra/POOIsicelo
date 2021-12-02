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
	/// Description résumée de GestionArticles
	/// </summary>
	public ref class GestionArticles : public System::Windows::Forms::Form
	{
	public:
		GestionArticles(void)
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
		~GestionArticles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::Button^ creerArticle;
	private: System::Windows::Forms::Button^ delArticle;
	private: System::Windows::Forms::Button^ modArticle;
	private: System::Windows::Forms::Button^ affArticle;
	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tauxTVA;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ seuilReaprovi;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ quantiteStock;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ PrixHTArticle;
	private: System::Windows::Forms::TextBox^ refArticle;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ desiArticle;

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
			this->creerArticle = (gcnew System::Windows::Forms::Button());
			this->delArticle = (gcnew System::Windows::Forms::Button());
			this->modArticle = (gcnew System::Windows::Forms::Button());
			this->affArticle = (gcnew System::Windows::Forms::Button());
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->seuilReaprovi = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->quantiteStock = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PrixHTArticle = (gcnew System::Windows::Forms::TextBox());
			this->refArticle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->desiArticle = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// creerArticle
			// 
			this->creerArticle->AccessibleDescription = L"hello";
			this->creerArticle->Location = System::Drawing::Point(12, 12);
			this->creerArticle->Name = L"creerArticle";
			this->creerArticle->Size = System::Drawing::Size(110, 23);
			this->creerArticle->TabIndex = 2;
			this->creerArticle->Text = L"Créer un Article";
			this->creerArticle->UseVisualStyleBackColor = true;
			this->creerArticle->Click += gcnew System::EventHandler(this, &GestionArticles::creerArticle_Click);
			// 
			// delArticle
			// 
			this->delArticle->Location = System::Drawing::Point(12, 54);
			this->delArticle->Name = L"delArticle";
			this->delArticle->Size = System::Drawing::Size(110, 23);
			this->delArticle->TabIndex = 3;
			this->delArticle->Text = L"Supprimer un Article";
			this->delArticle->UseVisualStyleBackColor = true;
			this->delArticle->Click += gcnew System::EventHandler(this, &GestionArticles::delArticle_Click);
			// 
			// modArticle
			// 
			this->modArticle->Location = System::Drawing::Point(12, 99);
			this->modArticle->Name = L"modArticle";
			this->modArticle->Size = System::Drawing::Size(110, 23);
			this->modArticle->TabIndex = 4;
			this->modArticle->Text = L"Modifier un Article";
			this->modArticle->UseVisualStyleBackColor = true;
			this->modArticle->Click += gcnew System::EventHandler(this, &GestionArticles::modArticle_Click);
			// 
			// affArticle
			// 
			this->affArticle->Location = System::Drawing::Point(12, 146);
			this->affArticle->Name = L"affArticle";
			this->affArticle->Size = System::Drawing::Size(110, 23);
			this->affArticle->TabIndex = 5;
			this->affArticle->Text = L"Afficher un Article";
			this->affArticle->UseVisualStyleBackColor = true;
			this->affArticle->Click += gcnew System::EventHandler(this, &GestionArticles::affArticle_Click);
			// 
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(11, 196);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(76, 39);
			this->buttonRetour->TabIndex = 6;
			this->buttonRetour->Text = L"Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &GestionArticles::buttonRetour_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 248);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(722, 172);
			this->dataGridView1->TabIndex = 10;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tauxTVA);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->seuilReaprovi);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->quantiteStock);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->PrixHTArticle);
			this->groupBox1->Controls->Add(this->refArticle);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->desiArticle);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(173, 12);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(562, 223);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Article";
			// 
			// tauxTVA
			// 
			this->tauxTVA->Location = System::Drawing::Point(421, 150);
			this->tauxTVA->Name = L"tauxTVA";
			this->tauxTVA->Size = System::Drawing::Size(137, 20);
			this->tauxTVA->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(418, 134);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Taux TVA :";
			// 
			// seuilReaprovi
			// 
			this->seuilReaprovi->Location = System::Drawing::Point(214, 150);
			this->seuilReaprovi->Name = L"seuilReaprovi";
			this->seuilReaprovi->Size = System::Drawing::Size(137, 20);
			this->seuilReaprovi->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(212, 134);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Seuil de réaprovisionnement :";
			// 
			// quantiteStock
			// 
			this->quantiteStock->Location = System::Drawing::Point(5, 150);
			this->quantiteStock->Name = L"quantiteStock";
			this->quantiteStock->Size = System::Drawing::Size(137, 20);
			this->quantiteStock->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 134);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Quantité en Stock :";
			// 
			// PrixHTArticle
			// 
			this->PrixHTArticle->Location = System::Drawing::Point(421, 64);
			this->PrixHTArticle->Name = L"PrixHTArticle";
			this->PrixHTArticle->Size = System::Drawing::Size(137, 20);
			this->PrixHTArticle->TabIndex = 21;
			// 
			// refArticle
			// 
			this->refArticle->Location = System::Drawing::Point(214, 64);
			this->refArticle->Name = L"refArticle";
			this->refArticle->Size = System::Drawing::Size(137, 20);
			this->refArticle->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(418, 46);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Prix HT de l\'Article :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Référence de l\'Article :";
			// 
			// desiArticle
			// 
			this->desiArticle->Location = System::Drawing::Point(5, 64);
			this->desiArticle->Name = L"desiArticle";
			this->desiArticle->Size = System::Drawing::Size(137, 20);
			this->desiArticle->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Désignation de l\'Article :";
			// 
			// GestionArticles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 433);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->affArticle);
			this->Controls->Add(this->modArticle);
			this->Controls->Add(this->delArticle);
			this->Controls->Add(this->creerArticle);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GestionArticles";
			this->Text = L"GestionArticles";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void affArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->refArticle->Text == "") {
			this->dataGridView1->Refresh();
			this->oDs = this->oSvc->selectionnerTousLesArticles("Gestion_des_articles");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "Gestion_des_articles";
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oSvc->selectionnerUnArticles("Gestion_des_articles", this->refArticle->Text);
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "Gestion_des_articles";
		}
	}
private: System::Void creerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->creationArticles(this->desiArticle->Text, this->refArticle->Text, this->tauxTVA->Text, this->PrixHTArticle->Text, this->quantiteStock->Text, this->seuilReaprovi->Text);
}

private: System::Void delArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->supArticles(this->refArticle->Text);

}
private: System::Void modArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->modifArticles(this->desiArticle->Text, this->quantiteStock->Text, this->PrixHTArticle->Text, this->tauxTVA->Text, this->seuilReaprovi->Text, this->refArticle->Text);

}
};
}
