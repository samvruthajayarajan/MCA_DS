#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node * next;
};
struct node * head = NULL;
void insert()
{
 struct node * newnode;
 newnode = (struct node *)malloc(sizeof(struct node));
 printf("enter data:");
 scanf("%d",&newnode -> data);
 newnode-> next = head;
 head = newnode;
 printf("Node inserted\n");
}
void delete()
{
 struct node * temp;
 if(head == NULL)
 {
  printf("List is empty\n");
 }
else
{
 temp = head;
 printf("Deleted element:%d\n",head->data);
 head=head -> next;
 free(temp);
}
}
void display()
{
 struct node * temp;
 if(head==NULL)
 {
  printf("list is empty\n");
 }
 else
 {
  temp= head;
  printf("Linked list:");
  while(temp!=NULL)
  {
   printf("%d->",temp -> data);
   temp = temp->next;
  }
  printf("NULL\n");
  }
 }
 int main()
 {
  int ch;
  do
  {
   printf("\n1.insert");
   printf("\n2.delete");
   printf("\n3.display");
   printf("\n4.exit");
   printf("\nEnter a choice:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
    	insert();
    	break;
    case 2:
    	delete();
    	break;
    case 3:
    	display();
    	break;
    case 4:
    	printf("Exit");
    	break;
    default:
    	printf("invalid choice");
    }
   }
   while(ch!=4);
   return 0;
  }
