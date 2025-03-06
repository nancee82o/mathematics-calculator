  #include <stdio.h>

int main() {
    float num1 = 0;
    float num2 = 0;
    char op = '+';

    printf("Enter two numbers: ");
    scanf("%f %c", &num1, &op);
    if (op == '+') {
        float sum = num1 + num2;
        printf("Sum: %f\n", sum);
    } else if (op == '-') {
        float diff = num1 - num2;
        printf("Difference: %f\n", diff);
    } else if (op == '*') {
        float prod = num1 * num2;
        printf("Product: %f\n", prod);
    } else if (op == '/') {
        float quot = num1 / num2;
        printf("Quotient: %f\n", quot);
    } else {
        printf("Invalid operator. Try again.\n");
    }
    return 0;
}