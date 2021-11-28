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

};

class Personne {
	protected:
		std::string Nom;
		std::string Prenom;

	public:
		std::string getNom() {}
		void getPrenom() {}
};

class Personnel :public Personne {
	protected:
		std::string Nom_Superieur;
		std::string Prenom_Superieur;
		std::string Embauche;
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


class Client :public Personne {
	protected:
		std::string Naissance;
		std::string Premier_Achat;
		int Num_Client = 0;
		int IDadresse;


	public:
		Client::Client(std::string Name, std::string FirstName, std::string BornDate, std::string AchatDate);

};

ref class MClient {
	protected:
		System::String^ CSQL;

	public:
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
		void addReference();
		void getArticle();
		void editCommande(std::string Reference);


		
};

ref class MCommande {

	protected:
		System::String^ CoSql;
		int IDcommande;
		int IDpersonnel;
		int IDclient;
		int IDpaiement;
		System::String^ Reference;
		System::String^ Date_Envoi;
		System::String^ Date_Livraison;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setRef(System::String^);
		void setDateE(System::String^);
		void setDateL(System::String^);
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
public:
	CLservices(void);
	System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
	void ajouterUneCommande(System::String^, System::String^);
	void deleteUneCommande(System::String^);
	void updateUneCommande(System::String^, System::String^, System::String^);
};