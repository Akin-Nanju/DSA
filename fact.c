#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}

// Recursive function to compute factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: factorial of n is n times factorial of (n - 1)
    else {
        return n * factorial(n - 1);
    }
}
