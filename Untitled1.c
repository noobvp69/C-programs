#include<stdio.h>

int fun(int x, int y){
	
	int sum=x+y;
	printf("sum of x and y is %d ",sum);
	return 0;
}

int main(){
	
	int x=10, y=20;

	printf(" before function call x=%d and y=%d\n",x,y);
		fun(x,y);
			printf(" \n After function call x=%d and y=%d",x,y);
			return 0;
}
