#include<stdio.h>
#include<stdlib.h>
struct nafis
{
int data;
struct nafis *next;
};
//manually travarse the link list
int main()
{
struct nafis *a=0;
struct nafis *b=0;
struct nafis *c=0;
struct nafis *d=0;
struct nafis *e=0; 

a= (struct nafis  *)malloc(sizeof(struct nafis));
b= (struct nafis *)malloc(sizeof(struct nafis));
c= (struct nafis *)malloc(sizeof(struct nafis));
d= (struct nafis *)malloc(sizeof(struct nafis));
e= (struct nafis *)malloc(sizeof(struct nafis));
a->data=50;
b->data=60;
c->data=70;
d->data=80;
e->data=100;
a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=0;

//travarse rule of linkedlist

printf("\n\n*****travarsing the linklist*****\n\n");
while(a!=0)
{
    printf("the data is %d\n",a->data);
    a= a->next;
}


}