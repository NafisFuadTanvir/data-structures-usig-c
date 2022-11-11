#include<stdio.h>
int loc;
void max(int a[],int k,int n)
{
int max,j;
max=a[k];
loc= k;
for(j=k-1;j>=n;j--)
{
    if(max<a[j])
    {
        max=a[j];
        loc=j;
    }
}
}

int main()
{
int a[50],k,n,i,temp,j;

printf("enter the size of array:-");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=n-1;k>0;k--)
{
    max(a,k,0);
    temp=a[k];
    a[k]= a[loc];
    a[loc]= temp;
}
printf("after sorted:-\n");

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}


}