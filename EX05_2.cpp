// EX05_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		T currentMin = list[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < size; j++)
		{
			if (currentMin > list[j])
				return false;
			else
				return true;
		}
	}
}

int main()
{
	int list1[3] = { 1, 2, 3 };
	double list2[3] = { 1.1, 2.2, 3.3 };
	string list3[3] = { "joe", "abby", "sam" };

	cout << isSorted(list1, 3) << endl;
	cout << isSorted(list2, 3) << endl;
	cout << isSorted(list3, 3) << endl;


    return 0;
}

