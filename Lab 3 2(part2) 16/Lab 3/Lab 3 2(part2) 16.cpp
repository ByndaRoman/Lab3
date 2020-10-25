#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_CTYPE, "RU");

    int n;

    printf("Введiть число мiсяця");
    scanf_s("%d",&n);

    if ((n > 0) && (n < 13))
    {
        switch (n)
        {
        case 1: printf("Сiчень"); break;
        case 2: printf("Лютий"); break;
        case 3: printf("Березень"); break;
        case 4: printf("Квiтень"); break;
        case 5: printf("Травень"); break;
        case 6: printf("Червень"); break;
        case 7: printf("Липень"); break;
        case 8: printf("Серпень"); break;
        case 9: printf("Вересень"); break;
        case 10: printf("Жовтень"); break;
        case 11: printf("Листопад"); break;
        case 12: printf("Грудень"); break;
        }
    }
}