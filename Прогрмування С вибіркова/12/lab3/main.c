#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001");
    float  x, y, z, denominator, numerator, a;
    printf("Введіть число x: ");
    scanf("%f", &x);
    printf("Введіть число y: ");
    scanf("%f", &y);
    printf("Введіть число z: ");
    scanf("%f", &z);

    //Розраховуємо чисельник
    numerator = (1 + (y / (pow(x, 2) + 3)));
    //Розраховуємо знаменник
    denominator = (pow(y, 2) + (1 / (pow(z, 2) + 4)));
    a = ((2 + x) * (numerator/denominator));
    printf("Результат: %f\n", a);
    return 0;
}
