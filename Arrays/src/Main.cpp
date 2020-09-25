#include<iostream>
#include<array>

void SimpleArrayOnStack()
{
	int temp_array[5];

	for (int i = 0; i < 5; i++)
	{
		temp_array[i] = i;
		std::cout << "Array value " << i << " is : " << temp_array[i] << std::endl;
	}
}

void ArrayPointer()
{
	int temp_array[5];
	int* ptr = temp_array;

	for (int i = 0; i < 5; i++)
	{
		temp_array[i] = 2;
	}

	temp_array[2] = 5;
	*(ptr + 2) = 6;
}

void ArrayOnHeap()
{
	int* array_ptr = new int[5];

	for (int i = 0; i < 5; i++)
	{
		array_ptr[i] = 2;
	}

	delete[] array_ptr;
}

class Entity
{
public:
	static const int ExampleSize = 5;
	int Example[ExampleSize];

	Entity()
	{
		for (int i = 0; i < ExampleSize; i++)
		{
			Example[i] = 2;
		}
	}
};

void Cpp11StandardArray()
{
	std::array<int, 5> temp_array;

	for (int i = 0; i < temp_array.size(); i++)
	{
		temp_array[i] = 2;
	}
}

int main()
{
	std::cout << "============Arrays in C++==============" << std::endl;

	SimpleArrayOnStack();

	ArrayPointer();

	ArrayOnHeap();

	Entity e;

	Cpp11StandardArray();

	std::cout << "Press enter to Exit" << std::endl;
	std::cin.get();
}