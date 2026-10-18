/* now lets learn binary file handling. Its similar to text file handling. its help us to read data from the
file more effeciently*/

// first we need to write data into the file
//for this we use "wb" its stand for 'write' 'binary'
#include <stdio.h>
int main(void) {
    int number = 123;
    FILE *fp = fopen("data.bin", "wb");// this helps to write data into the file & it first remove the prev data then 
  //write it down. so be careful about that when we need to write something into the file
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&number, sizeof(number), 1, fp);// this is the main line. 
  //its basic syntex fwrite(pointer, size, count, file_pointer) 
  // pointer: indicate the memory adress where we gonna write it
  // size:how much the memory adress need to store the data
  //count : just an object
  //file_operator: name the file where gonna write it
    fclose(fp);
    printf("Data written successfully!\n");
    return 0;
}
