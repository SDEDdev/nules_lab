#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001");
    /**
      * Завдання 3
      */
    double a, b, c, x, y, res = 0;
    int n;
    printf("Введіть значення a: ");
    scanf("%lf", &a);
    printf("Введіть значення b: ");
    scanf("%lf", &b);
    printf("Введіть значення c: ");
    scanf("%lf", &c);
    printf("Введіть значення x: ");
    scanf("%lf", &x);
    printf("Введіть значення y: ");
    scanf("%lf", &y);
    printf("Введіть число n: ");
    scanf("%d", &n);
    // Перевірка умови
    while (n > 5) {
        printf("n > 5. Введіть число менше 5, але більше 0: ");
        scanf("%d", &n);
    }
    switch (n) {
        case 1:
            res = a * pow(x, 2) + b * x + c;
            printf("Результат: %.2lf" , res);
            break;
        case 2:
            res = a * pow(x, 3) + 3 * b * x + pow(b, 3);
            printf("Результат: %.2lf", res);
            break;
        case 3:
            res = 4 * pow(sin(x), 2) + pow(cos(x), 2);
            printf("Результат: %.2lf", res);
            break;

        case 4:
            res = sqrt(abs(x - y)) * pow(cos(x), 2);
            printf("Результат: %.2lf", res);
            break;
        case 5:
            res = pow(tan(x), 2);
            printf("Результат: %.2lf", res);
            break;
    }
    return 0;
}
