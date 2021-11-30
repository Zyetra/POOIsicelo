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

	public:
};

class Stats {
	protected:

	public:
		System::String^ CalculCA(int, int);

};

ref class Personne {
	protected:
		System::String^ Nom;
		System::String^ Prenom;

	public:
		void getNom() {}
		void getPrenom() {}
};

ref class Personnel :public Personne {
	protected:
		System::String^ Nom_Superieur;
		System::String^ Prenom_Superieur;
		System::String^ Embauche;
		int IDadresse;

	public:
		void getSuperieur() {};
		void getEmbauche() {};
		void getAdresse() {};

};

ref class MPersonnel {
	protected:
		System::String^ PSQL;

	public:
	};


ref class Client :public Personne {
	protected:
		System::String^ Naissance;
		System::String^ Premier_Achat;
		int Num_Client = 0;
		int IDadresse;


	public:
		Client(){};

};

ref class MClient{
	protected:
		System::String^ CSQL;
		System::String^ nom;
		System::String^ prenom;
		System::String^ dateNaissance;
		System::String^ datePremierAchat;
		int idClient;

	public:
		//System::String^ Select(void);
		System::String^ Insert(void);
		//System::String^ Delete(void);
		//System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateNaissance(System::String^);
		void setDatePremierAchat(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getNaissance(void);
		System::String^ getDatePremierAchat(void);
};

class Adresse {
	protected:
		std::string Numero;
		std::string Rue;
		std::string Ville;
		std::string Code_postal;
		int Type_Adresse;

	public:
};

ref class MAdresse {
	protected:
		System::String^ ADSQL;

	public:
};

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
		void setDateE(System::String^);
		void setDateL(System::String^);
		void setPaiement(System::String^, System::String^, float, int);
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

//Connexion BDD

ref class CLcad
{
private:
	System::String^ sSql;
	System::String^ sCnx;
	System::Data::SqlClient::SqlConnection^ oCnx;
	System::Data::SqlClient::SqlCommand^ oCmd;
	System::Data::SqlClient::SqlDataAdapter^ oDA;
	System::Data::DataSet^ oDs;
public:
	CLcad(void);
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
};

//Gestion de la BDD

ref class CLservices
{
private:
	CLcad^ oCad;
	MCommande^ oMappTB;
	MClient^ oMappClient;
public:
	CLservices(void);
	System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
	void ajouterUneCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, float, int);
	void deleteUneCommande(System::String^);
	void updateUneCommande(System::String^, System::String^, System::String^);
	void ajouterUnClient(System::String^, System::String^, System::String^, System::String^);
	//void ajouterUneAdresse(System::String^, System::String^, System::String^, System::String^);
};