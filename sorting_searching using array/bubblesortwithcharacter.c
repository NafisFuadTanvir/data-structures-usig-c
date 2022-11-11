#include<stdio.h>
#include<string.h>
 int main()
 {
     int i,j,size;
     printf("enter array size: ");
     scanf("%d",&size);

     char nafis[size];
     char temp;

     printf("enter string: ");
     scanf("%d",nafis);

     for( j=1; j<size; j++)
    {
        for( i=0; i<size-j; i++)
        {
            if ( nafis[i]>nafis[i+1] )
            {
                temp= nafis[i];
                nafis[i]= nafis[i+1];
                nafis[i+1]= temp;
            }
        }
    }
    printf("sorted array is %s",nafis);
    return 0;

 }