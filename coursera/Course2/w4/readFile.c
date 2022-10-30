#include <stdio.h>

void read_int_from_file(FILE* infile, int data[], int* data_len)
{
    int i;
    fscanf(infile, "%d", data_len);
    for(i=0; i<(*data_len); i++)
        fscanf(infile, "%d", &data[i]);
}

double average(int data[], int data_len)
{
    double avg = 0.;
    int i;
    for(i=0; i<data_len; i++)
        avg += ((double) data[i])/data_len;
    return avg;
}

int max(int data[], int data_len)
{
    int i;
    int current_max = data[0];
    for(i=0; i < data_len; i++)
    {
        if (data[i] > current_max)
            current_max = data[i];
    }
    return current_max;
}

int main(int arc, char* argv[])
{
    FILE* infile = fopen(argv[1], "r");
    FILE* outfile = fopen(argv[2], "w");
    int data [10000];
    int num_data;
    read_int_from_file(infile, data, &num_data);
    int data_max = max(data, num_data);
    double data_avg = average(data, num_data);
    fprintf(outfile, "The file %s had %d numbers with an average value of %0.3lf and a max value of %d.\n", argv[1], num_data, data_avg, data_max);
    printf("max %d\n", data_max);
    printf("avg %lf", data_avg);
    fclose(infile);
    return 0;
}