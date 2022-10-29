#include <stdio.h>
#define PI 3.141592
int main() 
{
    double radius, area;
    printf("Enter Radius\n>> ");
    scanf("%lf", &radius);
    area = PI*radius*radius;
    printf("The area the is %f", area );
}

