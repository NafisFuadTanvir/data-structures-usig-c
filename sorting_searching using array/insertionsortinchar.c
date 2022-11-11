#include<stdio.h>
 int main()
{
 int length, i, j;
  
 printf("Enter the length:- ");  
 scanf("%d", &length);
 
 char A[length];
	
    char temp;
printf("enter the string:-");

scanf("%s", A);


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
 printf("after sorted:- %s",A);
    
	    return 0;
	}
