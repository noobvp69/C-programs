#include<stdio.h>

int main(){
	int day= 2;
	printf("the day with number %d is ", day);
	switch(day){
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
				break;
		case 3:
			printf("Wednesday");
				break;
		case 4:
			printf("Thursday");
				break;
		case 5:
			printf("Friday");
				break;
		case 6:
			printf("Saturday");
		case 7:
			printf("Sunday");
				break;
		default:
			printf("Invalid date");
				break;
	}
	return 0;
}
