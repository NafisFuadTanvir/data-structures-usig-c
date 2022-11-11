#include<stdio.h>
#include<stdlib.h>
struct nafis
{
int data;
struct nafis *next;
};

int main()
{
struct nafis *a=0;
struct nafis *b=0;
struct nafis *c=0;
struct nafis *d=0;
struct nafis *e=0; 
struct nafis *f=0;
struct nafis *g=0;
struct nafis *h=0;
struct nafis *i=0;
struct nafis *j=0;
a= (struct nafis *)malloc(sizeof(struct nafis));
b= (struct nafis *)malloc(sizeof(struct nafis));
c= (struct nafis *)malloc(sizeof(struct nafis));
d= (struct nafis *)malloc(sizeof(struct nafis));
e= (struct nafis *)malloc(sizeof(struct nafis));
f= (struct nafis *)malloc(sizeof(struct nafis));
g= (struct nafis *)malloc(sizeof(struct nafis));
h= (struct nafis *)malloc(sizeof(struct nafis));
i= (struct nafis *)malloc(sizeof(struct nafis));
j= (struct nafis *)malloc(sizeof(struct nafis));
a->data=50;
b->data=60;
c->data=70;
d->data=80;
e->data=100;
f->data= 120;
g->data= 130;
h->data= 140;
i->data= 150;
j->data= 126;

a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=f;
f->next=g;
g->next=h;
h->next=i;
i->next=j;
j->next=0;

while(a!=0)
{
    printf("the data is %d\n",a->data);
    a= a->next;
}


}