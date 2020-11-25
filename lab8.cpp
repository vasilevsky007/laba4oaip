#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

void videlenie(char *konec, int dlina){
    char *slovo=konec-dlina;
    int a; char b;
    for (int i = 0; i < dlina; i++) {
        a = int(*(slovo+i)) - 32;
        b = char(a);
        *(slovo + i) = b;
    }

}

int main()
{
    setlocale(0, "Russian");
    int ksimv, kstr,glas=0,sogl=0,bukv=0;
    char **text,*slovo;
    printf("%c",char(67));
    printf("введите количество символовов в строке: ");
    scanf_s("%d", &ksimv);
    printf("введите количество строк: ");
    scanf_s("%d", &kstr); kstr++;
    printf("введите %d строк по %d символов:\n",kstr,ksimv);
    text = (char**)malloc(kstr * sizeof(char));
    slovo = (char*)malloc((ksimv*2 + 1) * sizeof(char));
    for (int i = 0; i < kstr; i++) {
        text[i] = (char*)malloc((ksimv + 1) * sizeof(char));
        gets_s(text[i],ksimv+1);
    }
    for (int i = 0; i < kstr; i++) for (int j = 0; j < ksimv; j++) {
        switch (text[i][j]) {
        case 'a':case 'e':case 'i':case 'o':case 'u':glas++; bukv++; break;
        case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'm':case 'n':case 'p':case 'q':case 'r':case 's':case 't':case 'v':case 'w':case 'x':case 'y':case'z': sogl++; bukv++; break;
        default: bukv++; break;
        case ' ':case'.':case',':case'\0': {
            if (sogl > glas) videlenie(&text[i][j],bukv);
            sogl = 0; glas = 0; bukv = 0; break;
        }}
    }
    for (int i = 0; i < kstr; i++) {
        puts(text[i]);
    }
    system("PAUSE");
    return 0;

}
