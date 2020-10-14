// lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Russian");
    int n, m, k, min, *pmin, * mas;
	printf("введите m и n\n");
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	mas = (int*)malloc(n * m * sizeof(int));
	for (int i = 0; i < n; i++) for(int j=0;j<m;j++)
		{
		printf("введите a[%d][%d]: ", i,j);
		scanf_s("%d", mas+i*m+j);
		}
	min = *mas;
	pmin = mas;	
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
		if (*(mas + i * m + j) < min) {
			pmin = mas + i * m + j;
			min = *(mas + i * m + j);
		}
	}
	k = -1;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
		if (*(mas + i * m + j) % min == 0) k++;
	}
	printf("чисел кратных %d: %d", *pmin, k);
	system("PAUSE");
	return 0;    
}
