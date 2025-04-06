#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        // Menu
        printf("\n======= SIMPLE CALCULATOR =======\n");
        printf("Choose operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulo (%%)\n");
        printf("6. Power (^)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        }

        // Insert number
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0)
                    printf("Error: Division by zero!\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            case 5:
                if ((int)num2 == 0)
                    printf("Error: Modulo by zero!\n");
                else {
                    int modResult = (int)num1 % (int)num2;
                    printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, modResult);
                }
                break;
            case 6:
                result = pow(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
            default:
                printf("Invalid choice!\n");
        }

        // Continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont); 
    }

    return 0;
}
