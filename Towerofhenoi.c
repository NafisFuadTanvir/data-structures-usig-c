#include<stdio.h>
#define N 10
void towerofhanoi(int n,char from,char to,char temp)
{
    if(n>0)
    {
        towerofhanoi(n-1,from,temp,to);
        printf("move the %d disk from %c to %c\n",n,from,to);
        towerofhanoi(n-1,temp,to,from);


    }
}
int main()
{

    towerofhanoi(N, 'A', 'B','C');
}