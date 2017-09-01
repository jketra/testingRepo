#pragma once
#include "stdafx.h"

template <typename T>
int binarySearch(T const * const array, const size_t& size, const T& searchValue)
{
	if ((array == nullptr) || (!size) || (searchValue < array[0]) || (searchValue > array[size - 1]))
		return -1;

	try
	{
		size_t lowIndex = 0;
		size_t hightIndex = size - 1;

		size_t index = size / 2;

		while (true)
		{
			if ((array[index] < array[lowIndex]) || (array[index] > array[hightIndex]))
				return -1;
			if (array[index] == searchValue)
				return index;
			
			size_t nextIndex;
			if (array[index] < searchValue)
			{
				nextIndex = (hightIndex - index) / 2 + lowIndex;
				lowIndex = index + 1;
			}
			else
			{
				nextIndex = (index - lowIndex) / 2;
				hightIndex = index - 1;
			}
			index = nextIndex;
		}
	}
	catch (std::exception())
	{
		// log error
	}
}
