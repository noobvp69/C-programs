#include<stdio.h>

int main(){
	
	char password[10], username[10], ch;
	
	int i;
	printf("Enter the username: ")
	fgets(username,10,stdin);
	
	printf("Enter the password <length = 8 only>: ");
	for(i=0;i<=10;i++){
		ch = getch();
		password[i]=ch;
		printf("*");
	}
	password[10]='\0';
	
	printf("\nYour Password: ");
	for(i=0;i<=10;i++){
		printf("%c",password[i]);
	}
	return 0;
}
