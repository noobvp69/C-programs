#include<stdio.h>



int main(){
	int a=10, b=20;
	
	printf("\n After calling the function; Inside the main : a=%d and b=%d",a,b);
	swapx(&a,&b);
	return 0;
	
	}

void swapx(int* x, int* y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
	printf("Inside the function : \n x=%d y=%d\n",*x,*y);
	
}
 


	
