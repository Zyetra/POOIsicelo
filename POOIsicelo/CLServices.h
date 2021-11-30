#pragma once
#include <string>
#include "CLCad.h"
#include "CLCommande.h"
#include "CLPersonne.h"

ref class CLservices
{
private:
	CLcad^ oCad;
	MCommande^ oMappCommande;
	MClient^ oMappClient;
	MAdresse^ oMappAdresse;
public:
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
};
