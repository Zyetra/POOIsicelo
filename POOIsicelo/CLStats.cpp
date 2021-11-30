#include "CLStats.h"
#include <string>


System::String^ Stats::CalculCA(int mois, int annee) {
	return "SELECT * FROM Gestion_des_commandes WHERE MONTH(Date_Paiement_Commande) =" + mois + "AND  YEAR(Date_Paiement_Commande) =" + annee + ";";
}