#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    char figura;
    float a, b, s;

    printf("Выберите фигуру:\n");
    printf("t - треугольник\n");
    printf("s - квадрат\n");
    printf("o - круг\n");
    printf("r - прямоугольник\n");
    printf("Введите букву: ");
    scanf(" %c", &figura);

    switch (figura)
    {
    case 't':
        printf("Введите основание и высоту треугольника: ");
        scanf("%f%f", &a, &b);
        s = a * b / 2;
        printf("Площадь треугольника = %f\n", s);
        break;

    case 's':
        printf("Введите сторону квадрата: ");
        scanf("%f", &a);
        s = a * a;
        printf("Площадь квадрата = %f\n", s);
        break;

    case 'o':
        printf("Введите радиус круга: ");
        scanf("%f", &a);
        s = 3.14159 * a * a;
        printf("Площадь круга = %f\n", s);
        break;

    case 'r':
        printf("Введите длину и ширину прямоугольника: ");
        scanf("%f%f", &a, &b);
        s = a * b;
        printf("Площадь прямоугольника = %f\n", s);
        break;

    default:
        printf("Такой фигуры нет!\n");
        break;
    }

    return 0;
}