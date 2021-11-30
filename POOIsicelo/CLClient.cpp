#include "CLPersonne.h"
#include <string>


void MClient::setIdClient(int Id)
{
	this->idClient = Id;
}
void MClient::setNom(System::String^ nom)
{
	this->nom = nom;
}
void MClient::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void MClient::setDateNaissance(System::String^ dateNaissance) {

	this->dateNaissance = dateNaissance;

}

void MClient::setDatePremierAchat(System::String^ datePremierAchat) {

	this->datePremierAchat = datePremierAchat;

}

int MClient::getIdClient(void) { return this->idClient; }
System::String^ MClient::getNom(void) { return this->nom; }
System::String^ MClient::getPrenom(void) { return this->prenom; }
System::String^ MClient::getNaissance(void) { return this->dateNaissance; }
System::String^ MClient::getDatePremierAchat(void) { return this->datePremierAchat; }

// REQUETES SQL CLIENT

System::String^ MClient::Insert()
{
	return "INSERT INTO Gestion_des_clients (Nom_Client, Prenom_Client, Date_Naissance_Client, Date_Premier_Achat_Client, IDadresse, masque) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateNaissance + "','" + this->datePremierAchat + "', (SELECT MAX(IDadresse) FROM adresse), 1); ";
}

System::String^ MClient::SelectAll() 
{
	return "SELECT ID_Numero_Client, Nom_Client, Prenom_Client, Date_Naissance_Client, Date_Premier_Achat_Client, numero, rue, nom_ville, code_postal FROM Gestion_des_clients INNER JOIN adresse ON Gestion_des_Clients.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE masque = 1;";
}

System::String^ MClient::Select()
{
	return "SELECT ID_Numero_Client, Nom_Client, Prenom_Client, Date_Naissance_Client, Date_Premier_Achat_Client, numero, rue, nom_ville, code_postal FROM Gestion_des_clients INNER JOIN adresse ON Gestion_des_Clients.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE masque = 1 AND Nom_client ='" + this->nom + "' AND Prenom_client ='" + this->prenom + "' AND Date_Naissance_Client ='" + this->dateNaissance + "';";
}

System::String^ MClient::Delete()
{
	return "UPDATE Gestion_des_Clients SET masque = 0 WHERE ID_Numero_Client='" + this->idClient + "'AND Nom_client = '" + this->nom + "' AND Prenom_client = '" + this->prenom + "' AND Date_Naissance_Client = '" + this->dateNaissance + "'; ";
}