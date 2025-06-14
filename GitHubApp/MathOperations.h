#pragma once
#include <iostream>

struct MathOperations
{
	void plus(int l, int r)
	{
		std::cout << l + r << "\n";
	}

	void minus(int l, int r)
	{
		std::cout << l - r << "\n";
	}

	void multiply(int l, int r)
	{
		std::cout << l * r << "\n";
	}
	void divide(int l, int r)
	{
		std::cout << l / r << "\n";
	}
};