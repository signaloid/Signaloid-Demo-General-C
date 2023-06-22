#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: calculator number1 operator number2\n");
        return 1;
    }

    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char operator = argv[2][0];

    switch(operator) {
        case '+': printf("%.2f\n", num1 + num2); break;
        case '-': printf("%.2f\n", num1 - num2); break;
        case '*': printf("%.2f\n", num1 * num2); break;
        case '/':
            if (num2 != 0.0) {
                printf("%.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default: printf("Error: Unknown operator.\n");
    }

    return 0;
}

