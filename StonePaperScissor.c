#include <stdio.h>
#include <time.h>

int main()
{
    char choice[8];
    int choiceNum;
    printf(" _______________________________________\n");
    printf("|                                       |\n");
    printf("|\t   Make your choice \t\t|\n|\t\t\t\t\t|\n");
    printf("| Stone\t\tPaper\t\tScissor |\n");
    printf("|_______________________________________|\n\n");
    printf("Choice: ");
    scanf("%s",&choice);
    if(choice[0] == 'P')
    {
        choiceNum = 2;
    }
    else
    {
        if(choice[1] == 't')
        {
            choiceNum = 1;
        }
        else
        {
            choiceNum = 3;
        }
    }
    time_t currentTime = time(NULL);
    currentTime = (currentTime%3) + 1;
    if(choiceNum == 1)
    {
        if(currentTime == 1)
        {
            printf("Stone vs Stone.\n");
            printf("Match Drawed.\n");
        }
        else if(currentTime == 2)
        {
            printf("Paper beats Stone.\n");
            printf("Computer Wins.\n");
        }
        else
        {
            printf("Stone beats Scissor.\n");
            printf("Player Wins.\n");
        }
    }
    else if(choiceNum == 2)
    {
        if(currentTime == 1)
        {
            printf("Paper beats Stone.\n");
            printf("Player Wins.\n");
        }
        else if(currentTime == 2)
        {
            printf("Paper vs Stone.\n");
            printf("Match Drawed.");
        }
        else
        {
            printf("Scissor beats Paper.\n");
            printf("Computer Wins.\n");
        }
    }
    else
    {
        if(currentTime == 1)
        {
            printf("Stone beats Scissor.\n");
            printf("Computer Wins.\n");
        }
        else if(currentTime == 2)
        {
            printf("Scissor beats Paper.\n");
            printf("Player Wins.\n");
        }
        else
        {
            printf("Scissor vs Scissor.\n");
            printf("Match Drawed.\n");
        }
    }
    
    return 0;
}
