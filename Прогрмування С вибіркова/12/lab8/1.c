#include <stdio.h>
#include "stdlib.h"
int main() {
    system("chcp 65001");
    int n = 20;
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Введить елемент на %d позиції: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nВхідний масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nЕлементи з максимальним значенням %d знаходяться за наступними індексами:\n", max);
    for (int i = 0; i < n; ++i) {
        if (arr[i] == max) {
            printf("array[%d]\n", i);
        }
    }

    return 0;
}
