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
		if (r == 0)
		{
			std::cout << 0 << "\n";
			return;
		}

		std::cout << l / r << "\n";
	}

	void abs(int value)
	{
		std::cout << std::abs(value);
	}
};