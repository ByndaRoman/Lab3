#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "RU");
    int x, y, rez, a, b, c, d, e, f;
    printf("Введiть х ");
    scanf_s("%d", &x);
    printf("Введiть y ");
    scanf_s("%d", &y);

    a = x + y;
    b = x * x + x * y - y * y;
    c = x;
    d = 1 - y * y;
    e = y;
    f = 1 + x * x;
    if ((b == 0) || (d == 0) || (f == 0))
    {
        printf("Неможливо вищитати");
    }
    else
    {
        rez = (a / b) + (c/d) + (e/f);
        printf("Результат = %d", rez);
    }


}