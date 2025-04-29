#include <stdio.h>
// Recursive function for factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Recursive function for Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num, choice;
    printf("Choose operation: 1-Factorial 2-Fibonacci: ");
    scanf("%d", &choice);
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (choice == 1)
        printf("Factorial of %d is %d\n", num, factorial(num));
    else if (choice == 2)
        printf("Fibonacci number at position %d is %d\n", num, fibonacci(num));
    else
        printf("Invalid choice\n");
    
    return 0;
}
