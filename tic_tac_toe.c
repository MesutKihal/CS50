#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    char cmd[2];
    int gameover = 0;
    char *turn = "A";
    do
    {
        scanf("%s", cmd);
        if (turn == "A"){
            int column = (int) cmd[0]-97;
            char row = cmd[1];
            printf("%i", column);
            break;
        }
    }while (gameover == 0);
    return 0;
}
