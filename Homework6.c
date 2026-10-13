#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int N, sum = 0;
    printf("¬ведите число N (N < 1000): ");
    scanf("%d", &N);
    int temp = N;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (sum >= 10 && sum <= 99) {
        printf("—умма цифр = %d Ч двузначное число\n", sum);
    }
    else {
        printf("—умма цифр = %d Ч не двузначное число\n", sum);
    } 
}