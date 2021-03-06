#include "CLServices.h"
#include "CLCad.h"
#include "CLCommande.h"
#include "CLPersonne.h"
#include "CLStats.h"
#include <string>


CLservices::CLservices(void)
{
	this->oCad = gcnew CLcad();
	this->oMappCommande = gcnew MCommande();
	this->oMappAdresse = gcnew MAdresse();
	this->oMappClient = gcnew MClient();
	this->oMappPersonnel = gcnew MPersonnel();
	this->oMappArticle = gcnew MArticle();
	this->oMappStats = gcnew MStats();
}

// COMMANDE

System::Data::DataSet^ CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName, System::String^ Ref)
{
	System::String^ sql;

	this->oMappCommande->desRef(Ref);
	sql = this->oMappCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservices::selectionnerToutLesArticles(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oMappCommande->SelectArticle();
	return this->oCad->getRows(sql, dataTableName);
}

System::String^ CLservices::recupVille(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient) {
	System::String^ sql;

	sql = this->oMappCommande->SelectVille(nomClient, prenomClient, dateNaissanceClient);
	return this->oCad->DataRead(sql);
}
void CLservices::ajouterUneCommande(System::String^ DateE, System::String^ DateL, System::String^ Nom, System::String^ Prenom, System::String^ DateP, System::String^ MoyenP, System::String^ DateN, float MontantP, short NombreP)
{
	System::String^ sql;

	System::String^ VilleL = this->recupVille(Nom, Prenom, DateN);
	int IDClient = this->setIDClient(Nom, Prenom, DateN);
	this->oMappCommande->setIDClient(IDClient);
	this->oMappCommande->setRef(Nom, Prenom, VilleL);
	this->oMappCommande->setDateE(DateE);
	this->oMappCommande->setDateL(DateL);
	this->oMappCommande->setPaiement(DateP, MontantP, NombreP, MoyenP);
	sql = this->oMappCommande->Insert();

	this->oCad->actionRows(sql);
}

System::String^ CLservices::recupAdresse(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient) {
	System::String^ sql;
	System::String^ rue;
	System::String^ numero;
	System::String^ Ville;

	sql = this->oMappCommande->recupNumero(nomClient, prenomClient, dateNaissanceClient);
	numero = this->oCad->DataRead(sql);

	sql = this->oMappCommande->recupRue(nomClient, prenomClient, dateNaissanceClient);
	rue = this->oCad->DataRead(sql);

	Ville = this->recupVille(nomClient, prenomClient, dateNaissanceClient);

	return numero + " " + rue + ", " + Ville;

}


int CLservices::setIDClient(System::String^ nomClient, System::String^ prenomClient, System::String^ dateNaissanceClient) {
	System::String^ sql;

	sql = this->oMappCommande->SelectIDClient(nomClient, prenomClient, dateNaissanceClient);
	return this->oCad->DataReadID(sql);
}

void CLservices::deleteUneCommande(System::String^ Ref)
{
	System::String^ sql;

	this->oMappCommande->desRef(Ref);
	sql = this->oMappCommande->Delete();

	this->oCad->actionRows(sql);
}
void CLservices::updateUneCommande(System::String^ Ref, System::String^ DateE, System::String^ DateL, System::String^ MoyenP, System::String^ DateP)
{
	System::String^ sql;

	this->oMappCommande->desRef(Ref);
	this->oMappCommande->updMoyenPaiement(MoyenP, DateP);
	this->oMappCommande->setDateE(DateE);
	this->oMappCommande->setDateL(DateL);
	sql = this->oMappCommande->Update();

	this->oCad->actionRows(sql);
}
System::String^ CLservices::ajouterArticleCommande(System::String^ NomArticle, short Quantite) {

	System::String^ sql;

	short IDArticle = System::Convert::ToInt16(this->recupIDArticle(NomArticle));
	this->oMappCommande->addArticleCommande(IDArticle, Quantite);
	return"oui";
}

System::String^ CLservices::recupIDArticle(System::String^ NomArticle) {
	System::String^ sql;

	sql = this->oMappCommande->recupIDArticle(NomArticle);
	return this->oCad->DataRead(sql);
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

void CLservices::modifierUneAdresse(System::String^ number, System::String^ street, System::String^ city, System::String^ postalCode, System::String^ idclient)
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

	sql = "";

	short ID_Client = System::Convert::ToInt16(idclient);

	sql = this->oMappAdresse->Update(ID_Client);
	this->oCad->actionRows(sql);

}

// PERSONNEL

void CLservices::ajouterPersonnel(System::String^ nomPersonnel, System::String^ prenomPersonnel, System::String^ dateEmbauche, System::String^ nomSuperieur, System::String^ prenomSuperieur) {

	{
		System::String^ sql;

		this->oMappPersonnel->setNomPersonnel(nomPersonnel);
		this->oMappPersonnel->setPrenomPersonnel(prenomPersonnel);
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

System::Data::DataSet^ CLservices::selectionnerPersonnel(System::String^ dataTableName, System::String^ nomPersonnel, System::String^ prenomPersonnel, System::String^ date_embauche)
{
	System::String^ sql;
	this->oMappPersonnel->setNomPersonnel(nomPersonnel);
	this->oMappPersonnel->setPrenomPersonnel(prenomPersonnel);
	this->oMappPersonnel->setDateEmbauche(date_embauche);

	sql = this->oMappPersonnel->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void CLservices::supprimerPersonnel(System::String^ nomPersonnel, System::String^ prenomPersonnel, System::String^ dateEmbauche, System::String^ idPersonnel)
{
	System::String^ sql;

	this->oMappPersonnel->setIdPersonnel(int::Parse(idPersonnel));
	this->oMappPersonnel->setNomPersonnel(nomPersonnel);
	this->oMappPersonnel->setPrenomPersonnel(prenomPersonnel);
	this->oMappPersonnel->setDateEmbauche(dateEmbauche);

	sql = this->oMappPersonnel->Delete();
	this->oCad->actionRows(sql);
}

void CLservices::modififerSuperieur(System::String^ nomSuperieur, System::String^ prenomSuperieur, System::String^ idPersonnel)
{
	System::String^ sql;

	this->oMappPersonnel->setNom_Superieur(nomSuperieur);
	this->oMappPersonnel->setPrenom_Superieur(prenomSuperieur);

	short ID_Personnel = System::Convert::ToInt16(idPersonnel);

	sql = this->oMappPersonnel->Update(ID_Personnel);
	this->oCad->actionRows(sql);

}

void CLservices::modifierAdressePersonnel(System::String^ number, System::String^ street, System::String^ city, System::String^ postalCode, System::String^ idPersonnel)
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

	sql = "";

	short ID_Personnel = System::Convert::ToInt16(idPersonnel);

	sql = this->oMappAdresse->UpdatePersonnel(ID_Personnel);
	this->oCad->actionRows(sql);

}
//Article

System::Data::DataSet^ CLservices::selectionnerTousLesArticles(System::String^ dataTableName) {
	System::String^ sql;


	sql = this->oMappArticle->SelectAll();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ CLservices::selectionnerUnArticles(System::String^ dataTableName, System::String^ reference) {
	System::String^ sql;
	this->oMappArticle->setReferenceArticle(reference);
	sql = this->oMappArticle->Selectone();
	return this->oCad->getRows(sql, dataTableName);
}

void CLservices::creationArticles(System::String^ NomArticle, System::String^ reference, System::String^ Taux_tva, System::String^ Prix_uht, System::String^ Quantit, System::String^ seuil) {
	{
		System::String^ sql;

		//this->oMappArticle->setIdArticle;
		this->oMappArticle->setNomArticle(NomArticle);
		this->oMappArticle->setReferenceArticle(reference);
		short Taux_TVA_Article = System::Convert::ToInt16(Taux_tva);
		this->oMappArticle->setTauxtva(Taux_TVA_Article);
		short Prix_UHT_Article = System::Convert::ToInt16(Prix_uht);
		this->oMappArticle->setPrixuht(Prix_UHT_Article);
		short Quantite_Article_Stock = System::Convert::ToInt16(Quantit);
		this->oMappArticle->setquantite(Quantite_Article_Stock);
		short Seuil_Reaprovisionnement_Article = System::Convert::ToInt16(seuil);
		this->oMappArticle->setquantite(Seuil_Reaprovisionnement_Article);
		sql = this->oMappArticle->InsertArticle();
		this->oCad->actionRows(sql);
	}
}
void CLservices::supArticles(System::String^ reference) {
	{
		System::String^ sql;
		this->oMappArticle->setReferenceArticle(reference);

		sql = this->oMappArticle->DeleteArticle();
		this->oCad->actionRows(sql);
	}
}

void CLservices::modifArticles(System::String^ NomArticle, System::String^ Taux_tva, System::String^ Prix_uht, System::String^ Quantit, System::String^ seuil, System::String^ reference) {
	{
		System::String^ sql;

		//this->oMappArticle->setIdArticle;
		this->oMappArticle->setNomArticle(NomArticle);
		this->oMappArticle->setReferenceArticle(reference);
		short Taux_TVA_Article = System::Convert::ToInt16(Taux_tva);
		this->oMappArticle->setTauxtva(Taux_TVA_Article);
		short Prix_UHT_Article = System::Convert::ToInt16(Prix_uht);
		this->oMappArticle->setPrixuht(Prix_UHT_Article);
		short Quantite_Article_Stock = System::Convert::ToInt16(Quantit);
		this->oMappArticle->setquantite(Quantite_Article_Stock);
		short Seuil_Reaprovisionnement_Article = System::Convert::ToInt16(seuil);
		this->oMappArticle->setquantite(Seuil_Reaprovisionnement_Article);
		sql = this->oMappArticle->UpdateArticle();
		this->oCad->actionRows(sql);
	}
}


// STATISTIQUES

System::Data::DataSet^ CLservices::selectionnerToutesLesDonnees(System::String^ dataTableName) {

	System::String^ sql;

	sql = this->oMappStats->SelectAll();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ CLservices::CalculCA(System::String^ mois, int annee) {
	System::String^ sql;

	this->oMappStats->setMois(mois);
	this->oMappStats->setAnnee(annee);
	sql = this->oMappStats->CalculCA(mois, annee);
	return this->oCad->getRows(sql, "Gestion_des_commandes");
}

System::Data::DataSet^ CLservices::checkList(int index) {
	System::String^ sql;

	this->oMappStats->setIndex(index);
	sql = this->oMappStats->checkList(index);
	return this->oCad->getRows(sql, "Gestion_des_commandes");
}
System::Data::DataSet^ CLservices::Simuler(int TVA, int marge, int remise, int demarque) {
	System::String^ sql;

	sql = this->oMappStats->Simuler(TVA, marge, remise, demarque);
	return this->oCad->getRows(sql, "Gestion_des_commandes");
}