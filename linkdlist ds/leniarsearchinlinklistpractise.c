#include<stdio.h>
#include<stdlib.h>
struct node *createlinklist(int array[],int size);
int searchinlinklist(struct node *first,int value);
struct node{
int data;
struct node *next;
};
int main()
{

int nafis[]={10,100,50,60,80,20,60,800};
struct node *first;
first=createlinklist(nafis,8);
printf("the node is in %d position\n",searchinlinklist(first,1000));



}
struct node *createlinklist(int array[],int size)
{
    struct node *first=NULL,*temp=NULL,*last=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        temp= (struct node *)malloc(sizeof(struct node));
        temp->data=array[i];
        temp->next=NULL;
        if(first==NULL)
        {
           first=temp;
           last=temp;
        }
        else{
            last->next=temp;
            last=last->next;
        }
    }
    return first;
}
int searchinlinklist(struct node *first,int value)
{
int index=1;
while(first!=NULL)
{
    if(first->data==value)
    {
      return index;
    }
else{
    index++;
    first=first->next;
}

}
printf("the node is not in the linkedlisdt\n");
return 0;


}