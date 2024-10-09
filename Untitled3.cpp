#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ensure the number is non-negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        i = num;
        while (i > 0) {
            factorial *= i;
            i--;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
