#include<stdio.h>
int main(){

FILE *fptr;
fptr = fopen("filename.txt", "w");
 //Open a file in read mode


// Store the content of the file
char myString[100];
fprintf(fptr, "lorem ipsum Hello World!\n Hi everybody!");
fclose(fptr);
fptr = fopen("filename.txt", "r");
// If the file exist
if(fptr != NULL) {

  // Read the content and print it
  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

// If the file does not exist
} else {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);
}
