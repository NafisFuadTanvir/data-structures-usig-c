#include<stdio.h>
 int main()
{
 int length, i, j, temp;
 int A[50]; 
 printf("Enter the length:- ");  
 scanf("%d", &length);
	 
printf("enter the elements:-");
for (i = 0; i < length; i++)
 {
scanf("%d", &A[i]);
}
 for (i = 1; i<= length-1; i++)
{
j = i;
 while ( j > 0 && A[j-1] >A[j])
  {	        
	 temp = A[j];
     A[j] = A[j-1];
      A[j-1] = temp;
    j--;
        }
}
 printf("after sorted:-\n");
    
    for (i = 0;i <=length-1; i++)
{
	 printf("%d ", A[i]);
	}
	    return 0;
	}
