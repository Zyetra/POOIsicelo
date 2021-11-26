#pragma once
#include <string>

class Article {
	private:
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
	private:
		std::string ASQL;

	public:
};

class Stats {
	private:

	public:

};

class Personne {
	private:
		std::string Nom;
		std::string Prenom;

	public:
		void getNom() {}
		void getPrenom() {}
};

class Personnel :public Personne {
	private:
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
	private:
		std::string PSQL;

	public:
};

class Client :public Personne {
	private:
		std::string Naissance;
		std::string Premier_Achat;
		int Num_Client;
		int IDadresse;

	public:
		void getNumClient();
		void getNaissance();
		void get1Achat() {};
		void getAdresse() {};
};

class MClient :public Client {
	private:
		std::string CSQL;

	public:
};

class Adresse {
	private:
		std::string Numero;
		std::string Rue;
		std::string Ville;
		std::string Code_postal;
		int Type_Adresse;

	public:
};

class MAdresse :public Adresse {
	private:
		std::string ADSQL;

	public:
};

class Commande {
	private:
		std::string Reference;
		std::string Livraison;
		std::string Envoi;
		Article** Tab_Commande;
		int taille;
		int index;
		int Nbr_Paiement;
		int IDpersonnel;

	public:
		Commande(int taille);
		void AddArticle();
		
};

class MCommande :public Commande {
	private:
		std::string CoSQL;

	public:
};

class Facture {
	private:
		std::string Nom_Societe;
		std::string Nom_Client;
		std::string Code_Client;
		float Num_Service;
		int IDadresse;

	public:

};

class MFacture :public Facture {
	private:
		std::string FSQL;

	public:
};