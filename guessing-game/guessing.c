#include <stdio.h>

#define MAX_ATTEMPTS 5

// main() is the entrypoint
int main()
{

    // Printing game header
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");

    int secretNumber = 42;

    // Default value for typed typedValue, since its not been initalized, is the memory value
    int typedValue;

    for (int i = 0; i < MAX_ATTEMPTS; i++)
    {
        printf("\nAttempt %d of %d", i + 1, MAX_ATTEMPTS);

        printf("\nGuess what is the secret number:\n");

        //%d is used to ensure the we are reading an int from console
        scanf("%d", &typedValue);

        int rightAttempt = (secretNumber == typedValue);

        if (rightAttempt)
        {
            // Like string.format in C#.
            printf("That's it!! Your attempt is right, the secret number is %d. \n", typedValue);

            break;
        }

        printf("The secret number isn't %d \n", typedValue);

        int higherAttempt = (typedValue > secretNumber);

        if (higherAttempt)
        {
            printf("Your attempt is higher than the secret number. \n");
            continue;
        }

        printf("Your attempt is lower than the secret number. \n");
    }
}