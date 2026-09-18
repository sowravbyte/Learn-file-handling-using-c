 /*
general structure of update------

  file.txt
   ↓
read data
   ↓
find the data to update
   ↓
update the data
   ↓
write updated data into temp.txt
   ↓
remove(file.txt)
   ↓
rename(temp.txt, file.txt)

  */

// now in update first we need to search the data & then those data move to the temporary file if found
/* namual file data ---
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
    FILE *fp, *temp;
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("can't open\n");
        return 1;
    }
    int sr_id;
    printf("enter id to update age: "); scanf("%d", &sr_id);
    int up_age;
        printf("enter update age: "); scanf("%d", &up_age);
        int found = 0;
        temp = fopen("temp.txt", "w");
        if(temp == NULL){
        printf("can't open\n");
        return 1;
    }
    while(fscanf(fp, "%d %s %d", &id, name, &age) == 3){
        if(sr_id == id){
            fprintf(temp, "%d %s %d\n", id, name, up_age);
            found = 1;
        }
        else{
              fprintf(temp, "%d %s %d\n", id, name,age);
        }
    }
    fclose(fp); fclose(temp);
    if(found){
        remove("file.txt");
        rename("temp.txt", "file.txt");
        printf("age updated done!!\n");
    }
    else{
        remove("temp.txt");
        printf("file couldn't found!!\n");
    }
    return 0;
}
/* output---
enter id to update age: 101
enter update age: 25
age updated done!!
*/
/* updated data -----
101 Sowrav 25
102 Sakib 23
103 Rahim 21
104 Karim 24
*/
