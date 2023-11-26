#include <stdio.h>
#include <stdlib.h>


int main() {
    system("chcp 65001");
    int n;
    printf("Введіть розмір масиву:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Введить елемент на %d позиції: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nВхідний масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    int min = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (min == -1 || arr[i] < arr[min]) {
                min = i;
            }
        }
    }

    if (min != -1) {
        printf("Номер мінімального позитивного елементу: %d\n", min);
    } else {
        printf("У масиві немає позитивних елементів.\n");
    }

    return 0;
}