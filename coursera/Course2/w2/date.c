#include <stdio.h>
typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
typedef struct date{ month m; int d;} date;

int monthLen(date* d)
{
    switch (d->m)
    {
    case jan: return 31;
    case feb: return 28;
    case mar: return 31;
    case apr: return 30;
    case may: return 31;
    case jun: return 30;
    case jul: return 31;
    case aug: return 31;
    case sep: return 30;
    case oct: return 31;
    case nov: return 30;
    case dec: return 31;
    default: printf("Did not exptect month %d\n", d->m); return 0;
    }
}

void printDate(date* d)
{
    switch (d->m)
    {
    case jan: printf("January "); break;
    case feb: printf("February "); break;
    case mar: printf("Mars "); break;
    case apr: printf("April "); break;
    case may: printf("May "); break;
    case jun: printf("June "); break;
    case jul: printf("July "); break;
    case aug: printf("August "); break;
    case sep: printf("September "); break;
    case oct: printf("October "); break;
    case nov: printf("November "); break;
    case dec: printf("December "); break;  
    default:
        printf("Date entered was not recognized. Got %d\n", d->m);
        break;
    }
    printf("%d\n", d->d);
}

void nextDay(date* d)
{
    if (monthLen(d) < d->d+1)
    {
        d->m = (d->m + 1) % 12;
        d->d = 1;
    } else 
        d->d++; 
}

int main(void)
{
    date d ={feb, 28};
    printDate(&d);
    nextDay(&d);
    printDate(&d);  
    
    d = (date) {mar, 14};
    printDate(&d);
    nextDay(&d);
    printDate(&d);  
    
    d = (date) {oct, 31};
    printDate(&d);
    nextDay(&d);
    printDate(&d);

    d = (date) {dec, 31};
    printDate(&d);
    nextDay(&d);
    printDate(&d);  

    return 0;
}



