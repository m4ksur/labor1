#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <cmath>

#define MAX_STUDENT 3

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;
	char insert[20];
	struct student
	{
		char famil[20];
		char name[20];
		char facult[20];
	} stud[MAX_STUDENT];


	for (i = 0; i < MAX_STUDENT; i++)
	{
		printf("������� ������� ��������: ");
		scanf("%s", &stud[i].famil);
		printf("������� ��� ��������: ");
		scanf("%s", &stud[i].name);
		printf("������� �������� ���������� ��������: ");
		scanf("%s", &stud[i].facult);
	}

	while (TRUE) {
		printf("\n���� �� ������ ����� (������� ��� ��� ��� ���������)? ");
		scanf("%s", &insert);
		printf("\n��������� ������:");
		for (i = 0; i < 3; i++)
		{
			if (strcmp(insert, stud[i].famil) == 0 or strcmp(insert, stud[i].name) == 0 or strcmp(insert, stud[i].facult) == 0)
			{
				printf("\n%s %s %s", stud[i].famil, stud[i].name, stud[i].facult);
			}
			else
			{
				if (strcmp(insert, stud[i].famil) > 1  and strcmp(insert, stud[i].name) > 1 and strcmp(insert, stud[i].facult) > 1)
					printf(" ������ �� ������� ");
			}
		}
	}

}
