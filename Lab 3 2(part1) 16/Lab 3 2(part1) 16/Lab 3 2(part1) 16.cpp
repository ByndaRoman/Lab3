#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "RU");
    int x, y;
    printf("Введiть х ");
    scanf_s("%d", &x);
    printf("Введiть y ");
    scanf_s("%d", &y);

    if ((x > 0) && (y > 0))
    {
        printf("Перша четверть");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("Друга четверть");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("Третья четверть");
    }
    else if ((x > 0) && (y < 0))
    {
        printf("Четверта четверть");
    }
    else if ((x == 0) && (y == 0))
    {
        printf("Точка стоiть у центерi");
    }
    else if ((x == 0) && (y != 0))
    {
        printf("На вici ордината");
    }
    else if ((x != 0) && (y == 0))
    {
        printf("На вiсi абсиса");
    }
}
