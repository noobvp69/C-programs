#include<stdio.h>



int main(){
	
	
	int i,val;
	int fact=1;
	printf("Enter a value to find factorial: ");
	scanf("%d",&val);
	i=val;
	while(i > 0){
 		fact*=i;
 		i--;
		
		
	}
	printf("factorial of %d is %d\n.",val,fact);
	
	
	
	return 0 ;
}
