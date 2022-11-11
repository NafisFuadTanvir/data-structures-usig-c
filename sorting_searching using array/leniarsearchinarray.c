#include<stdio.h>
#include<string.h>
int main()
{
char list[20],element;
int size,i,l;


printf("enter any charecter values:-");
gets(list);

l=strlen(list);


printf("enter the element to be searched:- ");
 scanf("%c",&element);

for(i=0;i<l;i++)
{
    if(element == list[i])
    {
        printf("elment is found at %d index:-",i);
        break;
    }
}
if(i==l)
{
    printf("given element is not found in this list!!!");
}
return 0;
}