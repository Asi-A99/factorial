#include <stdio.h>

unsigned long long calculate_factorial(int n) {
    if (n < 0) {
        return 0; 
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, calculate_factorial(num));
    }

    return 0;
}
