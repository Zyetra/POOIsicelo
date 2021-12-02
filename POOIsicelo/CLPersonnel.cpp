#include "CLPersonne.h"
#include <string>


void MPersonnel::setIdPersonnel(int Id)
{
	this->idPersonnel = Id;
}
void MPersonnel::setNomPersonnel(System::String^ nomPersonnel)
{
	this->nomPersonnel = nomPersonnel;
}
void MPersonnel::setPrenomPersonnel(System::String^ prenomPersonnel)
{
	this->prenomPersonnel = prenomPersonnel;
}
void MPersonnel::setNom_Superieur(System::String^ nomSuperieur)
{
	this->nomSuperieur = nomSuperieur;
}
void MPersonnel::setPrenom_Superieur(System::String^ prenomSuperieur)
{
	this->prenomSuperieur = prenomSuperieur;
}
void MPersonnel::setDateEmbauche(System::String^ dateEmbauche) {

	this->dateEmbauche = dateEmbauche;

}

int MPersonnel::getIdPersonnel(void) { return this->idPersonnel; }
System::String^ MPersonnel::getNomPersonnel(void) { return this->nomPersonnel; }
System::String^ MPersonnel::getPrenomPersonnel(void) { return this->prenomPersonnel; }
System::String^ MPersonnel::getNom_Superieur(void) { return this->nomSuperieur; }
System::String^ MPersonnel::getPrenom_Superieur(void) { return this->prenomSuperieur; }
System::String^ MPersonnel::getEmbauche(void) { return this->dateEmbauche; }

// REQUETES SQL CLIENT

System::String^ MPersonnel::Insert()
{
	return "INSERT INTO Gestion_du_personnel (Nom_Personnel, Prenom_Personnel, Date_Embauche_Personnel, Nom_Superieur, Prenom_Superieur, IDadresse, masque_perso) VALUES('" + this->nomPersonnel + "','" + this->prenomPersonnel + "','" + this->dateEmbauche + "','" + this->nomSuperieur + "','" + this->prenomSuperieur + "', (SELECT MAX(IDadresse) FROM adresse), 1); ";
}

System::String^ MPersonnel::SelectAll()
{
	return "SELECT ID_Personnel, Nom_Personnel, Prenom_Personnel, Date_Embauche_Personnel, Nom_Superieur, Prenom_Superieur, numero, rue, nom_ville, code_postal FROM Gestion_du_Personnel INNER JOIN adresse ON Gestion_du_Personnel.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE masque_perso = 1;";
}

System::String^ MPersonnel::Select()
{
	return "SELECT ID_Personnel, Nom_Personnel, Prenom_Personnel, Date_Embauche_Personnel, Nom_Superieur, Prenom_Superieur, numero, rue, nom_ville, code_postal FROM Gestion_du_Personnel INNER JOIN adresse ON Gestion_du_Personnel.IDadresse = adresse.IDadresse INNER JOIN ville ON adresse.IDville = ville.IDville WHERE masque_perso = 1 AND Nom_Personnel ='" + this->nomPersonnel + "' AND Prenom_Personnel ='" + this->prenomPersonnel + "' AND Date_Embauche_Personnel ='" + this->dateEmbauche + "';";
}

System::String^ MPersonnel::Delete()
{
	return "UPDATE Gestion_du_Personnel SET masque_perso = 0 WHERE ID_Personnel ='" + this->idPersonnel + "'AND Nom_Personnel = '" + this->nomPersonnel + "' AND Prenom_Personnel = '" + this->prenomPersonnel + "' AND Date_Embauche_Personnel = '" + this->dateEmbauche + "'; ";
}

System::String^ MPersonnel::Update(short idPersonnel)
{
	return "UPDATE Gestion_du_Personnel SET Nom_Superieur = '" + this->nomSuperieur + "', Prenom_Superieur = '" + this->prenomSuperieur + "' WHERE masque_perso = 1 AND ID_Personnel = '" + idPersonnel + "';";
}