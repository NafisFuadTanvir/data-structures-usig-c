#include <stdio.h>
#include<stdlib.h>

#define size 6
char stack[size]={'a','b','c','d','e','f'},top=-1; 
 

void push(char val)
{ 
    if(top>=size-1) 
    printf("Stack is full.\n");
else
{ 
top++;
stack[top]=val;
printf("Inserted element: %c\n",stack[top]);
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
printf("\nThe popped element = %c\n",stack[top]);
top--;
}
}

void show()
{
if(top>=0)
{

for(int i=0;i<=top;i++)
printf("%c ",stack[i]);
}
else
{
printf("Stack is Empty\n");
}
}

int main()
{

char value,i;

for(i=0;i<5;i++)
{
    push(stack[i]);
}
printf("orginial elements:-");
show();
printf("\nenter the value to be pushed:-\n");
scanf("%c",&value);
push(value);
printf("\nafter pushing the new element:-\n");
show();
pop('a');
pop('b');
pop('c');
pop('d');
show();
push('g');
push('h');
push('i');
show();
}


