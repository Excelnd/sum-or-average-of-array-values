// sum or average of array values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double values[5] = { 2, 4, 9, 8, 3 };
	double sum = 0;
	
	for (int i = 0; i < 5; i++) {
		sum = sum + values[i];
	}
	cout << sum;

    return 0;
}

