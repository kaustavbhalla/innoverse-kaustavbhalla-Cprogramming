#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    //Let's start by defining variables :)
    char player1[100];
    char player2[100];
    char buffer[100];
    int scorePlayer1 = 0;
    int scorePlayer2 = 0;

    //Let's get input now :)
    printf("Player 1: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%s", player1);
    // printf("Player 1 input: %s\n", player2);  CheckLine :)
    
    printf("Player 2: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%s", player2);
    // printf("Player 2 input: %s\n", player2);  CheckLine :)

    //Main logic :)
    for (int i = 0; i < strlen(player1); ++i){
        if (tolower(player1[i]) == 'a'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'b'){
            scorePlayer1 += 3;
        }else if (tolower(player1[i]) == 'c'){
            scorePlayer1 += 3;
        }else if (tolower(player1[i]) == 'd'){
            scorePlayer1 += 2;
        }else if (tolower(player1[i]) == 'e'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'f'){
            scorePlayer1 += 4;
        }else if (tolower(player1[i]) == 'g'){
            scorePlayer1 += 2;
        }else if (tolower(player1[i]) == 'h'){
            scorePlayer1 += 4;
        }else if (tolower(player1[i]) == 'i'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'j'){
            scorePlayer1 += 8;
        }else if (tolower(player1[i]) == 'k'){
            scorePlayer1 += 5;
        }else if (tolower(player1[i]) == 'l'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'm'){
            scorePlayer1 += 3;
        }else if (tolower(player1[i]) == 'n'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'o'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'p'){
            scorePlayer1 += 3;
        }else if (tolower(player1[i]) == 'q'){
            scorePlayer1 += 10;
        }else if (tolower(player1[i]) == 'r'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 's'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 't'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'u'){
            scorePlayer1 += 1;
        }else if (tolower(player1[i]) == 'v'){
            scorePlayer1 += 4;
        }else if (tolower(player1[i]) == 'w'){
            scorePlayer1 += 4;
        }else if (tolower(player1[i]) == 'x'){
            scorePlayer1 += 8;
        }else if (tolower(player1[i]) == 'y'){
            scorePlayer1 += 4;
        }else if (tolower(player1[i]) == 'z'){
            scorePlayer1 += 10;
        }else{
            scorePlayer1 += 0;
        }
    }



    for (int i = 0; i < strlen(player2); ++i){
        if (tolower(player2[i]) == 'a'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'b'){
            scorePlayer2 += 3;
        }else if (tolower(player2[i]) == 'c'){
            scorePlayer2 += 3;
        }else if (tolower(player2[i]) == 'd'){
            scorePlayer2 += 2;
        }else if (tolower(player2[i]) == 'e'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'f'){
            scorePlayer2 += 4;
        }else if (tolower(player2[i]) == 'g'){
            scorePlayer2 += 2;
        }else if (tolower(player2[i]) == 'h'){
            scorePlayer2 += 4;
        }else if (tolower(player2[i]) == 'i'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'j'){
            scorePlayer2 += 8;
        }else if (tolower(player2[i]) == 'k'){
            scorePlayer2 += 5;
        }else if (tolower(player2[i]) == 'l'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'm'){
            scorePlayer2 += 3;
        }else if (tolower(player2[i]) == 'n'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'o'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'p'){
            scorePlayer2 += 3;
        }else if (tolower(player2[i]) == 'q'){
            scorePlayer2 += 10;
        }else if (tolower(player2[i]) == 'r'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 's'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 't'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'u'){
            scorePlayer2 += 1;
        }else if (tolower(player2[i]) == 'v'){
            scorePlayer2 += 4;
        }else if (tolower(player2[i]) == 'w'){
            scorePlayer2 += 4;
        }else if (tolower(player2[i]) == 'x'){
            scorePlayer2 += 8;
        }else if (tolower(player2[i]) == 'y'){
            scorePlayer2 += 4;
        }else if (tolower(player2[i]) == 'z'){
            scorePlayer2 += 10;
        }else{
            scorePlayer2 += 0;
        }
    }

    if (scorePlayer1 > scorePlayer2){
        printf("Player 1 wins!");
    }else if (scorePlayer1 < scorePlayer2){
        printf("Player 2 wins!");
    }else if(scorePlayer1 == scorePlayer2){
        printf("Tie!");
    }



}