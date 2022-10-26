#include <stdio.h>

int main(void)
{
    float a, b, sum;
    printf("Input two floats");
    scanf("%f%f", &a, &b);
    sum = a + b;
    printf("a = %f, b = %f\nsum = %f", a, b, sum);
}

