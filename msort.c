#include<stdio.h>
int main()
{
int a[10],b[10],c[10];
int n,m,i;
printf("enter the size of first array:");
scanf("%d",&n);
printf("enter the eleemnts of first array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
printf("enter the size of second array:");
scanf("%d",&m);
printf("enter the eleemnts of second array:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
c[n+i]=b[i];
}
printf("merged array:\n");
for(i=0;i<n+m;i++)
{
printf("%d\n",c[i]);
}
return 0;
}
