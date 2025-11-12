#include <stdio.h>

/* //Structure to store student information
struct student {
    int roll;
    char name[50];
    char gen;
    int marks[5];
};

//Example of creating a student instance and assigning values
struct student s1,s2;
s1.gen = 'M';
s2.gen = 'F'; */

//Lets try a simple one for understanding

struct student{
    int roll;
    char name[50];
    int marks[5];
};
int main(){
    int i;
    struct student s1;
    s1.roll=1;
    printf("Enter your name\n");
    scanf("%s", s1.name);
    printf("Enter Marks\n");
    for(i=0;i<5;i++){
        scanf("%d",&s1.marks[i]);}
    printf("Roll: %d\n",s1.roll);
    for (i=0; i<5; i++)
    printf("%d\t", s1.marks[i]);
    return 0;
}