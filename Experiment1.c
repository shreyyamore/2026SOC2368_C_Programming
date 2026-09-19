//To write a C program that demonstrates the use of basic input/output functions (scanf and printf) for handling different data types such as int,float,char,double
#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;
    char name[50];

    printf("Enter an integer:");
    scanf("%d",&a);

    printf("Enter a float value:");
    scanf("%f",&b);
    
    printf("Enter a double value :");
    scanf("%lf",&c);

    printf("Enter a single character:");
    scanf(" %c",&ch); //add space for %c

    printf("Enter a string name:");
    scanf("%s",name);

    printf("\n Output \n");
    printf("Integer Entered:%d\n",a);
    printf("Float Entered: %2f\n",b);
    printf("Double Entered: %2lf\n",c);
    printf("Character Entered: %c\n",ch);
    printf("String Entered: %s\n",name);

    return 0;
}
