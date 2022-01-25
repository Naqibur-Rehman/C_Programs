#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes;
    int minutesYear = 365*24*60;
    double years, days;

    printf("Enter number of minutes : ");
    scanf("%d", &minutes);

    years = minutes/minutesYear;
    days = (minutes/60.0)/24.0;

    printf("%d minutes approximately %lf days and %lf years\n", minutes, days, years);

    return 0;
}
