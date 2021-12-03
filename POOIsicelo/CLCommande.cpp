#include "CLCommande.h"
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <time.h>
#include <sstream>

using namespace std;

Commande::Commande() {

}

Commande::~Commande() {

}

void Commande::addArticle(short IDArticle, short Quantite) {

}

void Commande::getArticle() {

}

void Commande::editCommande(string Reference) {

}
System::String^ MCommande::SelectVille(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient)
{
	return "SELECT nom_ville FROM ville INNER JOIN  adresse on(adresse.IDville=ville.IDville) INNER JOIN Gestion_des_clients on(Gestion_des_clients.IDadresse=adresse.IDadresse) WHERE Nom_Client='" + nomClient + "' AND Prenom_Client= '" + prenomClient + "'  AND Date_Naissance_Client= '" + dateNaissanceClient + "';";
}

System::String^ MCommande::SelectArticle(void) {
	return "SELECT Designation_Article FROM Gestion_des_articles;";
}

System::String^ MCommande::SelectIDClient(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient) {

	return"SELECT ID_Numero_Client FROM Gestion_des_clients WHERE Nom_Client='" + nomClient + "' AND Prenom_Client='" + prenomClient +"' AND Date_Naissance_Client='" + dateNaissanceClient + "';";
}
System::String^ MCommande::Select(void)
{
	return "SELECT [reference_commande],Date_Emission_Commande,Date_Livraison_Prevue_Commande,Date_Paiement_Commande,Quantite_Total_Article_Commande,[montant_total_ht],[montant_total_ttc],[montant_total_tva],nom_personnel,prenom_personnel,nom_client,prenom_client,Designation_Article, Quantite_Article_Stock,[masque_commande],Moyen_de_Paiement FROM Gestion_des_commandes INNER JOIN Gestion_du_personnel ON(Gestion_du_personnel.ID_Personnel=Gestion_des_commandes.ID_Personnel)INNER JOIN Gestion_des_clients ON(Gestion_des_clients.ID_Numero_Client=Gestion_des_commandes.ID_Numero_Client)INNER JOIN Moyen_de_paiemment ON(Moyen_de_paiemment.ID_Moyen_de_Paiement=Gestion_des_commandes.ID_Moyen_de_Paiement) INNER JOIN Influer ON(Influer.ID_Commande=Gestion_des_commandes.ID_Commande) INNER JOIN Gestion_des_articles ON(Influer.ID_Article=Gestion_des_articles.ID_Article) WHERE Reference_Commande = '" + this->Reference + "' AND masque_commande = 1;";
}

System::String^ MCommande::recupRue(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient) {
	return "SELECT rue FROM adresse INNER JOIN Gestion_des_clients ON (adresse.IDadresse=Gestion_des_clients.IDadresse) WHERE Nom_Client='" + nomClient + "' AND Prenom_Client='" + prenomClient + "' AND Date_Naissance_Client='" + dateNaissanceClient + "' ;";
}

System::String^ MCommande::recupNumero(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient) {
	return "SELECT numero FROM adresse INNER JOIN Gestion_des_clients ON(adresse.IDadresse = Gestion_des_clients.IDadresse) WHERE Nom_Client = '" + nomClient + "' AND Prenom_Client = '" + prenomClient + "' AND Date_Naissance_Client = '" + dateNaissanceClient + "' ;";
}


System::String^ MCommande::Insert(void)
{
	return "INSERT INTO Gestion_des_commandes([reference_commande],Date_Emission_Commande,Date_Livraison_Prevue_Commande,Date_Paiement_Commande,Quantite_Total_Article_Commande,[montant_total_ht],[montant_total_ttc],[montant_total_tva],masque_commande,ID_Moyen_de_Paiement,ID_Numero_Client,ID_Personnel)VALUES('" + this->Reference + "' ,'" + this->Date_Livraison + "','" + this->Date_Envoi + "','" + this->Date_Paiement1 + "',2,'" + this->Montant_Paiement + "',3250,3500,1,'" + this->IDpaiement + "','" + this->IDclient + "','" + this->IDpersonnel + "')";

}
System::String^ MCommande::Delete(void)
{
	return "UPDATE Gestion_des_commandes SET masque_commande = '0' WHERE Reference_Commande = '" + this->Reference + "';";
}
System::String^ MCommande::Update(void)
{
	return "UPDATE Gestion_des_commandes SET [Date_Livraison_Prevue_Commande] = '" + this->Date_Livraison + "', [Date_Emission_Commande] = '"+ this->Date_Envoi + "', [ID_Moyen_De_Paiement] = '"+ IDpaiement +"' WHERE [Reference_Commande] = '"+ this->Reference +"' ;";
}
System::String^ MCommande::recupIDArticle(System::String^ NomArticle) {
	return "SELECT ID_Article FROM Gestion_des_articles WHERE Designation_Article = '" + NomArticle + "'";
}

