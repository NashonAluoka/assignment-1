#include <stdio.h>

int main() {
    double num1, num2;

    // Prompting the user to enter the numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculating sum and difference
    double sum = num1 + num2;
    double difference = num1 - num2;

    // Displaying the results
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("The Sum and Difference of the two numbers are : %.2lf, %.2lf\n", sum, difference);
    return 0;
}
