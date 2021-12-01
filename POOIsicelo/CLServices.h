#pragma once
#include <string>
#include "CLCad.h"
#include "CLCommande.h"
#include "CLPersonne.h"

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
	System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
	System::Data::DataSet^ recupCommande(System::String^, System::String^);
	void ajouterUneCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, float, short);
	void deleteUneCommande(System::String^);
	void updateUneCommande(System::String^, System::String^, System::String^);
	void ajouterUnClient(System::String^, System::String^, System::String^, System::String^);
	void ajouterUneAdresse(System::String^, System::String^, System::String^, System::String^);
	System::Data::DataSet^ selectionnerTousLesClients(System::String^);
	System::Data::DataSet^ selectionnerUnClient(System::String^, System::String^, System::String^, System::String^);
	void supprimerUnClient(System::String^, System::String^, System::String^, System::String^);
	void ajouterPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^);
	System::Data::DataSet^ selectionnerTousLePersonnel(System::String^);
	//System::Data::DataSet^ selectionnerPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^);
	//System::Data::DataSet^ selectionnerToutesLesDonnees(System::String^);
	void modifierUneAdresse(System::String^, System::String^, System::String^, System::String^, System::String^);

};
