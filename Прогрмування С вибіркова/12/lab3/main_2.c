#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001");
    double x=3.7, a=-2, b=8.1, y,z;
    // Розрахунок виразу
    y = cbrt(x + 8.3) / (x + 0.3);
    // Виведення результату
    printf("Результат першої функції: %lf\n", y);


     z = (4 + pow(y, 2) + fabs(sin(x)) + a) / (fabs(sin(x)) + pow(y, 2) + 0.23);
    // Виведення результату
    printf("Результат другої функції: %lf\n", z);

    return 0;
}
