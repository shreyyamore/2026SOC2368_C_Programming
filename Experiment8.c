//Program to determine whether the number is positive, negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    
    if (n>0)
    {
        printf("%d is positive\n",n);
    }
    else
    if (n<0)
    {
        printf("%d is negative number\n",n);
    }
    else
    {
        printf("The number is zero");
    }
    return 0;

}