#include<stdio.h>
#include<stdlib.h>
int main()
{
float *nafis;
nafis= (float *)malloc(sizeof nafis);

if(nafis==NULL)
{
    printf("memory is not allocated\n");
}
else{
    printf("memory allocated\n");
    free(nafis);
    printf("freed\n");
}


    
}