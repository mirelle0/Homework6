#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int check(double x, double y);

int main()
{
    setlocale(LC_ALL, "RUS");
    double x, y;
    int n;
    do
    {
        printf("Введите координаты x,y: ");
        scanf("%lf %lf", &x, &y);
        if (check(x, y))
        {
            printf("Точка принадлежит заданной области\n");
        }
        else
        {
            printf("Точка не принадлежит заданной области\n");
        }
        printf("Продолжить?(1-да, 0-нет):");
        scanf("%d", &n);
    } while (n == 1);
}

int check(double x, double y)
{
    if (x * x + y * y <= 4 && y >= x && x >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
