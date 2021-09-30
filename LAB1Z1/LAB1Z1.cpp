using namespace std;//задание 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <iostream>

int main() {

	char* locale = setlocale(LC_ALL, "");
	int a[5], i, b = 0, c = 6;

	srand(time(0));

	for (i = 0; i < 5; i++)
		a[i] = 1 + rand() % 5;
	for (i = 0; i < 5; i++)
		cout << a[i] << " ";

	for (i = 0; i < 5; i++)
		if (a[i] > b)
			b = a[i];
	for (i = 0; i < 5; i++)
		if (a[i] < c)
			c = a[i];
	cout << '\n' << "max = " << b << '\n' << "min = " << c << '\n' << "RAZN = " << b - c;


}