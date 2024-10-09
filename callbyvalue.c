#include<stdio.h>
// call by value

void swapx (int a, int b);
int main(){
	int a=10, b=20;
	printf("Before calling the function a = %d and b = %d\n",a,b);
	swapx(a,b);
	printf("\n After calling the function; Inside the main : a=%d and b=%d",a,b);
	
	return 0;
}

void swapx(int x, int y){
	int t;
	t=x;
	x=y;
	y=t;
	printf("\nInside the function: a=%d and b=%d",x,y);
}
