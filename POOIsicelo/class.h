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

class MArticle :public Article {
	protected:
		std::string ASQL;

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

class MPersonnel :public Personnel {
	protected:
		std::string PSQL;

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

class MClient :public Client {
	protected:
		std::string CSQL;

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

class MAdresse :public Adresse {
	protected:
		std::string ADSQL;

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

class MCommande :public Commande {
	protected:
		std::string CoSQL;

	public:
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

class MFacture :public Facture {
	protected:
		std::string FSQL;

	public:
};