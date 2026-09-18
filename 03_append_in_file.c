/* now we add a data into the file without removing the previous data from the file.
how can we do that..!!  we can do this operation using "a" mode.
bcz "a" mode could not delete the previous data & add the new data into the file*/

// first need to store menual data into the file. here is the manual data.....
/* laptop
  mouse
  keyboard
  */
#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    printf("enter the name: "); scanf("%s", name);
  // add "miki" to the file
    FILE *fp;
    fp = fopen("file.txt", "a");
    if(fp == NULL){
        printf("can't open file\n");
        return 1;
    }
    fprintf(fp,"%s", name);
    fclose(fp);
    printf("name added succcesfully\n"); // its a comment that tells the program run perfectly
    return 0;
}
// in the file after add operation the file looks like......
/*laptop
mouse
keyboard
miki */
