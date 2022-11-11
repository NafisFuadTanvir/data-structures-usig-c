#include <stdio.h>
#include<math.h>
int main()
{
    int i, j, rows, columns;
    float p,n;
    
    p= floor((4*n-2.5)/5.8);

 printf("Enter the rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
          
                printf("*");
            }
            else
            {
                
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}