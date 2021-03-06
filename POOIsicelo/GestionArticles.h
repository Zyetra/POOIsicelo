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
	/// Description r?sum?e de GestionArticles
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
		/// Nettoyage des ressources utilis?es.
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
		/// Variable n?cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m?thode avec l'?diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionArticles::typeid));
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
			this->creerArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->creerArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creerArticle->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->creerArticle->Location = System::Drawing::Point(16, 15);
			this->creerArticle->Margin = System::Windows::Forms::Padding(4);
			this->creerArticle->Name = L"creerArticle";
			this->creerArticle->Size = System::Drawing::Size(183, 28);
			this->creerArticle->TabIndex = 2;
			this->creerArticle->Text = L"Cr?er un Article";
			this->creerArticle->UseVisualStyleBackColor = true;
			this->creerArticle->Click += gcnew System::EventHandler(this, &GestionArticles::creerArticle_Click);
			// 
			// delArticle
			// 
			this->delArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delArticle->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->delArticle->Location = System::Drawing::Point(16, 66);
			this->delArticle->Margin = System::Windows::Forms::Padding(4);
			this->delArticle->Name = L"delArticle";
			this->delArticle->Size = System::Drawing::Size(183, 28);
			this->delArticle->TabIndex = 3;
			this->delArticle->Text = L"Supprimer un Article";
			this->delArticle->UseVisualStyleBackColor = true;
			this->delArticle->Click += gcnew System::EventHandler(this, &GestionArticles::delArticle_Click);
			// 
			// modArticle
			// 
			this->modArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modArticle->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->modArticle->Location = System::Drawing::Point(16, 124);
			this->modArticle->Margin = System::Windows::Forms::Padding(4);
			this->modArticle->Name = L"modArticle";
			this->modArticle->Size = System::Drawing::Size(183, 28);
			this->modArticle->TabIndex = 4;
			this->modArticle->Text = L"Modifier un Article";
			this->modArticle->UseVisualStyleBackColor = true;
			this->modArticle->Click += gcnew System::EventHandler(this, &GestionArticles::modArticle_Click);
			// 
			// affArticle
			// 
			this->affArticle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->affArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->affArticle->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->affArticle->Location = System::Drawing::Point(16, 180);
			this->affArticle->Margin = System::Windows::Forms::Padding(4);
			this->affArticle->Name = L"affArticle";
			this->affArticle->Size = System::Drawing::Size(183, 28);
			this->affArticle->TabIndex = 5;
			this->affArticle->Text = L"Afficher un Article";
			this->affArticle->UseVisualStyleBackColor = true;
			this->affArticle->Click += gcnew System::EventHandler(this, &GestionArticles::affArticle_Click);
			// 
			// buttonRetour
			// 
			this->buttonRetour->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRetour->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->buttonRetour->Location = System::Drawing::Point(15, 241);
			this->buttonRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(184, 48);
			this->buttonRetour->TabIndex = 6;
			this->buttonRetour->Text = L"Retour au menu";
			this->buttonRetour->UseVisualStyleBackColor = true;
			this->buttonRetour->Click += gcnew System::EventHandler(this, &GestionArticles::buttonRetour_Click);
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
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
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
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(231, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(749, 274);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Article";
			// 
			// tauxTVA
			// 
			this->tauxTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->tauxTVA->Location = System::Drawing::Point(561, 185);
			this->tauxTVA->Margin = System::Windows::Forms::Padding(4);
			this->tauxTVA->Name = L"tauxTVA";
			this->tauxTVA->Size = System::Drawing::Size(181, 22);
			this->tauxTVA->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label6->Location = System::Drawing::Point(557, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 16);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Taux TVA :";
			// 
			// seuilReaprovi
			// 
			this->seuilReaprovi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->seuilReaprovi->Location = System::Drawing::Point(7, 185);
			this->seuilReaprovi->Margin = System::Windows::Forms::Padding(4);
			this->seuilReaprovi->Name = L"seuilReaprovi";
			this->seuilReaprovi->Size = System::Drawing::Size(181, 22);
			this->seuilReaprovi->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label5->Location = System::Drawing::Point(283, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 16);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Seuil de r?aprovisionnement :";
			// 
			// quantiteStock
			// 
			this->quantiteStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->quantiteStock->Location = System::Drawing::Point(285, 185);
			this->quantiteStock->Margin = System::Windows::Forms::Padding(4);
			this->quantiteStock->Name = L"quantiteStock";
			this->quantiteStock->Size = System::Drawing::Size(181, 22);
			this->quantiteStock->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label4->Location = System::Drawing::Point(5, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Quantit? en Stock :";
			// 
			// PrixHTArticle
			// 
			this->PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->PrixHTArticle->Location = System::Drawing::Point(561, 79);
			this->PrixHTArticle->Margin = System::Windows::Forms::Padding(4);
			this->PrixHTArticle->Name = L"PrixHTArticle";
			this->PrixHTArticle->Size = System::Drawing::Size(181, 22);
			this->PrixHTArticle->TabIndex = 21;
			// 
			// refArticle
			// 
			this->refArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->refArticle->Location = System::Drawing::Point(285, 79);
			this->refArticle->Margin = System::Windows::Forms::Padding(4);
			this->refArticle->Name = L"refArticle";
			this->refArticle->Size = System::Drawing::Size(181, 22);
			this->refArticle->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label3->Location = System::Drawing::Point(557, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Prix HT de l\'Article :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label2->Location = System::Drawing::Point(283, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"R?f?rence de l\'Article :";
			// 
			// desiArticle
			// 
			this->desiArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->desiArticle->Location = System::Drawing::Point(7, 79);
			this->desiArticle->Margin = System::Windows::Forms::Padding(4);
			this->desiArticle->Name = L"desiArticle";
			this->desiArticle->Size = System::Drawing::Size(181, 22);
			this->desiArticle->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->label1->Location = System::Drawing::Point(5, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"D?signation de l\'Article :";
			// 
			// GestionArticles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(995, 533);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->affArticle);
			this->Controls->Add(this->modArticle);
			this->Controls->Add(this->delArticle);
			this->Controls->Add(this->creerArticle);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->refArticle->ResetText();
			this->desiArticle->ResetText();
			this->tauxTVA->ResetText();
			this->PrixHTArticle->ResetText();
			this->quantiteStock->ResetText();
			this->seuilReaprovi->ResetText();
		}
	}
private: System::Void creerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->creationArticles(this->desiArticle->Text, this->refArticle->Text, this->tauxTVA->Text, this->PrixHTArticle->Text, this->quantiteStock->Text, this->seuilReaprovi->Text);
	this->refArticle->ResetText();
	this->desiArticle->ResetText();
	this->tauxTVA->ResetText();
	this->PrixHTArticle->ResetText();
	this->quantiteStock->ResetText();
	this->seuilReaprovi->ResetText();
}

private: System::Void delArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->supArticles(this->refArticle->Text);
	this->refArticle->ResetText();
	this->desiArticle->ResetText();
	this->tauxTVA->ResetText();
	this->PrixHTArticle->ResetText();
	this->quantiteStock->ResetText();
	this->seuilReaprovi->ResetText();

}
private: System::Void modArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->modifArticles(this->desiArticle->Text, this->quantiteStock->Text, this->PrixHTArticle->Text, this->tauxTVA->Text, this->seuilReaprovi->Text, this->refArticle->Text);
	this->refArticle->ResetText();
	this->desiArticle->ResetText();
	this->tauxTVA->ResetText();
	this->PrixHTArticle->ResetText();
	this->quantiteStock->ResetText();
	this->seuilReaprovi->ResetText();
}
};
}
