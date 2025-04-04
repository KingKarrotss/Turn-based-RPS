#include <stdio.h>

int main()
{
    int turn = 1;
    int x = 1;
    char move;
    while(1)
    {
        printf("Turn %d , Player %d \n Select move: ", x, turn);
        scanf("%c", &move);
        if(turn == 1)
        {
            turn++;
        }
        else if(turn == 2)
        {
            turn--;
            x++;
        }
        if(move == 'q')
        {
            break;
        }
    }
}