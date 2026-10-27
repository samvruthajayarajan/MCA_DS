#include<stdio.h>
struct student
{
int rollno;
char name[20];
float mark;
};
int main()
{
struct student s;
printf("enter roll number:");
scanf("%d",&s.rollno);
printf("enter name:");
scanf("%19s",s.name);
printf("enter mark:");
scanf("%f",&s.mark);
printf("\n student Details\n");
printf("Roll number:%d\n",s.rollno);
printf("Name:%s\n",s.name);
printf("Mark:%2f\n",s.mark);
return 0;
}

