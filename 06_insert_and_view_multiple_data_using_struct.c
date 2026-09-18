/* firts of all if you don't know the struct node basic, how to write & call..!!
u need to learn that first before starting this operation*/
// if u already knew so feel free to learn this
#include <stdio.h>
#include <string.h>
struct node{
    int id;
    char name[30];
    float cgpa;
};
int main(){
    struct node p;
    int n;
    printf("enter number of student: "); scanf("%d", &n);
    FILE *fp;
    fp = fopen("file.txt", "w");
    if(fp == NULL){
        printf("can't open\n");
        return 1;
    }
    for(int i = 0; i < n; i++){
       printf("\nEnter student %d information:\n", i + 1);
        printf("enter id : "); scanf("%d", &p.id);
        printf("enter name : "); scanf("%s", p.name);
        printf("enter cgpa : "); scanf("%f", &p.cgpa);
        fprintf(fp,"%d %s %.2f\n", 
            p.id, 
            p.name, 
            p.cgpa);
    }
    fclose(fp);
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("can't open\n");
        return 1;
    }
    printf("\n====all student====\n");
    printf("\n");
    while(fscanf(fp, "%d %s %f", 
        &p.id,
         p.name, 
         &p.cgpa) == 3){ // here we can also use while() == EOF(end of file) replace of 3)
            printf("id : %d\n", p.id);
             printf("name : %s\n", p.name);
              printf("cgpa : %.2f\n", p.cgpa);
              printf("\n");
    }
    fclose(fp);
    printf("done!!\n");
    return 0;
}
/* output : -------
  enter number of student: 2

Enter student 1 information:
enter id : 123
enter name : sakib
enter cgpa : 3.44

Enter student 2 information:
enter id : 143
enter name : saw
enter cgpa : 2.00

====all student====

id : 123
name : sakib
cgpa : 3.44

id : 143
name : saw
cgpa : 2.00

done!!
  */
