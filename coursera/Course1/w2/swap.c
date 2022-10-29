#include <stdio.h>


void swap(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(void)
{
    int a = 1;
    int b = 345;
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
}


