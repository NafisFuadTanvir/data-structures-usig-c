#include<stdio.h>
int loc;
void min(int a[],int k,int n)
{
int min,j;
min=a[k];
loc= k;
for(j=k+1;j<n;j++)
{
    if(min>a[j])
    {
        min=a[j];
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
for(k=0;k<=n-1;k++)
{
    min(a,k,n);
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