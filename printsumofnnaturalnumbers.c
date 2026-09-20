//Program to print the sum of n natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter value of n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);
    return 0;

    }
