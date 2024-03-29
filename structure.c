#include<stdio.h>
#include<string.h>
struct student
    {
        int age;
        int marks;
        char fav;
        char name[20];
    };
int main()
{
    struct student farhan;
    farhan.age = 19;
    farhan.marks = 100;
    farhan.fav = 'v';
    strcpy(farhan.name,"depressed");
    
    printf("marks of farhan is : %d\n",farhan.marks);
    printf("age of farhan is : %d\n",farhan.age);
    printf("char of farhan is : %c\n",farhan.fav);
    printf("state of farhan is : %s",farhan.name);

    
    
    return 0;
}