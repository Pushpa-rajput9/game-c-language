#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int num, guess, nguesses = 1;
    srand(time(0));
    num = rand() % 100 + 1; // to generate a random number
    do
    {
        printf("guess a number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("HIGHER NUMBER PLEASE\n");
        }
        else if (guess > num)
        {
            printf("LOWER NUMBER PLEASE\n");
        }
        else
        {
            printf("YOU GUESS CORRECT NUMBER IN %d ATTEMPTS", nguesses);
        }
        nguesses++;

    } while (guess != num);
    getch();
}