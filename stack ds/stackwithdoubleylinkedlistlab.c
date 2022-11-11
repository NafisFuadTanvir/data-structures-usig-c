#include <stdio.h> 
#include<stdlib.h>
struct node
{ 
    int val; 
    struct node *left; 
    struct node *right;
};
struct node * getnode()
{
    return (struct node *)malloc(sizeof(struct node));
};
struct node *top;
int c=0;

struct node *add(struct node *First)
{
struct node *T;
if(First==NULL)
{
    First==getnode();
    T=top=First;
    T->left=NULL;
}
else{
T=getnode();
top->right=T;
T->left=top;
top=T;
}
printf("Enter a val: ");
c++;
scanf("%d",&T->val);
T->right=NULL;
return First;

}
struct node* del( struct node *FIRST)
{ 
    struct node *T; 
    if(( FIRST== NULL)&&(c<1))
{
     printf("Underflow\n"); 
     return FIRST ;
} 
T=top;
printf("The deleted value is : %d\n",T->val);
 if(c!=1) 
 { 
     top=T->left;
T->left= NULL;
 top->right=NULL;
} 
else if(c==1)
{
FIRST=NULL;
} 
c--; 
return FIRST;
}
int size(struct node* newnode)
{
    int count = 0; 
   struct node *newnode=getnode();
   struct node *temp=newnode; 
    while (temp->right!= NULL)
    {
        count++;
        temp= temp->right;
    }
    return count;
}



void display( struct node *T)
{ 
    if(T==NULL) 
    { 
        printf("Empty\n"); 
    return;
} 
printf("Null −−> "); 
while( T != NULL )
{
printf("%d −−> ",T->val); 
T = T->right;
} 
printf("Null \n\n");
}

int main()
{ 
    struct node *F; 
    int ch;
     F = NULL; 
     top=F; 
     printf("DOUBLY LINKED LIST IMPLEMENTATION OF STACK\n\n"); 
     while(1)
{ 
    printf("1. Add new element\n"); 
    printf("2. Delete element\n");
     printf("3. Display elements \n"); 
     printf("4. size of stack \n");
     printf("5. Exit \n");
      printf("Choice: "); 
      scanf("%d", &ch );
       printf("\n");
 if( ch == 1 )
F = add ( F ); 
else if
( ch == 2 )
F=del(F);
 else if
 (ch==3)
  display( F );
else if
( ch == 4 )
F=size(F);
(ch== 5)
return;
} 
return 0;
}
