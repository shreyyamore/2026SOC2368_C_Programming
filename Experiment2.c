//Program tp calculate area of circle 
#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area,p=3.14159;
    printf("Enter radius of a circle:");
    scanf("%f",&radius);
    area=p*radius*radius;

    printf("Area of circle=%2f\n",area);
    return 0;
    

}
