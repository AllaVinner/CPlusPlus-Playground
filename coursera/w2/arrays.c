#include <stdio.h>

int main(void)
{
    // Len must be known at compile time
    int data [10];
    for(int i=0; i<10; ++i)
    {
        printf("Item %d Val %d\n", i, data[i]);
    }

}


