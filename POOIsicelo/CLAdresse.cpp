#include "CLPersonne.h"
#include <string>

int MAdresse::getIdAdresse(void) { return this->idAdresse; }
System::String^ MAdresse::getNumero(void) { return this->Numero; }
System::String^ MAdresse::getRue(void) { return this->Rue; }
System::String^ MAdresse::getVille(void) { return this->Ville; }
System::String^ MAdresse::getCodePostal(void) { return this->Code_postal; }

void MAdresse::setIdAdresse(int Id)
{
	this->idAdresse = Id;
}
void MAdresse::setNumero(System::String^ num)
{
	this->Numero = num;
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
	return "IF NOT EXISTS (SELECT * FROM ville WHERE nom_ville ='" + this->Ville + "' AND code_postal='" + this->Code_postal + "') INSERT INTO ville (nom_ville, code_postal) VALUES ('" + this->Ville + "','" + this->Code_postal + "');";
}

System::String^ MAdresse::InsertAdresse(void)
{
	return "INSERT INTO adresse(numero, rue, IDville) VALUES('" + this->Numero + "', '" + this->Rue + "', (SELECT IDville FROM ville WHERE nom_ville = '" + this->Ville + "')); ";
}

System::String^ MAdresse::Update(short idclient)
{
	return"UPDATE Gestion_des_Clients SET IDadresse = (SELECT TOP 1 IDadresse FROM adresse INNER JOIN ville on adresse.IDVILLE = ville.IDville WHERE numero ='" + this->Numero + "' AND rue ='" + this->Rue + "' AND nom_ville ='" + this->Ville + "' AND code_postal ='" + this->Code_postal + "') WHERE masque = 1 AND ID_Numero_Client ='" + idclient + "'; ";

}

System::String^ MAdresse::UpdatePersonnel(short idPersonnel)
{
	return"UPDATE Gestion_du_Personnel SET IDadresse = (SELECT TOP 1 IDadresse FROM adresse INNER JOIN ville on adresse.IDVILLE = ville.IDville WHERE numero ='" + this->Numero + "' AND rue ='" + this->Rue + "' AND nom_ville ='" + this->Ville + "' AND code_postal ='" + this->Code_postal + "') WHERE masque_perso = 1 AND ID_Personnel ='" + idPersonnel + "'; ";

}