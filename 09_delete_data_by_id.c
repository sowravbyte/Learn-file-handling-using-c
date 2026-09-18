/* basic structure----
  file.txt
   ↓
read data using struct
   ↓
find the ID to delete
   ↓
ID found?
   ↓
skip that data
   ↓
write remaining data into temp.txt
   ↓
remove("file.txt")
   ↓
rename("temp.txt", "file.txt")

  */
//for delete data we need to search the data then delete. same as update
// same code as update but little change.
/* manual data: ----
  101 sowrav 22
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
    printf("enter id to dlt: "); scanf("%d", &sr_id);
        int found = 0;
        temp = fopen("temp.txt", "w");
        if(temp == NULL){
        printf("can't open\n");
        return 1;
    }
    while(fscanf(fp, "%d %s %d", &id, name, &age) == 3){
        if(sr_id == id){
            found = 1;
        } // when found no chnage. that autometically dlt the data from file
        else{
              fprintf(temp, "%d %s %d\n", id, name,age);
        }
    }
    fclose(fp); fclose(temp);
    if(found){
        remove("file.txt");
        rename("temp.txt", "file.txt");
        printf(" delete done!!\n");
    }
    else{
        remove("temp.txt");
        printf("file couldn't found!!\n");
    }
    return 0;
}

/* outut ---
  enter id to dlt: 101
 delete do
  */
/* 
dle data----
  102 Sakib 23
103 Rahim 21
104 Karim 24
*/
