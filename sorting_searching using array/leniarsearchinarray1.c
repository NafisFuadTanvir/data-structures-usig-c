#include<stdio.h>
int main()
{
int arr[24],i,k,size_of_array,position;
position= -1;
printf("Enter the size of this array:-\n");
scanf("%d",&size_of_array);
for(i=0;i<size_of_array;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the finding number:-");

scanf("%d",&k);

for(i=0;i<size_of_array;i++)
{
if(arr[i]==k)
{
    position=i+1;

    printf("the number is found in this array at %d position",i);
    break;
}

}
if(position== -1)
{
    printf("the item is not found");
}
return 0;
}