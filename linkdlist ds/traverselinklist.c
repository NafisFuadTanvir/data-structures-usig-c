#include<stdio.h>
#include<stdlib.h>
struct Node{

int data;
struct Node *next;

};
int main()
{

struct Node *a = 0;
struct Node *b = 0;
struct Node *c = 0;
 a = (struct Node *)malloc(sizeof(struct Node));
 b = (struct Node *)malloc(sizeof(struct Node));
 c = (struct Node *)malloc(sizeof(struct Node));
 a->data= 50;
 b->data= 40;
 c->data= 60;
 a->next = b;
 b->next = c;
 c->next = 0;
 while(a != 0)
 {
     printf("%d-> ",a->data);
     a= a->next;
 }
}