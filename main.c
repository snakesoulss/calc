#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "structure.h"
#include "stack.h"
#include "calculator.h"
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Russian");
    char *expression = malloc(100 * sizeof(char));
    if (!expression) {
        printf("Ошибка: Не удалось выделить память\n");
        return EXIT_FAILURE;
    }
    printf("Введите выражение в обратной польской записи: ");
    fgets(expression, 100, stdin);

    // Удаление символа новой строки, если он есть
    size_t len = strlen(expression);
    if (len > 0 && expression[len-1] == '\n') {
        expression[len-1] = '\0';
    }

    double result = evaluateRPN(expression);
    printf("Результат: %.2f\n", result);
    free(expression);

    return 0;
}
