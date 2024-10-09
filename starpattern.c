#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}

