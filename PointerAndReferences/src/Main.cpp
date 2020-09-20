#include<iostream>

int main()
{
	std::cout << "Pointer and References" << std::endl;

	// Null pointer
	{
		void* ptr = nullptr;
		int temp_var = 8;
		ptr = &temp_var;
	}
	
	// Variable creation in stack
	// Changing value of a address using pointer
	{
		int* ptr_1 = nullptr;
		int temp_var_1 = 6;
		ptr_1 = &temp_var_1;
		*ptr_1 = 12;
	}

	// Variable creation at heap
	{
		char* buffer = new char[8];
		memset(buffer, 0, 8);

		char** ptr_2 = &buffer;

		delete[] buffer;
		delete ptr_2;
	}

	std::cout << "Press Enter to exit." << std::endl;
	std::cin.get();
}