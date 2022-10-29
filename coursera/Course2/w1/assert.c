#include<stdio.h>
#include<assert.h>


int main(void)
{
    int a = 1;
    assert(a < 0);
    printf("Made it passes assert.");
    return 0;
}