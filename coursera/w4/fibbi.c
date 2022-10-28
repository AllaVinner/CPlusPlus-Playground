#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int fibbi(int fibbi_index)
{
    if (fibbi_index == 0 || fibbi_index == 1)
        return 1;
    else
        return fibbi(fibbi_index-1)+fibbi(fibbi_index-2);
}


int main(void)
{ 
    int fi = 5;
    printf("Fibb %d is %d\n", fi, fibbi(fi));
}