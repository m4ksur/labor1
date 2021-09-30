#include <stdio.h>// Задание 4
#include <conio.h>
#include <stdlib.h>
#include <clocale>

int main() {

	char* locale = setlocale(LC_ALL, "");
	int a[6][5], m, n, min = 1000, sum = 0;
	for (m = 0; m < 6; m++)

	{
		for (n = 0; n < 5; n++)

		{
			a[m][n] = rand() % 10;
		}

	}

	printf("Сгенерированная матрица:\n");

	for (m = 0; m < 6; m++)

	{
		for (n = 0; n < 5; n++)

		{
			printf("%4d ", a[m][n]);
		}
		printf("\n");
	}

	printf("\nCуммы столбцов:");

	for (n = 0; n < 5; n++)
	{

		for (m = 0; m < 6; m++)

		{
			sum += a[m][n];
		}

		printf("%4d", sum);

		sum = 0;

	}

	_getch();
	return 0;

}