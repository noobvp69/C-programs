#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	
	float celsius,farenheit;
	
	celsius=52;
	farenheit=1.8 * celsius + 32;
	printf("%.2f °C into Farenheit = %.2f",(celsius),(farenheit));	
	return 0;
}
