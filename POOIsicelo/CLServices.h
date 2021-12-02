#pragma once
#include <string>
#include "CLCad.h"
#include "CLCommande.h"
#include "CLPersonne.h"
#include "CLStats.h"

ref class CLservices
{
public:
	CLcad^ oCad;
	MCommande^ oMappCommande;
	MClient^ oMappClient;
	MAdresse^ oMappAdresse;
	MPersonnel^ oMappPersonnel;
	//MStats^ oMappStats;

	CLservices(void);
	// COMMANDE
	System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
	System::String^ recupVille(System::String^, System::String^, System::String^);
	void ajouterUneCommande(System::String^,System::String^ ,System::String^, System::String^, System::String^, System::String^, System::String^, float, short);
	void deleteUneCommande(System::String^);
	void updateUneCommande(System::String^, System::String^, System::String^, System::String^, System::String^);
	// CLIENT
	void ajouterUnClient(System::String^, System::String^, System::String^, System::String^);
	System::Data::DataSet^ selectionnerTousLesClients(System::String^);
	System::Data::DataSet^ selectionnerUnClient(System::String^, System::String^, System::String^, System::String^);
	void supprimerUnClient(System::String^, System::String^, System::String^, System::String^);
	// ADRESSE
	void ajouterUneAdresse(System::String^, System::String^, System::String^, System::String^);
	void modifierUneAdresse(System::String^, System::String^, System::String^, System::String^, System::String^);
	// PERSONNEL
	void ajouterPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^);
	System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
	System::Data::DataSet^ selectionnerPersonnel(System::String^, System::String^, System::String^, System::String^);
	void supprimerPersonnel(System::String^, System::String^, System::String^, System::String^);
	void modifierAdressePersonnel(System::String^, System::String^, System::String^, System::String^, System::String^);
	void modififerSuperieur(System::String^, System::String^, System::String^);
	// STATISTIQUES
	//System::Data::DataSet^ selectionnerToutesLesDonnees(System::String^);
	//Article
	System::Data::DataSet^ selectionnerToutLesArticles(System::String^ dataTableName);

};
