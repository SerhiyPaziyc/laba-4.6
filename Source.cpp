#include <iostream>
#include <cmath>
#include "Source.h"
using namespace std;
int main () {
	double P, S;
	int j, i;
	S = 1;
	j = 2;
	while (j <= 20)

	{
		P = 0;
		i = j*j;
		while (i <= 400)

		{
			P += (1. * i);
			i++;

		}
		S *= j / (j * j + P);
		j++;

	}
	cout << S << endl;
	S = 1;
	j = 2;
	do
	{
		P = 0;
		i = j*j;
		do
		{
			P += (1. * i);
			i++;
		} while (i <= 400);
		S *= j / (j * j + P);
		j++;
	} while (j <= 20);
	cout << S << endl;
	S = 1;
	for (j = 2; j <= 20; j++)

	{
		P = 0;
		for (i = j*j; i <= 400; i++)

		{
			P += (1. * i);

		}
		S *= j / (j * j + P);

	}
	cout << S << endl;
	S = 1;
	for (j = 20; j >= 2; j--)

	{
		P = 0;
		for (i = 400; i >= j*j; i--)

		{
			P += (1. * i);
		}
		S *= j / (j * j + P);
	}
	cout << S << endl;
	return 0;
}