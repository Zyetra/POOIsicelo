#pragma once
#include <string>

ref class CLcad
{
private:
	System::String^ sSql;
	System::String^ sCnx;
	System::Data::SqlClient::SqlConnection^ oCnx;
	System::Data::SqlClient::SqlCommand^ oCmd;
	System::Data::SqlClient::SqlDataAdapter^ oDA;
	System::Data::DataSet^ oDs;
public:
	CLcad(void);
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
	System::String^ DataRead(System::String^);
	int DataReadID(System::String^);
};
