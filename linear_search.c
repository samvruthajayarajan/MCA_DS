#include<stdio.h>
int main()
{
int a[10],i,n,k;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to search:");
scanf("%d",&k);     
for(i=0;i<n;i++){
if(a[i]==k){
printf("the element is found at position %d",i+1);
return 0;
}
}
printf("element not found");
return 0;
}

