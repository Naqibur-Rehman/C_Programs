#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO=10, EBAY, MICROSOFT};
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;
    printf("The value of xerox is: %d\n", XEROX);
    printf("The value of google is: %d\n", GOOGLE);
    printf("The value of ebay is: %d\n", EBAY);

    return 0;
}
