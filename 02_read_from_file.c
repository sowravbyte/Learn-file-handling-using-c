/* now we read from existing data from file using r mode.
but when we use "r" mode we need to use fscanf/fgets to read the file*/
#include <stdio.h>
#include <string.h>
int main(){
    char name[30];
    int age;
    printf("enter your name: "); scanf("%s", name);
    printf("enter your age: "); scanf("%d", &age);
    FILE *fp;
    //first need to write in the file. store the data in file then read
    fp = fopen("file.txt", "w");
  // handling the NULL file. this is very important bcz when we opean a file , if the file adress not found it hits a 
  // error, so thats why we need to handle it
    if(fp == NULL){
        printf("file can't open\n");
        return 1;
    }
   fprintf(fp, "%s %d\n", name, age); // this form we need to use in fscanf too
    fclose(fp);
  // now we can read the data from file
    fp = fopen("file.txt", "r");
    fscanf(fp,"%s %d", name, &age);
    fclose(fp);
  // this will show in our terminal
    printf("\n=======read the data from file======\n");
    printf("name: %s\n", name);
    printf("age: %d\n", age);
    printf("read succesfully\n");
    return 0;
}
