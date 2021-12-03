#include "CLStats.h"
#include <string>

void MStats::setMois(System::String^ mois) {
	this->mois = mois;
};
void MStats::setAnnee(int annee) {
	this->annee = annee;
};
void MStats::setIndex(int index) {
	this->index = index;
}

System::String^ MStats::SelectAll() {
	return "SELECT * FROM Gestion_des_commandes;";
}

System::String^ MStats::CalculCA(System::String^ mois, int annee) {
	if (mois == "Janvier") {
		moisInt = 1;
	}
	if (mois == "Février") {
		moisInt = 2;
	}
	if (mois == "Mars") {
		moisInt = 3;
	}
	if (mois == "Avril") {
		moisInt = 4;
	}
	if (mois == "Mai") {
		moisInt = 5;
	}
	if (mois == "Juin") {
		moisInt = 6;
	}
	if (mois == "Juillet") {
		moisInt = 7;
	}
	if (mois == "Août") {
		moisInt = 8;
	}
	if (mois == "Septembre") {
		moisInt = 9;
	}
	if (mois == "Octobre") {
		moisInt = 10;
	}
	if (mois == "Novembre") {
		moisInt = 11;
	}
	if (mois == "Décembre") {
		moisInt = 12;
	}
	return "USE v3 SELECT SUM(Montant_Total_TVA) AS Chiffre_affaire FROM Gestion_des_commandes WHERE MONTH(Date_Paiement_Commande) = " + moisInt + " AND YEAR(Date_Paiement_Commande) = " + annee + ";";
}

System::String^ MStats::checkList(int index) {
	switch (index)
	{
	case(0): 
		//Panier moyen après remise
		return "USE v3 SELECT AVG(Montant_Total_TTC) AS Montant_Total_TTC_moyen FROM Gestion_des_commandes;";
	case(1):
		//Valeur d'achat du stock
		return "USE v3 SELECT SUM(Prix_UHT_Article*Quantite_Article_Stock) AS valeur_commerciale FROM Gestion_des_articles";
	case(2):
		//valeur commerciale du stock
		return "USE v3 SELECT SUM((Prix_UHT_Article*Taux_TVA_Article/100+Prix_UHT_Article)*Quantite_Article_Stock) AS valeur_commerciale FROM Gestion_des_articles; ";
	case(3):
		//Produits sous seuil réappr.
		return "USE v3 SELECT * FROM Gestion_des_articles WHERE Quantite_Article_Stock < Seuil_Reaprovisionnement_Article;";
	case(4):
		//Montant total des achats pour un client
		return "USE v3 SELECT Nom_Client, Prenom_Client, SUM(Montant_Total_TTC) AS total_solde_client_toutes_commandes FROM Gestion_de_la_facturation INNER JOIN Gestion_des_clients  ON(Gestion_des_clients.ID_Numero_Client = Gestion_de_la_facturation.ID_Numero_Client) INNER JOIN Gestion_des_commandes  ON(Gestion_des_commandes.ID_Commande = Gestion_de_la_facturation.ID_Commande) GROUP BY Nom_Client, Prenom_Client";
	case(5):
		//10 articles les - vendus
		return "SELECT top 10 Influer.ID_Article ,Gestion_des_articles.Designation_Article, Sum(quantite) as quantite FROM Influer INNER JOIN Gestion_des_articles  ON (Gestion_des_articles.ID_Article=Influer.ID_Article)GROUP BY Influer.ID_Article ,Designation_Article ORDER BY quantite ASC;";
	case(6):
		//10 articles les + vendus
		return "SELECT top 10 Influer.ID_Article ,Gestion_des_articles.Designation_Article, Sum(quantite) as quantite FROM Influer INNER JOIN Gestion_des_articles  ON (Gestion_des_articles.ID_Article=Influer.ID_Article)GROUP BY Influer.ID_Article ,Designation_Article ORDER BY quantite DESC;";
	default:
		return ";";
	}
}

System::String^ MStats::Simuler(int TVA, int marge, int remise, int demarque) {
	return "use v3 UPDATE Gestion_des_articles SET ID_TVA = 3 SELECT SUM(((Prix_UHT_Article * " + marge + " / 100) + (-Prix_UHT_Article * " + remise + "/ 100) + (-Prix_UHT_Article * " + demarque + " / 100) + Prix_UHT_Article)* Quantite_Article_Stock) AS valeur_commerciale from Gestion_des_articles INNER JOIN TVA  ON(Gestion_des_articles.ID_TVA = TVA.ID_TVA); ";
}
