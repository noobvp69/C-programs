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
        // Print increasing numbers
        for (j = 1; j <=i ; j++) {
            printf("%d",j);
            
        }
        //print decreasing numbers
        for(j=i-1; j >= 1; j--){
        	printf("%d",j);
		}
        // Move to the next line
        printf("\n");
    }

    return 0;
}

