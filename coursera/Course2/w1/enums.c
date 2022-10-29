//#include <stdio.h>
#define NUMDAYS 7

enum day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY}; 


enum day next_day(enum day d)
{
    return((d + 1) % NUMDAYS);
}
    
int main(void)
{
    enum day d = SUNDAY;
    printf("Today is day num %d\n", d);
    printf("Tomorrow is day num %d\n", next_day(d));
    
    return 0;
}

