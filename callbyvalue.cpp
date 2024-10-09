#include<stdio.h>
// call by value
void swapx(int a, int b){
	int t;
	t=x;
	x=y;
	y=t;
	printf("Inside the function: a=%d and b=%d",a,b)
}

int main(){
	int a=10, b=20;
	swapx(a,b);
	printf("Inside the main : a=%d and b=%d",a,b);
	
	return 0;
}


