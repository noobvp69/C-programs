#include <stdio.h>
#include <stdlib.h>


// After copying this code, save the file naming copy_file.c, create source .txt and destination.txt in the code folder, add any text in source .txt. 
//open directory of programs,on address bar type cmd,then type gcc copy_file.c -o codefile
// then  type: ./copy_file source.txt destination.txt
// if done correctly, this will be shown: File copied successfully.
// open destination.txt to see source.txt data is copied or not.

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destFile;
    char ch;

    // Check if correct number of arguments are passed
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", 
		argv[0]);
        exit(1);
    }

    // Open the source file in read mode
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Cannot open source file %s\n", argv[1]);
        exit(1);
    }

    // Open the destination file in write mode
    destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        printf("Cannot open destination file %s\n", argv[2]);
        fclose(sourceFile);
        exit(1);
    }

    // Read from the source file and write to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

