// Imports
#include <iostream>
#include <string>

// Function Declerations
void Greetings();
void Signed_int();
void Unsigned_int();
void Get_data_types();
void decimal_data_type();
void boolean_data_type();
void Log(std::string message);
void MultiplyandLog(int a, int b);

// Main Function(Entry Point)
int main()
{
	// Hello World
	{
		Greetings();
	}

	// Data types
	{
		Signed_int();
		Unsigned_int();
		decimal_data_type();
		boolean_data_type();
		Get_data_types();
	}

	// Functions
	{
		MultiplyandLog(5, 5);
		MultiplyandLog(5, 6);
		MultiplyandLog(5, 7);
	}

	std::cout << "Press enter to exit." << std::endl;
	std::cin.get();
}

void Greetings()
{
	std::string temp_greeting = "Hello World!";
	Log(temp_greeting);
}

void Signed_int()
{
	int temp_variable = 8;
	std::cout << temp_variable << std::endl;
	temp_variable = -8;
	std::cout << temp_variable << std::endl;
}

void Unsigned_int()
{
	unsigned int temp_variable = 8;
	std::cout << temp_variable << std::endl;
	temp_variable = -8;
	std::cout << temp_variable << std::endl;
}

void Get_data_types()
{
	std::cout << "Data types:" << std::endl;
	std::cout << "char,short,int,long, long long" << std::endl;
	std::cout << "unsigned can come with these as well. For Decimal:" << std::endl;
	std::cout << "float, double, long double" << std::endl;
}

void decimal_data_type()
{
	float fload_variable = 5.5f;
	std::cout << "Float data type:" << std::endl;
	std::cout << fload_variable << std::endl;
	double double_variable = 5.2;
	std::cout << "Double data type:" << std::endl;
	std::cout << double_variable << std::endl;
}

void boolean_data_type()
{
	bool temp_boolean_variable = true;
	std::cout << "Boolean variable True:" << std::endl;
	std::cout << temp_boolean_variable << std::endl;
	temp_boolean_variable = false;
	std::cout << "Boolean variable False:" << std::endl;
	std::cout << temp_boolean_variable << std::endl;
	std::cout << "Size of bool data type in bytes:" << std::endl;
	std::cout << sizeof(bool) << std::endl;
}
