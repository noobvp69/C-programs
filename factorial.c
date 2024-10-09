#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
	
	
	int i,j,fact, val;
	printf("Enter a value to find factorial: ");
	scanf("%d",&val);
	
	for(i=1;i<=val;i++){
		fact=fact*i;
		
		
	}printf("Factorial of %d is = %d",val,fact);
	
	return 0;
}
