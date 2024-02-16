#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int n) {
    int reversedNumber = 0, originalNumber = n;

    // Reverse the number
    while (n > 0) {
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNumber == reversedNumber)
        return 1; // Return 1 if palindrome
    else
        return 0; // Return 0 if not palindrome
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}
