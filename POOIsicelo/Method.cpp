#include "class.h"
#include <iostream>
#include <string>

using namespace std;

Commande::Commande(int taille) {
	this->taille = taille;
	this->index = 0;
	Tab_Commande = new Article* [this->taille];
	Tab_Nombre = new int [this->taille];
	
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

void Commande::addReference() {
	//Reference = 
}

void Commande::getArticle() {

}

void Commande::editCommande(string Reference) {

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

void MClient::setId(int Id)
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

int MClient::getId(void) { return this->idClient; }
System::String^ MClient::getNom(void) { return this->nom; }
System::String^ MClient::getPrenom(void) { return this->prenom; }
System::String^ MClient::getNom(void) { return this->dateNaissance; }
System::String^ MClient::getPrenom(void) { return this->datePremierAchat; }

// REQUETES SQL CLIENT

System::String^ MClient::Insert(void)
{
	return "INSERT INTO Client (nom, prenom, date_Naissance_Client, date_Premier_Achat_Client) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateNaissance + "','" + this->datePremierAchat + "');";
}


// DEBUT ADRESSE



// FIN CLIENT

// DEBUT STATISTIQUES

System::String^ Stats::CalculCA(int mois, int annee){
	return "SELECT * FROM Gestion_des_commandes WHERE MONTH(Date_Paiement_Commande) =" + mois + "AND  YEAR(Date_Paiement_Commande) =" + annee + ";";
}

// FIN STATISTIQUES



//Commande

System::String^ MCommande::Select(void)
{
	return "";
}
System::String^ MCommande::Insert(void)
{
	return "";
}
System::String^ MCommande::Delete(void)
{
	return "";
}
System::String^ MCommande::Update(void)
{
	return "";
}
void MCommande::setId(int IDCommande)
{
	this->IDcommande = IDCommande;
}
void MCommande::setRef(System::String^ Ref)
{
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
int MCommande::getId(void) { return this->IDcommande; }
System::String^ MCommande::getRef(void) { return this->Reference; }
System::String^ MCommande::getDateE(void) { return this->Date_Envoi; }
System::String^ MCommande::getDateL(void) { return this->Date_Livraison; }

//Connexion BDD

CLcad::CLcad(void) {

	this->sCnx = "Data Source=tcp:10.162.128.65,49172;Initial Catalog=testeisiclo;Persist Security Info=True;User ID=valentin;Password=2021";

	this->sSql = "Rien";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}
void CLcad::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();
	this->oCnx->Close();
}

//Gestion BDD

CLservices::CLservices(void)
{
	this->oCad = gcnew CLcad();
	this->oMappTB = gcnew MCommande();
}

System::Data::DataSet^ CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void CLservices::ajouterUneCommande(System::String^ DateE, System::String^ DateL)
{
	System::String^ sql;

	this->oMappTB->setDateE(DateE);
	this->oMappTB->setDateL(DateL);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void CLservices::deleteUneCommande(System::String^ id)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt64(id));
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
void CLservices::updateUneCommande(System::String^ id, System::String^ DateE, System::String^ DateL)
{
	System::String^ sql;

	this->oMappTB->setId(System::Convert::ToInt64(id));
	this->oMappTB->setDateE(DateE);
	this->oMappTB->setDateL(DateL);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}