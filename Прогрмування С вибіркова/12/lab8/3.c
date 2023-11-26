#include <stdio.h>
#include "stdlib.h"

#define ROWS 11
#define COLS 8

// Функція для знаходження середнього арифметичного масиву
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    system("chcp 65001");
    int matrix[ROWS][COLS];

    for(int i=0;i<ROWS;i++)
    {
        printf("Введіть %d рядок матриці з %d елементів\n", i+1, COLS);
        for(int j=0;j<COLS;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nВведена матриця:\n");
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < ROWS; i++) {
        int count = 0;
        float rowAverage = calculateAverage(matrix[i], COLS);

        // Підрахунок кількості елементів у рядку, які більше середнього
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > rowAverage) {
                count++;
            }
        }

        printf("Рядок %d: %d елементів більше за середнє арифметичне\n", i + 1, count);
    }

    return 0;
}
