#include<iostream>

void IncrementUsingPointer(int* ptr)
{
	// Dereference the pointer first and then increment the value at the address
	(*ptr)++;
}

void IncrementUsingReference(int& ref)
{
	ref++;
}

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
	}

	// Refrence(Its like an alias)
	{
		int temp_var = 2;
		int& ref_temp_var = temp_var;

		std::cout << temp_var << std::endl;
		ref_temp_var = 4;
		std::cout << temp_var << std::endl;
	}

	// Changing value in function using pointers
	{
		std::cout << "Changing value in function using pointers" << std::endl;
		int temp_val = 3;
		IncrementUsingPointer(&temp_val);
		std::cout << temp_val << std::endl;
	}
	

	// Changing value in function using References
	{
		std::cout << "Changing value in function using References" << std::endl;
		int temp_val = 7;
		IncrementUsingReference(temp_val);
		std::cout << temp_val << std::endl;
	}
	

	std::cout << "Press Enter to exit." << std::endl;
	std::cin.get();
}