#include <stdio.h>
#include <stdlib.h>

void updateBoard(int arr[3][3]){
    printf("  A  B  C\n");
    for (int j = 0; j<3; j++){
        printf("%i", j+1);
        for (int i=0; i<3; i++){
            printf(" %i ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    char cmd[2];
    int gameover = 0;
    char *turn = "A";
    do
    {
        printf("Enter your command: ");
        scanf("%s", cmd);
        if (turn == "A"){
            int row = (int) cmd[0]-97;
            char temp = cmd[1];
            int column = (int) (temp - '0');
            updateBoard(arr);
            break;
        }
    }while (gameover == 0);
    return 0;
}
