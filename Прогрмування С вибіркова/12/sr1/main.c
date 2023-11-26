#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printHexArray(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        printf("%02X ", str[i]);
    }
    printf("\n");
}

void printDecArray(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        printf("%d ", str[i]);
    }
    printf("\n");
}

int main() {
    system("chcp 65001");
    // Задання прізвища, імені та по батькові
    char name[] = "Чепела Федір Володимирович";

    // 2.1 Масиви шістнадцяткових і десяткових кодів символів власних даних
    printf("2.1 Шістнадцятковий код: ");
    printHexArray(name);
    printf("2.1 Десятковий код: ");
    printDecArray(name);

    // 2.2 Англійські літери
    char englishName[] = "Chepela Fedir Volodymyrovych";
    printf("\n2.2 Шістнадцятковий код (English): ");
    printHexArray(englishName);
    printf("2.2 Десятковий код (English): ");
    printDecArray(englishName);

    // 2.3.1 Прикріплення рядків (конкатенація)
    char concatName[100];
    strcpy(concatName, name);
    strcat(concatName, englishName);
    printf("\n2.3.1 Прикріплення рядків: %s\n", concatName);

    // 2.3.2 Порівняння рядків
    if (strcmp(name, englishName) == 0) {
        printf("2.3.2 Рядки одинакові.\n");
    } else {
        printf("2.3.2 Рядки не одинакові.\n");
    }

    // 2.3.2 Порівняння рядків без врахування реєстру символів
    if (strcasecmp(name, englishName) == 0) {
        printf("2.3.2 без врахування реєстру символів: Рядки одинакові.\n");
    } else {
        printf("2.3.2 без врахування реєстру символів: Рядки не одинакові.\n");
    }

    // 2.3.3 Копіювання рядків
    char copiedName[100];
    strcpy(copiedName, name);
    printf("2.3.3 Копіювання рядків: %s\n", copiedName);

    // 2.3.4 Кількість символів в рядку для української та англійської транслітерацій
    printf("2.3.4 Кількість символів в рядку для української: %zu\n", strlen(name));
    printf("2.3.4 Кількість символів в рядку для англійської: %zu\n", strlen(englishName));

    return 0;
}
