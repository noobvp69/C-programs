#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
	
	
	int i,j,fact, val;
	printf("Enter a value to find factorial: ");
	scanf("%d",&val);
	 
	while(i<=1){
		fact=fact*i;
		i++
	}
	printf("factorial pf %d is %d.",val,fact);
	
	
	
	return 0 ;
}
