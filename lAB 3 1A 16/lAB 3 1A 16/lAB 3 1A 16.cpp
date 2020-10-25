#include <iostream>
#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "RU");
    int a, i = 0;
    double c, rez;
    printf("Введiть значення а ");
    scanf_s("%d", &a);
    printf("Введiть значення c ");
    scanf_s("%lf", &c);
    if (a == 2)
    {
        rez = (pow(a, 2) - 4 * c) / ((4 * a) * c);
        printf("Результат = %lf", rez);
    }
    else
    {
        i++;
    }

    if (a == 4)
    {
        rez = a * c - (2 * a);
        if (rez > 0)
        {
            rez = sqrt(rez);
            printf("Результат = %lf", rez);
        }
        else if (rez == 0)
        {
            printf("Результат = 0");
        }
        else
        {
            printf("Значення виразу пiд коренем менше 0");
        }
    }
    else
    {
        i++;
    }

    if (a == 6)
    {
        rez = c * c - (4 * a);
        printf("Результат = %lf", rez);
    }
    else
    {
        i++;
    }

   if(i == 3)
    {
        printf("Результат вивести не можна");
    }
}

