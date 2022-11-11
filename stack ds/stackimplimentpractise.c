#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],top=-1;

void push(int value)
{
if(top<size-1)
{
    top++;
    stack[top]=value;
    printf("succesfully added item:-%d\n",value);
}
else{
    printf("NO spaces");
}
}

int pop()
{
if(top>=0)
{
    int val=stack[top];
    top--;
    return val;
}
else{
    printf("empty stack");
}
return 0;
}






int main()
{
push(50);
push(60);
push(70);
push(80);
push(90);
push(100);
pop();


    return 0;
}