#include "CLCad.h"
#include <string>

CLcad::CLcad(void) {

	this->sCnx = "Data Source=tcp: 10.162.128.65,49151;Initial Catalog=v3;Persist Security Info=True;User ID=valentin;Password=2021";

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

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

System::String^ CLcad::DataRead(System::String^ sSql) {
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;

	SqlConnection^ connection = gcnew SqlConnection(sCnx);
	
	SqlCommand^ command = gcnew SqlCommand(sSql, connection);
		connection->Open();

		SqlDataReader^ reader = command->ExecuteReader();
		System::String^ VilleL;
		
		array<Object^>^ row = gcnew array<Object^>(reader->FieldCount);
		while (reader->Read())
		{
			VilleL = System::Convert::ToString((reader->GetSqlString(0)));
		}
		reader->Close();
		connection->Close();
		return VilleL;
	}

int CLcad::DataReadID(System::String^ sSql) {
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;

	SqlConnection^ connection = gcnew SqlConnection(sCnx);

	SqlCommand^ command = gcnew SqlCommand(sSql, connection);
	connection->Open();

	SqlDataReader^ reader = command->ExecuteReader();
	int ID;

	array<Object^>^ row = gcnew array<Object^>(reader->FieldCount);
	while (reader->Read())
	{
		ID = reader->GetInt32(0);
	}
	reader->Close();
	connection->Close();
	return ID;
}



