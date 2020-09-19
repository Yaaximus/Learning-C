#include<iostream>
#include<string>

#define INTEGER int

void Log(std::string message);

INTEGER Multiply_temp(int x, int y)
{
	INTEGER result = x * y;
	return result;
#include"EndBrace.h"


int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyandLog(int a, int b)
{
	int temp_result = Multiply(a, b);
	Log("Result of multiplication is: ");
	Log(std::to_string(temp_result));
}