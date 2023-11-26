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

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && (arr[i] % 2) == 0) {
            arr[i] = 0;
            cnt++;
        }
    }
    printf("\n\nКількість замінених елементів - %d:", cnt);
    printf("\nОброблений масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }


    return 0;
}