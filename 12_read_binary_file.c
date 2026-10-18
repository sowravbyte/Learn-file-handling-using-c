 /* now lets learn how to read data from the file. same as text file handling
this time we use fread & "rb" stands for 'read' 'binary'*/
#include <stdio.h>
int main(void) {
    int number = 0;
    FILE *fp = fopen("data.bin", "rb"); // read from the file
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    size_t items_read = fread(&number, sizeof(number), 1, fp); // same as write operation
    if (items_read == 1) { // if the operation successfuly read the file, return 1 
      // thats why it check == 1
        printf("Number: %d\n", number);
    } else {
        printf("Could not read the complete number.\n");
    }
    fclose(fp);
    return 0;
}
