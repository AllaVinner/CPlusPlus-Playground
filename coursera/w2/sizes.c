#include <stdio.h>


int main(void)
{
	short int si = 0;
	// what happens with overfloow
	printf("Size of short in: %d", sizeof(si));
	si += 123456789;
	printf("Value of overflow short in: %d", si);
	return 0;
}
