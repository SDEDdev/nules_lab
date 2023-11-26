#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int rows = 3;
    int cols = 3;

    // Динамічне виділення пам'яті для матриці
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Заповнення матриці
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i == j ? 1 : 0;
        }
    }

    printf("\nВведена матриця:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    // Знайдемо максимальне значення
    int max_value = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }

    // Виведемо індекси елементів з максимальним значенням
    printf("Елементи з максимальним значенням %d мають індекси:\n", max_value);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == max_value) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // Звільнення виділеної пам'яті
    for (int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
