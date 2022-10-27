
#include <stdio.h>


int main(void)
{
    int a = 42;
    int* p = &a;
    printf("a: %d\n", a);
    *p = 24;
    printf("a: %d\n", a);
}


