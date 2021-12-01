#include "CLServices.h"
#include "CLCad.h"
#include "CLCommande.h"
#include "CLPersonne.h"
#include <string>




CLservices::CLservices(void)
{
	this->oCad = gcnew CLcad();
	this->oMappCommande = gcnew MCommande();
	this->oMappAdresse = gcnew MAdresse();
	this->oMappClient = gcnew MClient();
	this->oMappPersonnel = gcnew MPersonnel();
	this->oMappStats = gcnew MStats();
}

// COMMANDE

System::Data::DataSet^ CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLservices::recupCommande(System::String^ nomClient, System::String^ prenomClient) {
	System::String^ sql;

	sql = this->oMappCommande->Select();
	return this->oCad->getRows(sql, "Gestion_des_clients");
}
void CLservices::ajouterUneCommande(System::String^ DateE, System::String^ DateL, System::String^ Nom, System::String^ Prenom, System::String^ VilleL, System::String^ DateP, System::String^ MoyenP, float MontantP, short NombreP)
{
	System::String^ sql;

	this->oMappCommande->setRef(Nom, Prenom, VilleL);
	this->oMappCommande->setDateE(DateE);
	this->oMappCommande->setDateL(DateL);
	this->oMappCommande->setPaiement(DateP, MoyenP, MontantP, NombreP);
	sql = this->oMappCommande->Insert();

	this->oCad->actionRows(sql);
}
void CLservices::deleteUneCommande(System::String^ Ref)
{
	System::String^ sql;

	this->oMappCommande->desRef(Ref);
	sql = this->oMappCommande->Delete();

	this->oCad->actionRows(sql);
}
void CLservices::updateUneCommande(System::String^ Ref, System::String^ DateE, System::String^ DateL)
{
	System::String^ sql;

	this->oMappCommande->desRef(Ref);
	this->oMappCommande->setDateE(DateE);
	this->oMappCommande->setDateL(DateL);
	sql = this->oMappCommande->Update();

	this->oCad->actionRows(sql);
}


// CLIENT 

void CLservices::ajouterUnClient(System::String^ nom, System::String^ prenom, System::String^ dateNaissance, System::String^ datePremierAchat) {

	{
		System::String^ sql;

		this->oMappClient->setNom(nom);
		this->oMappClient->setPrenom(prenom);
		this->oMappClient->setDateNaissance(dateNaissance);
		this->oMappClient->setDatePremierAchat(datePremierAchat);
		sql = this->oMappClient->Insert();

		this->oCad->actionRows(sql);
	}
}

System::Data::DataSet^ CLservices::selectionnerTousLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappClient->SelectAll();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservices::selectionnerUnClient(System::String^ dataTableName, System::String^ nom_client, System::String^ prenom_client, System::String^ date_naissance_client)
{
	System::String^ sql;
	this->oMappClient->setNom(nom_client);
	this->oMappClient->setPrenom(prenom_client);
	this->oMappClient->setDateNaissance(date_naissance_client);

	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void CLservices::supprimerUnClient(System::String^ nom_client, System::String^ prenom_client, System::String^ date_naissance_client, System::String^ num_client)
{
	System::String^ sql;
	
	this->oMappClient->setIdClient(int::Parse(num_client));
	this->oMappClient->setNom(nom_client);
	this->oMappClient->setPrenom(prenom_client);
	this->oMappClient->setDateNaissance(date_naissance_client);

	sql = this->oMappClient->Delete();
	this->oCad->actionRows(sql);
}


// ADRESSE

void CLservices::ajouterUneAdresse(System::String^ number, System::String^ street, System::String^ city, System::String^ postalCode) {

	{
		System::String^ sql;


		this->oMappAdresse->setVille(city);
		this->oMappAdresse->setCodePostal(postalCode);

		sql = this->oMappAdresse->InsertVille();
		this->oCad->actionRows(sql);

		sql = "";

		this->oMappAdresse->setNumero(number);
		this->oMappAdresse->setRue(street);

		sql = this->oMappAdresse->InsertAdresse();
		this->oCad->actionRows(sql);
	}
}

// PERSONNEL

void CLservices::ajouterPersonnel(System::String^ nom, System::String^ prenom, System::String^ dateEmbauche, System::String^ nomSuperieur, System::String^ prenomSuperieur) {

	{
		System::String^ sql;

		this->oMappPersonnel->setNom(nom);
		this->oMappPersonnel->setPrenom(prenom);
		this->oMappPersonnel->setDateEmbauche(dateEmbauche);
		this->oMappPersonnel->setNom_Superieur(nomSuperieur);
		this->oMappPersonnel->setPrenom_Superieur(prenomSuperieur);
		sql = this->oMappPersonnel->Insert();

		this->oCad->actionRows(sql);
	}
}

System::Data::DataSet^ CLservices::selectionnerTousLePersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPersonnel->SelectAll();
	return this->oCad->getRows(sql, dataTableName);
}

// STATISTIQUES

System::Data::DataSet^ CLservices::selectionnerToutesLesDonnees(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStats->SelectAll();
	return this->oCad->getRows(sql, dataTableName);
}