
#include <stdio.h>


void swap(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void sort(int* a, int size)
{
    int temp;
    for (int i=0; i < size; i ++)
    {
        for (int j=0; j < i; j ++)
        {
            if (a[i] < a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}

void printArray(int* a, int size)
{
    for (int i=0; i < size; i++)
    {
        printf("%d, ", a[i]);
    }
}


int main(void)
{
    int a [] = {1,5,3,2};
    printArray(a, 4);
    sort(a, 4);
    printArray(a, 4);
    return 0;
}


