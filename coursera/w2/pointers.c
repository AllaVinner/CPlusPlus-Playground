
#include <stdio.h>


int main(void)
{
    int a = 42;
    int* p = &a;
    printf("a: %d\n", a);
    *p = 24;
    printf("a: %d\n", a);
    printf("-----------------\n");
    printf("p: %d\n", p);
    printf("*p: %d\n", *p);
    printf("&p: %d\n", &p);
    printf("-----------------\n");
    int a2 = 100;
    int* p2 = &a2;
    int** pp2 = &p2;
    printf("\t & \t . \t *\n");
    printf("a2: %d \t%d \t%d \n", &a2, a2, 0);
    printf("p2: %d \t%d \t%d \n", &p2, p2, *p2);
    printf("pp2: %d \t%d \t%d \n", &pp2, pp2, *pp2);
}


