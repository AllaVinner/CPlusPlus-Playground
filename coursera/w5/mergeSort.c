#include <stdio.h>


void merge(int ina[], int inb[], int out[], int sizea, int sizeb)
{
    int i = 0, j = 0, k = 0;
    while (i < sizea && j < sizeb)
    {
        if(ina[i] < inb[j])
        {
            out[k] = ina[i];
            i++;
        }
        else
        {
            out[k] = inb[j];
            j++;
        }
        k ++;
    };
    while (i < sizea)
    {
        out[k] = ina[i];
        i ++;
        k ++;
    }
    while (j < sizeb)
    {
        out[k] = inb[j];
        j ++;
        k ++;
    }
}


void print_list(int l[], int len)
{
    for(int i=0; i < len; i++)
    {
        printf("Val %d is %d\n", i, l[i]);
    }
}


void sort(int a [], int len)
{
    if (len == 1)
        return;
    int len0 = len / 2;
    int len1 = len - len0;
    sort(a, len0);
    sort(a + len0, len1);
    int tmp [len];
    merge(a, a+len0, tmp, len0, len1);
    for(int i=0; i<len; i++)
        a[i] = tmp[i];
}

int main(void)
{
    int SIZE = 7;
    int a[SIZE] = {1,5,2,7,3, -1, 3};
    print_list(a, SIZE);   
    sort(a, SIZE);
    print_list(a, SIZE);
    return 0;
}



