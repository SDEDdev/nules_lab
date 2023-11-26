#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001");
    /**
     * Завдання 1
     */
    printf("Завдання 1 ------\n");
    double x, y;
    // Введення значення x
    printf("Введіть значення x: ");
    scanf("%lf", &x);

    // Обчислення значення функції y = lg(3 * x - 6)
    if (3 * x - 6 > 0) {
        y = log10(3 * x - 6);
        printf("Значення функції y = lg(3 * x - 6) при x = %.2lf: %.2lf\n", x, y);
    } else {
        printf("Функція не визначена для введеного значення x.\n");
    }

    return 0;
}
