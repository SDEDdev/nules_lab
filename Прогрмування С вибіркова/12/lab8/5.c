#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 25
#define M 50
#define L 15

// Функція для обчислення середнього балу
float calculateAverage(int grades[M]) {
    int sum = 0;
    for (int i = 0; i < M; i++) {
        sum += grades[i];
    }
    return (float)sum / M;
}

int main() {
    system("chcp 65001");
    int grades[L][N][M];

    // Ініціалізація генератора випадкових чисел
    srand(time(NULL));

    // Заповнення масиву випадковими оцінками
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                grades[i][j][k] = rand() % 5 + 1;
            }
        }
    }


    int studentsToRepeat = 0;
    int expelled[N] = {0};

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < N; j++) {
            if (!expelled[j]) {
                float average = calculateAverage(grades[i][j]);
                if (average < 2.8) {
                    printf("Учень %d залишається на другий рік (Середній бал: %.2f)\n", j + 1, average);
                    studentsToRepeat++;
                    expelled[j] = 1;
                }
            }
        }
    }

    printf("Загальна кількість учнів, які залишаються на другий рік: %d\n", studentsToRepeat);

    return 0;
}
