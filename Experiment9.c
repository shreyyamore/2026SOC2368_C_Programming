//Calculator for arithmetic operations using switch case
#include<stdio.h>
int main()
{
    int a,b,c=0,ch;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("1.Add 2.Subtract 3.Multiply 4.Divide");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=a+b;
        printf("c=%d",c);
        break;
        case 2:
        c=a-b;
        printf("c=%d",c);
        break;
        case 3:
        c=a*b;
        printf("c=%d",c);
        break;
        case 4:
        c=a/b;
        printf("c=%d",c);
        break;
        default:
        printf("Invalid Choice");
    }
    return 0;

}