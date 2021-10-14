#include <stdio.h>
#include <stdlib.h>

void updateBoard(int arr[3][3]){
    printf("  A  B  C\n");
    for (int i = 0; i<3; i++){
        printf("%i", i+1);
        for (int j=0; j<3; j++){
            if (arr[i][j] == 0){
                printf(" - ");
            }else if (arr[i][j] == 1){
                printf(" X ");
            }else if (arr[i][j] == 2){
                printf(" O ");
            }
            
        }
        printf("\n");
    }
}


int main()
{
    int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    char cmd[2];
    int gameover = 0;
    char *turn = "X";
    void checkBoard(int arr[3][3]){
        // Function not finished
        if (arr[0][0] ==  arr[0][1] ==  arr[0][2] != 0){
            gameover = 1;
        }else if (arr[1][0] == arr[1][1] == arr[1][2] != 0){
            gameover = 1;
        }else if (arr[2][0] == arr[2][1] == arr[2][2] != 0){
            gameover = 1;
        }else if (arr[0][0] == arr[1][0] == arr[2][0] != 0){
            gameover = 1;
        }else if (arr[0][1] == arr[1][1] == arr[2][1] != 0){
            gameover = 1;
        }else if (arr[0][2] == arr[1][2] == arr[2][2] != 0){
            gameover = 1;
        }else if (arr[0][0] == arr[1][1] == arr[2][2] != 0){
            gameover = 1;
        }else if (arr[0][2] == arr[1][1] == arr[2][0] != 0){
            gameover = 1;
        }
    }
    do
    {
        printf("Enter your command: ");
        scanf("%s", cmd);
        
        int column = (int) cmd[0]-97;
        char temp = cmd[1];
        int row = (int) (temp - '0')-1;

        if (turn == "X"){
            if (arr[row][column] != 0){
                printf("\nWrong command: column already marked\n");
                continue;
            }else{
                arr[row][column] = 1;
                turn = "O";
            }
        }else if (turn == "O"){
            if (arr[row][column] != 0){
                printf("\nWrong command: column already marked\n");
                continue;
            }else{
                arr[row][column] = 2;
                turn = "X";
            }
        }
        checkBoard(arr);
        updateBoard(arr);
    }while (gameover == 0);
    return 0;
}
