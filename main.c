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
        printf("������: �� ������� �������� ������\n");
        return EXIT_FAILURE;
    }
    printf("������� ��������� � �������� �������� ������: ");
    fgets(expression, 100, stdin);
    double result = evaluateRPN(expression);
    printf("���������: %.2f\n", result);
    free(expression);
    stack *s = stack_init();
    stack_free(s);
    _getch();
    return 0;
}
