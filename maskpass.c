#include <stdio.h>

int main() {
    char password[9], usrname[10], ch;
    int i;

    printf("Enter User name: ");
    fgets(usrname, 10, stdin);  // using fgets instead of gets

    printf("Enter the password <any 8 characters>: ");
    for(i = 0; i < 8; i++) {
        ch = getch();  // read character without echoing it to the console
        password[i] = ch;
        printf("*");
    }
    password[8] = '\0';  // null-terminate the string

    /*If you want to know what you have entered as password, you can print it*/
    printf("\nYour password is : ");
    for(i = 0; i < 8; i++) {
        printf("%c", password[i]);
    }

    return 0;
}

