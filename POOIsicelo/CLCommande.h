#pragma once
#include <string>
#include "CLArticle.h"

class Commande {
protected:
	std::string Reference;
	std::string Date_Livraison;
	std::string Date_Envoi;
	Article** Tab_Commande;
	int taille;
	int index;
	int Nombre;
	int* Tab_Nombre;
	int Nbr_Paiement;
	int IDpersonnel;

public:
	Commande(int taille);
	~Commande();
	void addArticle(Article* obj, int Nombre);
	void getArticle();
	void editCommande(std::string Reference);



};

ref class MCommande {

protected:
	System::String^ CoSql;
	int IDcommande;
	int Increment = 0;
	int IDpersonnel;
	int IDclient;
	int IDpaiement;
	float Montant_Paiement;
	System::String^ Reference;
	System::String^ Moyen_Paiement;
	System::String^ Date_Paiement1;
	System::String^ Date_Paiement2;
	System::String^ Date_Paiement3;
	System::String^ Date_Paiement4;
	System::String^ Date_Envoi;
	System::String^ Date_Livraison;

public:
	System::String^ Select(void);
	System::String^ Insert(void);
	System::String^ Delete(void);
	System::String^ Update(void);
	void setId(int);
	void setRef(System::String^, System::String^, System::String^);
	void desRef(System::String^ Ref);
	void setDateE(System::String^);
	void setDateL(System::String^);
	void setPaiement(System::String^, System::String^, float , short);
	int getId(void);
	System::String^ getRef(void);
	System::String^ getDateE(void);
	System::String^ getDateL(void);
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