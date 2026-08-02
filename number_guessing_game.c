#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;

    srand(time(0));
    num = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {

        printf("guess the number");
        scanf("%d", &guessed);
        if (guessed > num)
        {
            printf("lower number please!!\n");
        }
        else if (guessed < num)
        {
            printf("higher number please!!\n");
        }
        else
        {
            printf("Congrats, you guessed it right!!\n");
        }
        no_of_guesses++;
    } while (guessed != num);
    printf("you guessed the number in %d guesses", no_of_guesses);
    return 0;
}