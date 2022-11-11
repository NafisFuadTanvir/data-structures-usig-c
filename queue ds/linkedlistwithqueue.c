#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
struct node *temp;
 temp=front;
if(front==NULL && rear==NULL)
{
    printf("queue is empty");
}
else{

   front= front->next;
   free(temp);

}




}
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = front;
        while (front != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{

enqueue(10);
enqueue(20);
enqueue(50);
display();
dequeue();
display();


}