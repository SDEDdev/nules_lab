#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001");
    /**
      * Завдання 2
      */
    // Введення значень x, y, z
    double x, y, z, b;
    printf("Введіть значення x: ");
    scanf("%lf", &x);
    printf("Введіть значення y: ");
    scanf("%lf", &y);
    printf("Введіть значення z: ");
    scanf("%lf", &z);

    // Розрахунок виразу b
    double denominator = 2 * x * x - 3;

    if (denominator != 0) {
        b = sqrt(1 - (x*z + y) / denominator) - 2 * x * y * pow(10, 3);
        printf("Значення виразу b: %.2lf\n", b);
    } else {
        printf("Дільник дорівнює нулю, вираз не визначений.\n");
    }

    return 0;
}
