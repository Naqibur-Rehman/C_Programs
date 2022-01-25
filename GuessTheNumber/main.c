#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // time variable
    time_t t;
    // initialize random number generator
    srand((unsigned)time(&t));
    //random number b/w 0-20
    int randomNnumber = rand()%21;

    int guessedNumber = 0;
    int tryLeft = 5;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess\n");

    for(tryLeft=5; tryLeft>0; --tryLeft)
    {
            printf("You have %d tr%s left\n", tryLeft, tryLeft == 1 ? "y" : "ies");
            printf("Enter a guess : ");
            scanf("%d", &guessedNumber);

            if(guessedNumber == randomNnumber)
            {
                printf("Congratulations. You guessed it!\n");
                break;
            }
            else if(guessedNumber < 0 || guessedNumber > 20) //checking for invalid guess
            {
                printf("I said number is between 0 and 20.\n");
            }
            else if(guessedNumber > randomNnumber)
            {
                printf("Sorry, %d is wrong. My number is less than that.\n", guessedNumber);
            }
            else
            {
                printf("Sorry, %d is wrong. My number is greater than that.\n", guessedNumber);
            }
    }
    if (tryLeft== 0)
        printf("\nYou had 5 tries and failed . The number was %d \n", randomNnumber);

    return 0;
}
