/* now we need to read data & view all info from file. in that case first we need to strore some menual data
into the file then we read & view using while loop*/
// this this a important concept for project 
#include <stdio.h>
#include <string.h>
int main(){
    int id;
    char name[30];
    int age;
    FILE *fp;
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("can't open\n");
        return 1;
    }
  // in file data must organized id "name age in this form"
  /* menual data----
      101 Sowrav 78
      102 Sakib 85
      103 Rahim 72
       104 Karim 91
  */
    while(fscanf(fp, "%d %s %d", &id, name, &age) == 3){ // this loop exicute untill it takes 3 input, thats why it == 3
        printf("id: %d\n", id);
        printf("name: %s\n", name);
        printf("age: %d\n", age);
        printf("\n");
    }
    fclose(fp);
    printf("done!!\n");
    return 0;
}
/* output in terminal like--------
  id: 101
name: Sowrav
age: 78

id: 102
name: Sakib
age: 85

id: 103
name: Rahim
age: 72

id: 104
name: Karim
age: 91

done!!
  */
