
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    char c;
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
        if (y != 0)
            printf("=%f\n", x / y);
        else
            printf("Ошибка: деление на ноль!\n");
        break;
    default:
        printf("Неизвестная операция!\n");
        break;
    }
    return 0;
}