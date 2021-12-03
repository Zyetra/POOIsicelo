#pragma once
#include <string>
#include "CLArticle.h"

class Commande {
protected:

	short Tab_Article[50];
	short Tab_Nombre[50];


public:
	Commande();
	~Commande();
	void addArticle(short, short);
	void getArticle();
	void editCommande(std::string Reference);



};

ref class MCommande{

protected:
	int IDcommande;
	int Increment;
	int IDpersonnel = 1;
	int IDclient;
	int IDpaiement;
	float Montant_Paiement;

	short Tab_Commande;
	//System::Array^ Tab_Nombre = System::Array::CreateInstance(short, 5);

	System::String^ Reference;
	System::String^ Date_Paiement1;
	System::String^ Date_Paiement2;
	System::String^ Date_Paiement3;
	System::String^ Date_Paiement4;
	System::String^ Date_Envoi;
	System::String^ Date_Livraison;

public:
	System::String^ SelectVille(System::String^, System::String^, System::String^);
	System::String^ SelectArticle(void);
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);
	void setId(int);
	System::String^ SelectIDClient(System::String^, System::String^, System::String^);
	System::String^ setIDClient(int);
	System::String^ recupRue(System::String^, System::String^, System::String^);
	System::String^ recupNumero(System::String^, System::String^, System::String^);
	void setRef(System::String^, System::String^, System::String^);
	void desRef(System::String^ Ref);
	void setDateE(System::String^);
	void setDateL(System::String^);
	void setPaiement(System::String^, float, short, System::String^);
	void updMoyenPaiement(System::String^, System::String^);
	System::String^ recupIDArticle(System::String^);
	void addArticleCommande(short, short);
};


class Facture {
protected:
	std::string Nom_Societe;
	std::string Nom_Client;
	std::string Code_Client;
	float Num_Service;
	int IDadresse;

public:

};

ref class MFacture {
protected:
	System::String^ FSQL;

public:
};