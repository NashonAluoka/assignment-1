#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d:\n", n);

    for (int i = 0; first <= n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number up to which you want to generate the Fibonacci series: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
