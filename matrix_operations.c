#include<stdio.h>
int main()
{
int a[10][10],b[10][10],res[10][10];
int r1,c1,r2,c2;
int choice,i,j,k;

printf("enter rows and columns of first matrix:");
scanf("%d%d",&r1,&c1);
printf("enter the elements of first matrix:");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);

 printf("enter the rows and columns of second matrix:");
 scanf("%d%d",&r2,&c2);
 printf("enter the elements of second matrix:");
 for(i=0;i<r2;i++)
 for(j=0;j<c2;j++)
 scanf("%d",&b[i][j]);
 
 do{
 printf("\n---MATRIX OPERATIONS---\n");
 printf("1. Addition\n");
 printf("2. Subtraction\n");
 printf("3. Multiplication\n");
 printf("4. Transpose\n");
 printf("5. Exit\n");
 
 printf("enter your choice:");
 scanf("%d",&choice);
 
 switch(choice){
 case 1: 
 if(r1==r2 && c1==c2){
  printf("Addition:\n");
  for(i=0;i<r1;i++){
  for(j=0;j<c1;j++)
   printf("%d ", a[i][j] + b[i][j]);
   printf("\n");
  }
 }
 else
 printf("Addition not possible:\n");
 break;
 
 case 2:
 if(r1==r2 && c1==c2){
  printf("Subtraction:\n");
  for(i=0;i<r1;i++){
  for(j=0;j<c1;j++)
   printf("%d ",a[i][j] - b[i][j]);
   printf("\n");
  }
 }
 break; 
 
 case 3:
 if(c1==r2){
  printf("Multiplication:\n");
  for(i=0;i<r1;i++){
  for(j=0;j<c2;j++){
   res[i][j]=0;
   for(k=0;k<c1;k++)
   res[i][j] += a[i][k] * b[k][j];
   printf("%d ",res[i][j]);
   }
   printf("\n");
  }
 }
 else
  printf("Multiplication not possible \n");
  break;
  
 case 4:
  printf("Transpose of first matrix:\n");
  for(i=0;i<c1;i++){
  for(j=0;j<r1;j++)
   printf("%d ",a[j][i]);
   printf("\n");
  }
 
  printf("\nTranspose of second matrix:\n");
  for(i=0;i<c2;i++){
  for(j=0;j<r2;j++)
  printf("%d ",b[j][i]);
  printf("\n");
  }
 
  break;
  
 case 5:
 printf("Exiting program...\n");
 break;
 
 default:
  printf("Invalid choice!\n");
 }
 }
 while(choice !=5);
 return 0;
 }
