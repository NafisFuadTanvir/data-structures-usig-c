#include<stdio.h>
#include<stdlib.h>
struct node  *createlinklist(int array[],int size);
struct node{

    int data;
    struct node *next;
};

int main()
{
int arr[]={10,12,13,1,4,5,8,6,5,54,6,4,54};

struct node *head;

head=createlinklist(arr,13);
while(head!=NULL)
{
    printf("%d\n",head->data);
    head= head->next;
}
printf("NULL\n");
}
struct node *createlinklist(int array[],int size)
{
    struct node *head=NULL,*temp= NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        temp= (struct node *)malloc(sizeof(struct node));
        temp->data=array[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current= temp;
        }
        else{
            current->next=temp;
            current= current->next;

        }
    }
    return head;
}