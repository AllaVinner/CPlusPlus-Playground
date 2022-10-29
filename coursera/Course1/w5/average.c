#include <stdio.h>

double update_average(double current_average, double new_value, int num_values)
{
    return (num_values-1.)/num_values*current_average+new_value/num_values;
}


int main(void)
{
    // Delcear variables
    int current_char;
    int current_weight = 0;
    double average = 0.;
    int num_weights = 0;
    do{
        // Read character from file.
        current_char = getchar();
        if ('0' <= current_char && current_char <= '9')
        {
            // If number, concatunate it to the current weight.
            current_weight = 10*current_weight + (int) (current_char - '0');
        }
        else if (current_weight !=  0)
        {
            // If not number, but we have a weight stored.
            // Then update the average with the new weight.        
            num_weights++;
            average = update_average(average, (double) current_weight, num_weights);
            current_weight = 0;
        }
    } while(current_char != EOF);
    printf("There was %d elephants that had an average weight of %0.0lf kilogamms/punds?.", num_weights, average);
    return 0;
}
