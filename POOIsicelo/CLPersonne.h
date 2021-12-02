#pragma once
#include <string>

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
	Personnel() {};

};

ref class MPersonnel {
protected:
	System::String^ PSQL;
	System::String^ nomPersonnel;
	System::String^ prenomPersonnel;
	System::String^ dateEmbauche;
	System::String^ nomSuperieur;
	System::String^ prenomSuperieur;
	int idPersonnel;

public:
	System::String^ Insert();
	System::String^ SelectAll(void);
	System::String^ Select();
	System::String^ Delete(void);
	//System::String^ Update(void);
	void setIdPersonnel(int);
	void setNomPersonnel(System::String^);
	void setPrenomPersonnel(System::String^);
	void setNom_Superieur(System::String^);
	void setPrenom_Superieur(System::String^);
	void setDateEmbauche(System::String^);
	int getIdPersonnel(void);
	System::String^ getNomPersonnel(void);
	System::String^ getPrenomPersonnel(void);
	System::String^ getNom_Superieur(void);
	System::String^ getPrenom_Superieur(void);
	System::String^ getEmbauche(void);

};


ref class Client :public Personne {
protected:
	System::String^ Naissance;
	System::String^ Premier_Achat;
	int Num_Client = 0;
	int IDadresse;


public:
	Client() {};

};

ref class MClient {
protected:
	System::String^ CSQL;
	System::String^ nom;
	System::String^ prenom;
	System::String^ dateNaissance;
	System::String^ datePremierAchat;
	int idClient;

public:
	System::String^ SelectAll(void);
	System::String^ Select();
	System::String^ Insert();
	System::String^ Delete(void);
	System::String^ remplirNumAdresse(System::String^, System::String^, System::String^);
	//System::String^ Update(void);
	void setIdClient(int);
	void setNom(System::String^);
	void setPrenom(System::String^);
	void setDateNaissance(System::String^);
	void setDatePremierAchat(System::String^);
	int getIdClient(void);
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
	int idAdresse;
	System::String^ Numero;
	System::String^ Rue;
	System::String^ Ville;
	System::String^ Code_postal;

public:
	MAdresse() {};
	//System::String^ Select(void);
	System::String^ InsertVille(void);
	System::String^ InsertAdresse(void);
	//System::String^ Delete(void);
	System::String^ Update(short);
	void setIdAdresse(int);
	void setNumero(System::String^);
	void setRue(System::String^);
	void setVille(System::String^);
	void setCodePostal(System::String^);
	int getIdAdresse();
	System::String^ getNumero();
	System::String^ getRue();
	System::String^ getVille();
	System::String^ getCodePostal();
};