#pragma once
#include "GestionClient.h"
#include "GestionPersonnel.h"
#include "GestionArticles.h"
#include "Commandes.h"
#include "Statistiques.h"

namespace POOIsicelo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class Form : public System::Windows::Forms::Form
	{
	public:
		Form(void)
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
		~Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ Stop;


	private:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Stop = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(423, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(121, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion Personnel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Location = System::Drawing::Point(725, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion des Articles";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(272, 254);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 47);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Commandes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->Location = System::Drawing::Point(574, 254);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 47);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form::button5_Click);
			// 
			// Stop
			// 
			this->Stop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->Stop->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Stop->Location = System::Drawing::Point(423, 389);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(152, 47);
			this->Stop->TabIndex = 5;
			this->Stop->Text = L"Arrêter l\'application";
			this->Stop->UseVisualStyleBackColor = true;
			this->Stop->Click += gcnew System::EventHandler(this, &Form::Stop_Click);
			// 
			// Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->Stop);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Form";
			this->Text = L"Easycelo Management";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionClient^ APP = gcnew GestionClient();
		APP->ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionPersonnel^ APP = gcnew GestionPersonnel();
		APP->ShowDialog();
		this->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionArticles^ APP = gcnew GestionArticles();
		APP->ShowDialog();
		this->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Commandes^ APP = gcnew Commandes();
		APP->ShowDialog();
		this->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Statistiques^ APP = gcnew Statistiques();
		APP->ShowDialog();
		this->Show();
	}
	private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
