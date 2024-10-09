#include<stdio.h>

int main(){
	
	int row_A, col_A, row_B, col_B;
	printf("Enter the size of row for the matrix A: \n");
	scanf("%d", &row_A);
	printf("Enter the size of column for the matrix A: \n");
	scanf("%d", &col_A);
	printf("Enter the size of row for the matrix B: \n");
	scanf("%d", &row_B);
	printf("Enter the size of column for the matrix B: \n");
	scanf("%d", &col_B);
	printf("\n");

	int a[row_A][col_A];
	int b[row_B][col_B];
	int res_add[row_A][col_A];
	int res_sub[row_A][col_A];	
	
	printf("For Matrix A: \n");
	for(int i = 0; i < row_A; i++){
		for(int j = 0; j < col_A; j++){
			printf("Enter a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");

	printf("For Matrix B: \n");
	for(int i = 0; i < row_B; i++){
		for(int j = 0; j < col_B; j++){
			printf("Enter b[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");

	printf("Printing matrix A:\n");
	for(int i = 0; i < row_A; i++){
		for(int j = 0; j < col_A; j++){
			printf("[%d][%d] = %d  ", i, j, a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Printing matrix B:\n");
	for(int i = 0; i < row_B; i++){
		for(int j = 0; j < col_B; j++){
			printf("[%d][%d] = %d  ", i, j, b[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	if (row_A == row_B && col_A == col_B) { // Check if dimensions are equal for addition and subtraction
		printf("Addition of A and B: \n");
		for(int i = 0; i < row_A; i++){
			for(int j = 0; j < col_A; j++){
				res_add[i][j] = a[i][j] + b[i][j];
			}
		}

		printf("Subtraction of A and B: \n");
		for(int i = 0; i < row_A; i++){
			for(int j = 0; j < col_A; j++){
				res_sub[i][j] = a[i][j] - b[i][j];
			}
		}

		printf("Result of Addition:\n");
		for(int i = 0; i < row_A; i++){
			for(int j = 0; j < col_A; j++){
				printf("[%d][%d] = %d  ", i, j, res_add[i][j]);
			}
			printf("\n");
		}
		printf("\n");

		printf("Result of Subtraction:\n");
		for(int i = 0; i < row_A; i++){
			for(int j = 0; j < col_A; j++){
				printf("[%d][%d] = %d  ", i, j, res_sub[i][j]);
			}
			printf("\n");
		}
	} else {
		printf("Size of rows and columns of matrix A and B should be equal for addition and subtraction.\n");
	}
	printf("\n");
	if(row_B ==col_A ){
		for(int i = 0; i < row_A; i++){
			for(int j = 0; j < col_A; j++){
				res_mul[i][j] = 0;
				for(intk=0;k<
				)
			}
		}
		
	}
	printf("Transpose Of A:\n");
	int transpose[col_A][row_A];
	for(int i = 0; i < row_A; i++){
		for(int j = 0; j < col_A; j++){
			transpose[j][i] = a[i][j];
		}
	}

	for(int i = 0; i < col_A; i++){
		for(int j = 0; j < row_A; j++){
			printf("[%d][%d] = %d  ", i, j, transpose[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
}

