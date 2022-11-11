#include<stdio.h>

int binarysearch(int arr[],int size,int searchitem,int low,int high)
{
if(low>high)

printf("item not found");

int mid;

mid= (low+high)/2;

if(arr[mid]==searchitem)
{
    printf("item is found at %d\n");
    
}
else if(arr[mid]<searchitem)
{
    low= mid+1;
    binarysearch(arr, size, searchitem,low,high);
}

else if(arr[mid]>searchitem)
{
    high= mid-1;
    binarysearch(arr, size, searchitem,low,high);
}


return 0;
}

int main()
{
    int arr[20], size,searchitem;
    int i;

     printf("Enter size of this array: ");
    scanf("%d", &size);
    int low,high;
    low=0;
    high=size-1;
    
   

    printf("Enter elements of this array:- ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the searching item:-");

    scanf("%d",&searchitem);

binarysearch(arr, size, searchitem,low,high);


}