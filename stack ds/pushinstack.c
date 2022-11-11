#include <stdio.h>
#include<stdlib.h>
#define size 6
int stack[size]={17,5,123,25,12},top=-1; 
 

void push(int val)
{ 
    if(top>=size-1) 
    printf("Stack is full.\n");
else
{ 
top++;
stack[top]=val;
printf("Inserted element: %d\n",stack[top]);
}
}

void pop()
{
if(top<=-1)
{
printf("No element to delete.\n");
}
else
{
printf("\nThe popped element = %d\n",stack[top]);
top--;
}
}

void show()
{
if(top>=0)
{

for(int i=0;i<=top;i++)
printf("%d ",stack[i]);
}
else
{
printf("Stack is Empty\n");
}
}

int main()
{

int value,i;

for(i=0;i<5;i++)
{
    push(stack[i]);
}
printf("orginial elements:-");
show();
printf("\nenter the value to be pushed:-\n");
scanf("%d",&value);
push(value);
printf("\nafter pushing the new element:-\n");
show();
pop(83);
pop(12);
pop(25);
pop(123);
show();
push(25);
push(12);
push(83);
show();
}


