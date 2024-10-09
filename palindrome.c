#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void lowerCase(char str[]){
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] > 64 && str[i] < 91) 
      str[i] += 32; 
    i++;
  }
}
int main() 
{
    char str[MAX_SIZE];
    printf("Enter the string to check: ");
    gets(str);
    int i, len, flag = 0;
    lowerCase(str);
    len = strlen(str);

    for (i = 0; i < len; i++) 
    {
        // Checking if string is palindrome or not
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
        
    return 0;
}