void MCommande::addArticleCommande(short IDArticle, short Quantite ) {

}
void MCommande::setId(int IDCommande)
{
	this->IDcommande = IDCommande;
}

System::String^ MCommande::setIDClient(int IDClient) {
	this->IDclient = IDClient;
	return System::Convert::ToString(IDClient);

}

void MCommande::setRef(System::String^ Nom, System::String^ Prenom, System::String^ VilleL)

{
	Reference = "";
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::string annee = asctime(timeinfo);
	std::string Nomm = msclr::interop::marshal_as<std::string>(Nom);
	std::string Prenomm = msclr::interop::marshal_as<std::string>(Prenom);
	std::string VilleLL = msclr::interop::marshal_as<std::string>(VilleL);
	std::string Cache;
	Cache = Nomm.substr(0, 2) + Prenomm.substr(0, 2) + annee.substr(20, 4) + VilleLL.substr(0, 3);
	System::String^ Convertion = msclr::interop::marshal_as<System::String^>(Cache);
	this->Reference = Convertion;
	this->Reference = Reference + Increment.ToString();
	Increment++;
}

void MCommande::desRef(System::String^ Ref) {
	this->Reference = Ref;
}

void MCommande::setDateE(System::String^ DateE)
{
	this->Date_Envoi = DateE;
}
void MCommande::setDateL(System::String^ DateL)
{
	this->Date_Livraison = DateL;
}

void MCommande::updMoyenPaiement(System::String^ MoyenP, System::String^ DateP) {

	if (MoyenP == System::Convert::ToString("CB")) {
		this->IDpaiement = 1;
	}

	else if (MoyenP == System::Convert::ToString("paypal")) {
		this->IDpaiement = 2;
	}

	this->Date_Paiement1 = DateP;

}
void MCommande::setPaiement(System::String^ DateP, float MontantP, short NombreP, System::String^ MoyenP) {

	if (MoyenP == System::Convert::ToString("CB")) {
		this->IDpaiement = 1;
	}
	else if (MoyenP == System::Convert::ToString("paypal")) {
		this->IDpaiement = 2;
	}

	string DatePP = msclr::interop::marshal_as<string>(DateP);
	string Cache;
	int value = 0;

	if (NombreP == 1) {
		this->Date_Paiement1 = DateP;
		this->Montant_Paiement = MontantP;
	}
	else if (NombreP == 2) {
		this->Date_Paiement1 = DateP;
		Cache = DatePP.substr(5, 2);
		stringstream intValue(Cache);
		intValue >> value;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(5, 2, Cache);
		System::String^ Convertion = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement2 = Convertion;
		this->Montant_Paiement = MontantP / 2;
	}
	else if (NombreP == 3) {
		this->Date_Paiement1 = DateP;
		Cache = DatePP.substr(5, 2);
		stringstream intValue(Cache);
		intValue >> value;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(5, 2, Cache);
		System::String^ Convertion = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement2 = Convertion;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(5, 2, Cache);
		System::String^ Convertion2 = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement3 = Convertion2;
		this->Montant_Paiement = MontantP / 3;
	}
	else {
		this->Date_Paiement1 = DateP;
		Cache = DatePP.substr(5, 2);
		stringstream intValue(Cache);
		intValue >> value;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(5, 2, Cache);
		System::String^ Convertion = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement2 = Convertion;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(5, 2, Cache);
		System::String^ Convertion2 = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement3 = Convertion2;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(5, 2, Cache);
		System::String^ Convertion3 = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement4 = Convertion3;
		this->Montant_Paiement = MontantP / 4;
	}
}
