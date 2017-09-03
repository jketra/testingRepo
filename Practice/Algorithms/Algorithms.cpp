// Algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortAndFined.h"

int main()
{
	char ar[] = "abcdefghij";
	for (int i = 0; i < 10; ++i)
		std::cout << binarySearch(ar, sizeof(ar) / sizeof(*ar) - 1, ar[9 - i]) << std::endl;

	std::system("pause");
	return 0;
}

