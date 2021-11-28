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



Client::Client(std::string Name, std::string FirstName, std::string BornDate, std::string AchatDate) {
	Num_Client++;
	Nom = Name;
	Prenom = FirstName;
	Naissance = BornDate;
	Premier_Achat = AchatDate;
}

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

	this->sCnx = "Data Source=DESKTOP-2D93365\\MSS_BS;Initial Catalog=DB_P6;Persist Security Info=True;User ID=CNX_P6;Password=Random";

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