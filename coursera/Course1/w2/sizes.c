#include <stdio.h>


int main(void)
{
    printf("size of int: %d\n", sizeof(int));
    printf("size of int*: %d\n", sizeof(int*));
    printf("size of double*: %d\n", sizeof(double));
    printf("size of double*: %d\n", sizeof(double*));
    printf("size of double**: %d\n", sizeof(double**));
	return 0;
}
