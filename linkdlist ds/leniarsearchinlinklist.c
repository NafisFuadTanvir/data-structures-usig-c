#include<stdio.h>
#include<stdlib.h>
struct node  *createlinklist(int array[],int size);
int searchinlinklist(struct node *head,int value);
struct node{

    int data;
    struct node *next;
};

int main()
{
int arr[]={10,12,13,1,4,5,8,6,5,54,6,4,54};

struct node *head;

head=createlinklist(arr,13);
printf("%d->\n",searchinlinklist(head,5));
}

int searchinlinklist(struct node *head,int value)
{
    int index=1;
    while(head!=NULL)
    {
        if(head->data==value)
        {
            return index;
        }
        else{
            index++;
            head=head->next;
        }
    }
    return 0;
}
//create linkedlist with array and function
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