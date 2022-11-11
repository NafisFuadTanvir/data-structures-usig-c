#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node *link;

};

struct node *creatinglinklist(int arr[],int size)
{

struct node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++)
    {

temp= (struct node *)malloc(sizeof(struct node));
temp->data=arr[i];
temp->link=NULL;
if(head==NULL)
{
    head=temp;
    current= temp;
}
else{
    current->link=temp;
    current= current->link;
}



    }
return head;


}
int main()
{
int a[]= {10,20,30,40,50,60,70,80,90,100};
struct node *head;
head= creatinglinklist(a,10);

while(head!=NULL)
{
    printf("%d\n",head->data);
    head=head->link;
}

printf("NULL\n");
    return 0;
}