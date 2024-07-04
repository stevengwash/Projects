#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 0;
    const int MAX = 1000;
    int guess;
    int guesses;
    int answer;

    srand(time(0));
    answer = (rand() % MAX) + MIN;
    printf("%d", answer);
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("too high!\n");
        }
        else if (guess < answer)
        {
            printf("too low!\n");
        }
        else
        {
            printf("bingo.\n");
        }
        guesses++;
    } while (guess != answer);
    printf("*****************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("*****************************\n");

    return (0);
}