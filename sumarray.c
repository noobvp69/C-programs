#include<stdio.h>

int main(){
	
	int i,size;
	printf("Enter the number of elements you want: ");
	scanf("%d",&size);
	printf("\n The size is: %d",size);
	int arr[size];
	printf("\nEnter each elements: ");
	for(i = 0; i< size; i++){
		scanf("%d",&arr[i]);
	}
   //int i,j,arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sum=0;
	
	for ( i = 0; i<size; i++){// replace size with 10 if making it simple
		
			sum += arr[i] + arr[i+1];
			i++;
			}
	printf("Sum of the elements in the array: %d",sum);
}
