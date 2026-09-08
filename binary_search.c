#include<stdio.h>
int main()
{
int a[100],i,n,k;
int l,h,m;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter tyhe elements in sorted order:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to search:");
scanf("%d",&k);
l=0;
h=n-1;
while(l<=h)
{
m=(l+h)/2;
if(a[m]==k)
{
printf("element found at position %d",m+1);
return 0;
}
else if(a[m]<k)
{
l=m+1;
}
else
{
h=m-1;
}
}
printf("element not found");
return 0;
}				
