#include <stdio.h>
#include<time.h>
#include<windows.h>
void logic()
{
    int number, comp_num, guesses = 0;
    int num,n, max_life = 12;
    printf("___________________________________\n");
    printf("Guess the number between(1 to 100)\n");
    printf("___________________________________\n");
    n=time(0);
    srand(n);
    n = rand() % 100;

    for (int i = 1; num!=n ;i++)
    {
        scanf("%d", &num);
        if (guesses == 12)
        {
            printf("___________________________________\n");
            printf("___________________________________\n");
            printf("\nYou loose the game :(\n");
            printf("___________________________________\n");
            break;
        }
        if (num < n)
        {
            
            printf("___________________________________\n");
            printf("Enter Higher number please!!\n");
            printf("%d Life left.\n", max_life--);
            printf("___________________________________\n");
            guesses++;
        }
        else if (n < num)
        {

            printf("___________________________________\n");
            printf("Enter Lower number please!!\n");
            printf("%d Life left.\n", max_life--);
            printf("___________________________________\n");
            guesses++;
        }
        else
        {
            guesses++;
            printf("\n\n");
            printf("___________________________________\n");
            printf("You win the game (:\n");
            printf("In %d attemps congratulation.\n", guesses);
            printf("___________________________________\n");
        
        }

    } 
} 

int main()
{
    int play;
    for (int i = 1;i!=0;i++)
    {
        printf("\n");
        for (int h = 0; h < 38;h++)
          {
               printf("%c", 178);
          }
        printf("\n");
        printf("          %cNUMBER GUESSING GAME%c\n", 247, 247);
        printf("\n      %c ADARSHA PAUDYAL PROJECT %c\n", 153, 153);
        printf("______________________________________\n");
        printf("PRESS 1 FOR PLAY GAME.\n"
               "PRESS 2 FOR QUIT.\n");
        scanf("%d", &play);
        if(play==1)
        {
            logic();
        }
        else
        {
            exit(0);
        }
    } 
    return 0;
}