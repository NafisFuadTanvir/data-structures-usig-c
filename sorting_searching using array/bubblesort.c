#include<stdio.h>

int main()
{
char nafis[50],i,j,size,temp;

printf("enter the size for the array:- ");
scanf("%d",&size);

printf("enter the elements:-\n");

for(i=0;i<size;i++)
{
   
    scanf("%d",&nafis[i]);
}
for(i=0;i<size-1;i++)
{
    for(j=0;j<size-1;j++)
    {
if(nafis[j]>nafis[j+1])
{  
    temp= nafis[j];
    nafis[j]= nafis[j+1];
    nafis[j+1]= temp;
}
}
}

printf("the numbers after swapping:- ");
for(i=0;i<size;i++)
{
    
    printf("%d ",nafis[i]);
}
}