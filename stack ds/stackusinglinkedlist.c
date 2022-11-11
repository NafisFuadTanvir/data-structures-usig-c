#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *top=NULL;
void push(int value)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node*));
    temp->data=value;
    temp->next= top;
    temp=top;
}

void pop()
{
struct node *temp;
if(top==NULL)
{
    printf("there is no element to pop");
}
else{
temp=top;
top=top->next;
free(temp);
}
}
int main()
{
    
push(100);
push(200);
pop();



}


