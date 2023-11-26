#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int a, b, c, max;
    printf("Введіть перше число: ");
    scanf("%d", &a);
    printf("Введіть друге число: ");
    scanf("%d", &b);
    printf("Введіть третє число: ");
    scanf("%d", &c);
    max = a;
    if (b > a) max = b;
    if (c > b) max = c;
    printf("Максимальне число - %d", max);
    return 0;
}
