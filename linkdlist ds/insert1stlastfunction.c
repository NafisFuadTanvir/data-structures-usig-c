#include<stdio.h>
#include<stdlib.h>
struct node
{

int data;
struct node *link;

}*head=NULL;
//insert in begining of a linkedlist
void insertatbegining(int value)
{
struct node *newnode;
newnode= (struct node*)malloc(sizeof(newnode));
newnode->data= value;
if(head==NULL)
{
    head=newnode;
    newnode->link=NULL;
}
else
{
    newnode->link=head;
    head= newnode;

}
printf("one node inserted\n");

}//

//inset at the end of the linkedlist
void insertatend(int value)
{
struct node *newnode;
newnode= (struct node *)malloc(sizeof(newnode));
newnode->data=value;
if(head==NULL)
{
    head=newnode;
    newnode->link=NULL;
}
else
{
struct node *temp=head;
while(temp->link != NULL)
{
    temp=temp->link;
}
temp->link=newnode;

}
}//

//inseert at any position of the linkedlist
void insertatanyposition(int value)
{
    int pos,i;
struct node *newnode,*temp;
newnode= (struct node *)malloc(sizeof(newnode));
printf("enter the position:-");
scanf("%d",&pos);
if(pos>count)
{
    printf("this is wrong");
}
else{
    temp=head;
    while(i<pos)
    {
        temp=temp->link;
        i++;
    }
    printf("enter data:- ");
    scanf("%d",newnode->data);
    newnode->link=temp->link;
    temp->next=newnode;
}


}



void display()
{
    if(head==NULL)
    {
        printf("The list is empty\n");
    }

else
{
struct node *temp;
temp=head;
printf("the elements are:- \n");
while(temp->link!= NULL)
{
    printf("data is-->%d",temp->data);
    temp=temp->link;
}
printf("the data is %d....NULL",temp->data);

}


}

int main()
{
 
display();
insertatbegining(100);
/*display();
insertatbegining(1000);
display();
insertatend(800);
display();*/
  
return 0;

}