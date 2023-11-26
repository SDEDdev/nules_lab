#include <stdio.h>
#include "stdlib.h"
int main() {
    system("chcp 65001");

    int matrix[3][3] = {
            {1, 2, 3},
            {9, 5, 6},
            {7, 8, 9}
    };


    int max_value = matrix[0][0];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }

    printf("Елементи з максимальним значенням %d мають індекси:\n", max_value);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] == max_value) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
