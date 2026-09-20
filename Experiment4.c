//Program to swap two numbers using a temporary variable 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before Swapping:a=%d,b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping:a=%d,b=%d\n",a,b);

    return 0;
    
}