#include "class.h"
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <time.h>
#include <sstream>

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
	return "INSERT INTO Client (nom, prenom, date_Naissance_Client, date_Premier_Achat_Client, IDadresse) VALUES('" + this->nom + "','" + this->prenom + "','" + this->dateNaissance + "','" + this->datePremierAchat + "', (SELECT MAX(IDadresse) FROM adresse))";
}

// FIN CLIENT

// DEBUT ADRESSE

void CLservices::ajouterUneAdresse(System::String^ number, System::String^ street, System::String^ city, System::String^ postalCode) {

	{
		System::String^ sql;

		this->oMappAdresse->setNumero(number);
		this->oMappAdresse->setRue(street);
		this->oMappAdresse->setVille(city);
		this->oMappAdresse->setCodePostal(postalCode);

		sql = this->oMappAdresse->InsertVille();
		this->oCad->actionRows(sql);

		sql = "";

		sql = this->oMappAdresse->InsertAdresse();
		this->oCad->actionRows(sql);
	}
}

int MAdresse::getIdAdresse(void) { return this->idAdresse; }
System::String^ MAdresse::getNumero(void) { return this->Numero; }
System::String^ MAdresse::getRue(void) { return this->Rue; }
System::String^ MAdresse::getVille(void) { return this->Ville; }
System::String^ MAdresse::getCodePostal(void) { return this->Code_postal; }

void MAdresse::setIdAdresse(int Id)
{
	this->idAdresse = Id;
}
void MAdresse::setNumero(System::String^ number)
{
	this->Numero = number;
}
void MAdresse::setRue(System::String^ street)
{
	this->Rue = street;
}

void MAdresse::setVille(System::String^ City) 
{
	this->Ville = City;
}

void MAdresse::setCodePostal(System::String^ PostalCode) 
{
	this->Code_postal = PostalCode;
}


		// REQUETES SQL ADRESSE

System::String^ MAdresse::InsertVille(void) 
{
	return "IF NOT EXISTS (SELECT * FROM ville WHERE nom_ville =" + this->Ville + " AND code_postal=" + this->Code_postal + ") INSERT INTO Ville (nom_ville, code_postal) VALUES (" + this->Ville + "," + this->Code_postal + ")";
}

System::String^ MAdresse::InsertAdresse(void)
{
	return "INSERT INTO adresse (numero, rue, IDville) VALUES (" + this->Numero + ", " + this->Rue + ", (SELECT IDville FROM ville WHERE nom_ville=" + this->Ville + "))";
}

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
	//return "INSERT INTO [dbo].[commande]([reference_commande],[date_livraison],[date_envoi],[quantite_totale_article],[quantite_article],[montant_total_ht],[montant_total_ttc],[montant_total_tva],[masque],[IDpersonnel],[IDclient],[IDpaiment])VALUES('"this->Reference"' ,'"this->Date_Livraison"','"this->Date_Envoi"',2,4,3000,3250,3500,1,'"this->IDpersonnel"','"this->IDclient"','"this->IDpaiement"');";
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
void MCommande::setPaiement(System::String^ DateP, System::String^ MoyenP, float MontantP, int NombreP) {
	this->Moyen_Paiement = MoyenP;
	string DatePP = msclr::interop::marshal_as<string>(DateP);
	string Cache;
	int value = 0;

	if (NombreP == 1) {
		this->Date_Paiement1 = DateP;
		this->Montant_Paiement = MontantP;
	}
	else if (NombreP == 2) {
		this->Date_Paiement1 = DateP;
		Cache = DatePP.substr(3, 2);
		stringstream intValue(Cache);
		intValue >> value;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(3, 2, Cache);
		System::String^ Convertion = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement2 = Convertion;
		this->Montant_Paiement = MontantP / 2;
	}
	else if (NombreP == 3) {
		this->Date_Paiement1 = DateP;
		Cache = DatePP.substr(3, 2);
		stringstream intValue(Cache);
		intValue >> value;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(3, 2, Cache);
		System::String^ Convertion = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement2 = Convertion;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(3, 2, Cache);
		System::String^ Convertion2 = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement3 = Convertion2;
		this->Montant_Paiement = MontantP / 3;
	}
	else {
		this->Date_Paiement1 = DateP;
		Cache = DatePP.substr(3, 2);
		stringstream intValue(Cache);
		intValue >> value;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(3, 2, Cache);
		System::String^ Convertion = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement2 = Convertion;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(3, 2, Cache);
		System::String^ Convertion2 = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement3 = Convertion2;
		value++;
		if (value < 10) {
			Cache = "0" + to_string(value);
		}
		else {
			Cache = to_string(value);
		}
		DatePP.replace(3, 2, Cache);
		System::String^ Convertion3 = msclr::interop::marshal_as<System::String^>(DatePP);
		this->Date_Paiement4 = Convertion3;
		this->Montant_Paiement = MontantP / 4;
	}
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

System::Data::DataSet^ CLservices::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void CLservices::ajouterUneCommande(System::String^ DateE, System::String^ DateL, System::String^ Nom, System::String^ Prenom, System::String^ VilleL, System::String^ DateP, System::String^ MoyenP, float MontantP, int NombreP)
{
	System::String^ sql;

	this->oMappTB->setRef(Nom, Prenom, VilleL);
	this->oMappTB->setDateE(DateE);
	this->oMappTB->setDateL(DateL);
	this->oMappTB->setPaiement(MoyenP, DateP, MontantP, NombreP);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void CLservices::deleteUneCommande(System::String^ Ref)
{
	System::String^ sql;

	this->oMappTB->desRef(Ref);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
void CLservices::updateUneCommande(System::String^ Ref, System::String^ DateE, System::String^ DateL)
{
	System::String^ sql;

	this->oMappTB->desRef(Ref);
	this->oMappTB->setDateE(DateE);
	this->oMappTB->setDateL(DateL);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}