#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Count the number of digits
    int digits = countDigits(num);

    // Calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;

        // Each digit raised to the power of the number of digits
        result += pow(remainder, digits);

        originalNum /= 10;
    }

    // Check if the number is Armstrong
    if (result == num)
        return 1; // Return 1 if Armstrong
    else
        return 0; // Return 0 if not Armstrong
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
