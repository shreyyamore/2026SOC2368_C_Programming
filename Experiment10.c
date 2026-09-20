//multiplication table using for loop 
#include<stdio.h>
int main()
{
    int p,i;
    printf("Enter a number:");
    scanf("%d",&p);
    printf("\nMultiplication Table:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",p,i,p*i);
        
    }
    return 0;


}