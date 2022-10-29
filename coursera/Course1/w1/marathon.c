/*
Miles to KM
*/
#include <stdio.h>

int main(void)
{
    int miles = 25, yards = 385;
    double km;
    km = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n\n", km);
    return 0;
}

