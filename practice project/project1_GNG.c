#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    srand(time(0));
    int random = rand() % 50 + 1;

    int guess, attempts = 1;

    printf("------GUESSING NUMBER GAME------\n");
    printf("\nGuess the number between (0-50) : ");

    do
    {
        scanf("%d", &guess);

        if (guess > random && guess < 51)
            printf("\nOops!!! Try guessing a smaller number than %d : ", guess);
        else if (guess < random && guess < 51)
            printf("\nOops!!! Try guessing a bigger number than %d : ", guess);
        else if (guess == random)
            printf("\nhooray!!! you guessed the number in %d attempts", attempts);
        else
            printf("\nPlease input a valid number between (0-50) : ");

        attempts++;

    } while (random != guess);

    printf("\nPress any key to exit....");
    getch();

    return 0;
}