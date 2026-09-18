
/*general structure----
  
  file.txt
   ↓
read data using while
   ↓
take search ID
   ↓
compare ID
   ↓
ID found?
  ↙       ↘
YES       NO
 ↓         ↓
view     not found
data

*/


// search by id

/* manualy file data---
101 Sowrav 22
102 Sakib 23
103 Rahim 21
104 Karim 24

*/
#include <stdio.h>
#include <string.h>
int main(){
    int id;
    char name[30];
    int age;
    FILE *fp;
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("can't opean\n");
        return 1;
    }
    int search_id;
    printf("enter searching id: ");
    scanf("%d", &search_id);
    int found = 0; // itz a flag that tells id found or not
    while(fscanf(fp,"%d %s %d", &id, name, &age) == 3){
        if(search_id == id){ // if we searching by name then we compare like "strcmp(name_s, name) == 0"
            printf("id : %d\n", id);
            printf("name : %s\n", name);
            printf("age : %d\n", age);
            printf("\n");
            found = 1;
        }
    }
    fclose(fp);
    if(found){
        printf("id found done!!\n");
    }
    else{
        printf("not in the list\n");
    }
    return 0;
}

/* output----
  enter searching id: 101
id : 101
name : Sowrav
age : 22

id found done!!

  */
