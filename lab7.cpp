#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    setlocale(0, "Russian");
    int n,kon,sum=0;
    char *s,*ssum;
    printf("введите n: ");
    scanf_s("%d", &n);
    s = (char*)malloc((n + 1) * sizeof(char));
    
    rewind(stdin);
    gets_s(s, n + 1);
    printf("введенная строка:\n%s",s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '\0') break;
        if (s[i] == '1') { sum += 1;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '2') { sum += 2;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '3') { sum += 3;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '4') { sum += 4;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '5') { sum += 5;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '6') { sum += 6;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '7') { sum += 7;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '8') { sum += 8;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '9') { sum += 9;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }
        if (s[i] == '0') { sum += 0;for(int j=i; j<n; j++) { s[j] = s[j + 1]; } i--; }

    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '\0') kon=i;
    }
    int kzn,dec = 1;
    for (int i = 1; i < n; i++) {
        dec *= 10;
        if (sum / (dec) == 0) { kzn = i; break; }
    }
    ssum = (char*)malloc((kzn + 1) * sizeof(char));
    itoa(sum, ssum, 10);
    strncat(s, ssum, kzn);
    printf("\nполучившаяся строка:\n %s\n",s);
    system("PAUSE");
    return 0;
    
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
