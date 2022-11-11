#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head = NULL;

void insertAtBeginning(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if(head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    printf("\nOne node inserted!!!\n");
}

void insertAtEnd(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next =newNode;
        printf("\nOne node inserted!!!\n");
    }

}

void Display()
{
    if(head == NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        struct Node *temp =head;
        printf("\n\nList elements are - \n");
        while(temp->next != NULL)
        {
            printf("%d --->",temp->data);
            temp= temp->next;
        }
        printf("%d --->NULL",temp->data);
    }
}

int main()
{
    int choice,value,choice1,loc1,loc2;
    while(1)
    {
        mainMenu: printf("\n\n****** MENU ******\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d",&value);
                while(1)
                {
                    printf("Where you want to insert: \n1. At Beginning\n2. AtEnd\nEnter your choice: ");
                    scanf("%d",&choice1);
                    switch(choice1)
                    {
                    case 1:
                        insertAtBeginning(value);
                        break;
                    case 2:
                        insertAtEnd(value);
                        break;
                    default:
                        printf("\nWrong Input!! Try again!!\n\n");
                        goto mainMenu;
                    }
                    goto subMenuEnd;
                }
            subMenuEnd:
            break;
                    case 2:
                        Display();
                        break;
                    case 3:
                        exit(0);
                    default:
                        printf("\nWrong input!! Try Again!!\n\n");
        }
    }
    return 0;
}