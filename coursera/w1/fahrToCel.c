#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    printf("Please enter fahrenheit as an integer:");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit -32)/1.8; // silent conversions first to dub then to int.
    printf("\n %d fahrenheit is %d celsius\n", fahrenheit, celsius);
    return 0;
}
