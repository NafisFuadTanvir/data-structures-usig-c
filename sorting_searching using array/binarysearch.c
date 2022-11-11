#include<stdio.h>
 
int main()
{
    int arr[10],i,n,search,first,last,mid;
 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("enter the elements:-\n");

    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
 
    printf("\nEnter the element to search:");
    scanf("%d",&search);
 
    first=0;
    last=n-1;
 
    while(first<=last)
    {
        mid=(first+last)/2;
 
        if(search==arr[mid]){
            break;
        }
        else
            if(search>arr[mid])
                first=mid+1;
            else
                last=mid-1;
    }
    if(search==-1)
        printf("\nElement found at position %d",mid+1);
    else
        printf("\nElement not found");
 
    return 0;
}

