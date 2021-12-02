#pragma once
#include <string>




class Article {
protected:
	int Quantite;
	float PrixHT;
	float Seuil_Reapp;
	float Taux_TVA;
	std::string Reference;
	std::string Designation;
	std::string Nature;

public:
	


};


ref class MArticle {
protected:
	System::String^ ASQL;
	System::String^ NomArticle;
	System::String^ reference;
	int Quantit;
	int Taux_tva;
	int Prix_uht;
	int idArticle;
	int seuille;

public:
	System::String^ SelectAll(void);
	System::String^ Selectone(void);
	System::String^ Insert();
	System::String^ Delete(void);
	System::String^ Update(void);
	void setIdArticle(int);
	void setNomArticle(System::String^);
	void setReference(System::String^);
	void setquantite(int);
	void setTauxtva(int);
	void setPrixuht(int);
	void setSeuil(int);

	int getIdArticle(void);
	System::String^ getNomArticle(void);
	System::String^ getReference(void);
	int getquantite(void);
	int getTauxtva(void);
	int getPrixuht(void);
	int getseuil(void);
}; 
