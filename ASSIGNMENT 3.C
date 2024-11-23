Assignment 3

#include <stdio.h>
#include <math.h>

void addition();
void subtraction();
void multiplication();
void division();
void logarithmicValues();
void squareRoot();

int main() {
    int choice;

    printf("Welcome to the Simple Calculator\n");
    while (1) {
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic values\n");
        printf("6. Square root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                logarithmicValues();
                break;
            case 6:
                squareRoot();
                break;
            case 7:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void addition() {
    double a, b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void subtraction() {
    double a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void multiplication() {
    double a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void division() {
    double a, b;
    printf("Enter numerator and denominator: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void logarithmicValues() {
    double num;
    printf("Enter a number to calculate its natural logarithm: ");
    scanf("%lf", &num);
    if (num > 0) {
        printf("Result: %.2lf\n", log(num));
    } else {
        printf("Error: Logarithm is not defined for non-positive numbers.\n");
    }
}

void squareRoot() {
    double num;
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Result: %.2lf\n", sqrt(num));
    } else {
        printf("Error: Square root of a negative number is not defined.\n");
    }
}
