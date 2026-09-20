//Nested for loop pattern printing 1
#include<stdio.h>
int main()
{
    int i, j;

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("*");
        }
         printf("\n");
    }

    return 0;

}