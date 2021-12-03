#pragma once
#include <string>

ref class MStats {
protected:
	//System::String^ SSQL;

public:
	System::String^ mois;
	int moisInt = 0;
	int annee;
	int index;
	void setMois(System::String^);
	void setAnnee(int);
	void setIndex(int);
	System::String^ SelectAll(void);
	System::String^ CalculCA(System::String^, int);
	System::String^ checkList(int index);
	System::String^ Simuler(int TVA, int marge, int remise, int demarque);
};