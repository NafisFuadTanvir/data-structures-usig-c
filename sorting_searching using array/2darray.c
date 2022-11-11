#include<stdio.h>
int main()
{

int A[3][3], row,col,i,j;

for(row=0;row<3;row++)
{
    for(col=0;col<3;col++)
{
    printf("A[%d][%d] = row,col");

      scanf("%d",&A[row][col]);
}

}

for(row=0;row<3;row++)
{
    for(col=0;col<3;col++)
{
      printf("%d ",A[row][col]);
}
}

}
