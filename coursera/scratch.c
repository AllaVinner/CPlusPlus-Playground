#include<stdio.h>

struct  data
{
    int a;
    int b;
    double dd;
    double ddd;
};

double sum(struct data d)
{
    d.a = 99;
    return d.a + d.b + d.dd + d.ddd;
}


int main(void)
{ 
    struct data d;
    d.a = 1;
    d.b = 2;
    d.dd = 3.141;
    d.ddd = 2.781;
    printf("Size of data %d\n", sum(d));
    printf("Size of data %d\n", d.a);
    return 0;
}