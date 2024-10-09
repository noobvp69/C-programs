#include<stdio.h>

int main(){
	
	int size;
	printf("Enter the size of the matrix(square matrix): ");
	scanf("%d",&size);
	
	int a[size][size];
	int b[size][size];
	int res_add[size][size];
	printf("For Matrix A: \n");
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			printf("Enter a[%d][%d] = ",i,j);
			scanf(" %d\n",a[i][j]);
		}
	}
	printf("For Matrix B: \n");
	
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			printf("Enter b[%d][%d] = ",i,j)
			scanf(" %d\n",a[i][j]);
		}
	}
	printf("Printing matrix A:\n")
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);
			
		}
	}
	printf("Printing matrix B:\n")
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			printf("b[%d][%d] = %d\n",i,j,b[i][j]);
			
		}
	}
	
	
	printf("Addition of A and B: \n");
	
	for(int i=0; i<size; i++){
				res_add[i][j]=0;		
		for(int j=0; j<size; j++){
			res_add[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			printf("res_add[%d][%d] = %d\n",i,j,res_add[i][j]);
			
		}
	}
	
	
	return 0; 
	
}
