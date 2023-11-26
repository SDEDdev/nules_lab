#include <stdio.h>
#include <stdlib.h>

void deletePositiveElement(int **arr, int *size) {
    // Знайдемо індекс першого позитивного елемента
    int positiveIndex = -1;
    for (int i = 0; i < *size; i++) {
        if ((*arr)[i] > 0) {
            positiveIndex = i;
            break;
        }
    }

    // Якщо позитивний елемент знайдено
    if (positiveIndex != -1) {
        // Зсунемо елементи назад
        for (int i = positiveIndex; i < (*size) - 1; i++) {
            (*arr)[i] = (*arr)[i + 1];
        }

        // Зменшимо розмір масиву
        (*size)--;

        // Перерозмірнимо динамічно виділену пам'ять
        *arr = (int *)realloc(*arr, (*size) * sizeof(int));
    }
}

int main() {
    system("chcp 65001");

    int size;
    printf("Введіть розмір масиву:");
    scanf("%d", &size);
    int *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Введить елемент на %d позиції: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Виведемо вихідний масив
    printf("Вхідний масив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Викличемо функцію для видалення позитивного елемента
    deletePositiveElement(&array, &size);

    // Виведемо оновлений масив
    printf("Оновлений  масив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Звільнимо виділену пам'ять
    free(array);

    return 0;
}
