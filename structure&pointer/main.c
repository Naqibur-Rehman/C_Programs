#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date today, *datePtr;

    datePtr = &today;

    datePtr->day = 16;
    datePtr->month = 5;
    datePtr->year = 2020;

    printf("Today's date is %i/%i/%i", (*datePtr).day, datePtr->month, datePtr->year);

    return 0;
}
