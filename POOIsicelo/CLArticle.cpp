#include "CLArticle.h"
#include <string>

void MArticle::setIdArticle(int Id)
{
	this->idArticle = Id;
}
void MArticle::setNomArticle(System::String^ nom)
{
	this->NomArticle = nom;
}
void MArticle::setReferenceArticle(System::String^ Reference)
{
	this->reference = Reference;
}
void MArticle::setquantite(int Quantite_Article_Stock)
{
	this->Quantit = Quantite_Article_Stock;
}

void MArticle::setTauxtva(int Taux_TVA_Article) {

	this->Taux_tva = Taux_TVA_Article;

}

void MArticle::setPrixuht(int Prix_UHT_Article) {

	this->Prix_uht = Prix_UHT_Article;

}
void MArticle::setSeuil(int Seuil_Reaprovisionnement_Article) {

	this->seuille = Seuil_Reaprovisionnement_Article;

}



int MArticle::getIdArticle(void) { return this->idArticle; }
System::String^ MArticle::getNomArticle(void) { return this->NomArticle; }
System::String^ MArticle::getReference(void) { return this->reference; }
int MArticle::getquantite(void) { return this->Quantit; }
int MArticle::getTauxtva(void) { return this->Taux_tva; }
int MArticle::getPrixuht(void) { return this->Prix_uht; }
int MArticle::getseuil(void) { return this->seuille; }

System::String^ MArticle::SelectAll()
{
	return "SELECT *FROM Gestion_des_articles;";
}
System::String^ MArticle::Selectone()
{
	return "SELECT *FROM Gestion_des_articles WHERE Reference_Article='" + this->reference + "';";
}
System::String^ MArticle::InsertArticle()
{
	return "INSERT INTO Gestion_des_articles (Designation_Article,Reference_Article,Taux_TVA_Article,Prix_UHT_Article,Quantite_Article_Stock,Seuil_Reaprovisionnement_Article,ID_TVA,ID_Nature_Article)VALUES('" + this->NomArticle + "','" + this->reference + "','" + this->Taux_tva + "','" + this->Prix_uht + "','" + this->Quantit + "','"+ this->seuille+"','1','1');";
}
System::String^ MArticle::DeleteArticle()
{
	return "DELETE FROM Gestion_des_articles WHERE Reference_Article='"+ this->reference +"'; ";
}
System::String^ MArticle::UpdateArticle()
{
	return "UPDATE Gestion_des_articles SET Designation_Article='" + this->NomArticle + "',Taux_TVA_Article='" + this->Taux_tva + "',Prix_UHT_Article='" + this->Prix_uht + "',Quantite_Article_Stock='" + this->Quantit + "',Seuil_Reaprovisionnement_Article='" + this->seuille + "'WHERE [reference_article]='" + this->reference + "';";
}