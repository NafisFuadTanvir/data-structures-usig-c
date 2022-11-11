#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{
int arr[50],size,i,j;
printf("enter the size of the array:- ");
scanf("%d",&size);
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}

struct node *head=NULL, *temp=NULL,*current=NULL;
for(j=0;j<size;j++)
{
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data=arr[j];
    temp->next= NULL;
    if(head==NULL)
    {
        head=temp;
        current=temp;
    }
    else{
        current->next=temp;
        current=current->next;
    }
}
while(head!=NULL)
{
    printf("%d->",head->data);
    head=head->next;
}
printf("NULL\n");


return 0;

}