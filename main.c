#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "structure.h"
#include "stack.h"
#include "calculator.h"
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Russian");
    char expression[100];
    printf("������� ��������� � �������� �������� ������: ");
    fgets(expression, 100, stdin);
    double result = evaluateRPN(expression);
    printf("���������: %.2f\n", result);

    _getch();
    return 0;
}
