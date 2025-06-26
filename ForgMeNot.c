#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int user_num;
    char playagain[5];
    while (strcmp(playagain, "no") != 0)
    {
        srand(time(0));
        int random = rand() % 10000000 + 1;
        printf("This is a random number : %d, remember it untill 5 seconds \n", random);
        for (int i = 5; i >= 1; i--)
        {
            printf(" %d\n", i);
            Sleep(1000);
        }
        system("cls");
        printf("Now enter that exact number : ");
        scanf("%d", &user_num);
        if (user_num == random)
        {
            printf("Congrats! the number is right!!\n");
        }
        else
        {
            Beep(100, 1000);
            printf("Oops! The number you entered is wrong!!, the correct answer is : %d \n", random);
        }
        printf("Want to play again ? ");
        printf("Reply typing Yes or no : \n");
        scanf("%s", playagain);

        for (int i = 0; playagain[i]; i++) {
            playagain[i] = tolower(playagain[i]);
        }

        if(strcmp(playagain,"yes") == 0)
        {
            system("cls");
        }
        else if(strcmp(playagain,"no") == 0)
        {
            printf("Thanks for playing!!");
            break;
        }
    }
}