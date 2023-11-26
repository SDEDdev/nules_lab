#include <stdio.h>
#include <stdlib.h>

// Функція для знаходження найбільшого спільного дільника
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;

    }
    return x == 1;
}

int main() {
    system("chcp 65001");

    // Ввід вхідних даних
    int a = 12;
    int b = 22;
    // Обробка даних та вивід результатів
    if (gcd(a, b)) {
        printf("%d і %d є взаємно простими.\n", a, b);
    } else {
        printf("%d і %d не є взаємно простими.\n", a, b);
    }

    return 0;
}
