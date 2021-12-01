#include "CLCommande.h"
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <time.h>
#include <sstream>

using namespace std;

Commande::Commande(int taille) {
	this->taille = taille;
	this->index = 0;
	Tab_Commande = new Article * [this->taille];
	Tab_Nombre = new int[this->taille];

}

Commande::~Commande() {
	delete* Tab_Commande;
	delete Tab_Nombre;
}

void Commande::addArticle(Article* obj, int Nombre) {
	Tab_Commande[this->index] = obj;
	Tab_Nombre[this->index] = Nombre;
	this->index++;
}

void Commande::getArticle() {

}

void Commande::editCommande(string Reference) {

}
System::String^ MCommande::SelectVille(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient)
{
	return "SELECT nom_ville FROM ville INNER JOIN  adresse on(adresse.IDville=ville.IDville) INNER JOIN Gestion_des_clients on(Gestion_des_clients.IDadresse=adresse.IDadresse) WHERE Nom_Client='" + nomClient + "' AND Prenom_Client= '" + prenomClient + "'  AND Date_Naissance_Client= '" + dateNaissanceClient + "';";
}

System::String^ MCommande::Select(void)
{
	return "SELECT ID_Commande,[reference_commande],Date_Emission_Commande,Date_Livraison_Prevue_Commande,Quantite_Total_Article_Commande,[montant_total_ht],[montant_total_ttc],[montant_total_tva],[masque],nom_personnel,prenom_personnel,nom_client,prenom_client,Moyen_de_Paiement FROM Gestion_des_commandes INNER JOIN Gestion_du_personnel ON(Gestion_du_personnel.ID_Personnel=Gestion_des_commandes.ID_Personnel)INNER JOIN Gestion_des_clients ON(Gestion_des_clients.ID_Numero_Client=Gestion_des_commandes.ID_Numero_Client)INNER JOIN Moyen_de_paiemment ON(Moyen_de_paiemment.ID_Moyen_de_Paiement=Gestion_des_commandes.ID_Moyen_de_Paiement);";
}

System::String^ MCommande::Insert(void)
{
	return "INSERT INTO Gestion_des_commandes([reference_commande],Date_Emission_Commande,Date_Livraison_Prevue_Commande,Date_Paiement_Commande,Quantite_Total_Article_Commande,[montant_total_ht],[montant_total_ttc],[montant_total_tva],ID_Moyen_de_Paiement,ID_Numero_Client,ID_Personnel)VALUES('" + this->Reference + "' ,'" + this->Date_Livraison + "','" + this->Date_Envoi + "','" + this->Date_Paiement1 + "',2,'" + this->Montant_Paiement + "',3250,3500,'" + this->IDpaiement + "','" + this->IDclient + "','" + this->IDpersonnel + "')";

}
System::String^ MCommande::Delete(void)
{
	return "UPDATE Gestion_des_commandes SET [masque_commande]='0' WHERE Reference_Commande = '" + this->Reference + "';";
}
System::String^ MCommande::Update(void)
{
	return "";
}
void MCommande::setId(int IDCommande)
{
	this->IDcommande = IDCommande;
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

int MCommande::getId(void) { return this->IDcommande; }
System::String^ MCommande::getRef(void) { return this->Reference; }
System::String^ MCommande::getDateE(void) { return this->Date_Envoi; }
System::String^ MCommande::getDateL(void) { return this->Date_Livraison; }