#include<stdio.h>
#define a 5
int main()
{

int nafis[a],i;

for(i=0;i<a;i++)
{
    scanf("%d" ,&nafis[i]);
}

printf("orgenial number:- \n");

for(i=0;i<a;i++)
    
{
    printf("%d ",nafis[i]);
}
printf("\n");

printf("reverse number:- \n");
for(i=4;i>=0;i--)
{
    printf("%d ",nafis[i]);
}
return 0;
}