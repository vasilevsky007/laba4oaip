#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(0, "Russian");
	int n,max,strmax,stmax,**mas;
	do {
		fflush(stdin);
		system("cls");
		printf("Введите размерность квадратной матрицы n: ");
	} while (scanf_s("%d", &n)!=1);
	mas = (int**)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) mas[i] = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			printf("mas[%d][%d]=", i, j);
			scanf_s("%d", *(mas + i) + j);
		}
	max = abs(mas[0][0]); strmax = 0; stmax = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (abs(mas[i][j]) > max) {
				max = abs(mas[i][j]);
				strmax = i;
				stmax = j;
			}
		}
	printf("исходный массив:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d \t", mas[i][j]);
		}
		printf("\n");
	}
	printf("наибольший модуль mas[%d][%d] : %d", strmax, stmax, max);
	for (int i = strmax; i < n - 1;i++) 
		for (int j = 0; j < n; j++) mas[i][j] = mas[i + 1][j];			
	for (int i = 0; i < n; i++)
		for (int j = stmax; j < n-1; j++) mas[i][j] = mas[i][j+1];
	printf("\nполучившийся массив: \n");
	mas = (int**)realloc(mas, (n - 1) * sizeof(int));
	for (int i = 0; i < n - 1; i++) mas[i] = (int*)realloc(mas[i], (n - 1) * sizeof(int));
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			printf("%d \t",mas[i][j]);
		}
		printf("\n");
	}
	free(mas);
	return 0;
	system("pause");
	}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
