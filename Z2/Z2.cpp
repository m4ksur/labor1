#define _CRT_SECURE_NO_WARNINGS//задание 2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <clocale>

int main() {

	char* locale = setlocale(LC_ALL, "");
	int i, n;
	scanf("%d", &n);
	int* a;
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		printf(" %d", a[i]);
	}

}
