#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int N, sum;

    printf("Введите число N (N < 1000): ");
    if (scanf("%d", &N) != 1) {
        printf("Ошибка: введено не число!\n");
        return 1;
    }
    if (N >= 1000 || N < 0) {
        printf("Ошибка: N должно быть в диапазоне 0 <= N < 1000\n");
        return 1;
    }
    sum = N % 10 + (N / 10) % 10 + N / 100;
    if (sum >= 10 && sum <= 99) {
        printf("Сумма цифр = %d — двузначное число\n", sum);
    }
    else {
        printf("Сумма цифр = %d — не двузначное число\n", sum);
    }
    return 0;
}
