#include <stdio.h>

double average(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += array[i];
    }
    return (double) sum / size;
}

int main(void)
{
    // Len must be known at compile time
    int data [10] = {0};
    for(int i=0; i<10; ++i)
    {
        printf("Item %d Val %d\n", i, data[i]);
    }

     // "ab" is represented as ['a', 'b', '\0']
     // where '\0' is the sentinel value. Marks th
    printf("\n");
    char string [5] = {'a', 'b', 'c', 'd', 'e'};
    for(int i=0; i < 5; i++)
    {
        printf("%c*", string[i]);
    }

    int arr [] = {1,2,5,3,2};
    double avg = average(arr, 5);
    printf("\nAverage is: %lf", avg);

}


