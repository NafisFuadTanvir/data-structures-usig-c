#include<stdio.h>
int main()
{

int arr[50],i,size,elements,search,low,high,mid;

printf("enter the size of this array:-\n");
scanf("%d",&size);
printf("enter the elements of this array:- ");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the searching number:- ");

scanf("%d",&search);
low=0;
high= size-1;
mid=(low+high)/2;

while(low<=high)
{



if(arr[mid]==search)
{
    printf("the item is found in %d index\n",mid);

}
else if(arr[mid]<search)
{
    low=mid+1;
}
else 

{
   high= mid-1;
}

}
printf("the number is not found");

return 0;


}

