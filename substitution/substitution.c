#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"


int main(int argc, char *argv[]){
    if (argc != 2){
        printf("Usage: ./substitution key\n");
        return 1;
    }else if (argc == 2 & strlen(argv[1]) != 26){
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    char cipher[100];
    strcpy(cipher, argv[1]);
    string plainText = get_string("plaintext: ");

    int i = 0;
    while (plainText[i] != '\0'){
        if ((plainText[i] >= 'a') && (plainText[i] <= 'z')){
            if (plainText[i] == 'a'){
                plainText[i] = tolower(cipher[0]);
            }else if (plainText[i] == 'b'){
                plainText[i] = tolower(cipher[1]);
            }else if (plainText[i] == 'c'){
                plainText[i] = tolower(cipher[2]);
            }else if (plainText[i] == 'd'){
                plainText[i] = tolower(cipher[3]);
            }else if (plainText[i] == 'e'){
                plainText[i] = tolower(cipher[4]);
            }else if (plainText[i] == 'f'){
                plainText[i] = tolower(cipher[5]);
            }else if (plainText[i] == 'g'){
                plainText[i] = tolower(cipher[6]);
            }else if (plainText[i] == 'h'){
                plainText[i] = tolower(cipher[7]);
            }else if (plainText[i] == 'i'){
                plainText[i] = tolower(cipher[8]);
            }else if (plainText[i] == 'j'){
                plainText[i] = tolower(cipher[9]);
            }else if (plainText[i] == 'k'){
                plainText[i] = tolower(cipher[10]);
            }else if (plainText[i] == 'l'){
                plainText[i] = tolower(cipher[11]);
            }else if (plainText[i] == 'm'){
                plainText[i] = tolower(cipher[12]);
            }else if (plainText[i] == 'n'){
                plainText[i] = tolower(cipher[13]);
            }else if (plainText[i] == 'o'){
                plainText[i] = tolower(cipher[14]);
            }else if (plainText[i] == 'p'){
                plainText[i] = tolower(cipher[15]);
            }else if (plainText[i] == 'q'){
                plainText[i] = tolower(cipher[16]);
            }else if (plainText[i] == 'r'){
                plainText[i] = tolower(cipher[17]);
            }else if (plainText[i] == 's'){
                plainText[i] = tolower(cipher[18]);
            }else if (plainText[i] == 't'){
                plainText[i] = tolower(cipher[19]);
            }else if (plainText[i] == 'u'){
                plainText[i] = tolower(cipher[20]);
            }else if (plainText[i] == 'v'){
                plainText[i] = tolower(cipher[21]);
            }else if (plainText[i] == 'w'){
                plainText[i] = tolower(cipher[22]);
            }else if (plainText[i] == 'x'){
                plainText[i] = tolower(cipher[23]);
            }else if (plainText[i] == 'y'){
                plainText[i] = tolower(cipher[24]);
            }else if (plainText[i] == 'z'){
                plainText[i] = tolower(cipher[25]);
            }
        }

        if ((plainText[i] >= 'A') && (plainText[i] <= 'Z')){
            if (plainText[i] == 'A'){
                plainText[i] = toupper(cipher[0]);
            }else if (plainText[i] == 'B'){
                plainText[i] = toupper(cipher[1]);
            }else if (plainText[i] == 'C'){
                plainText[i] = toupper(cipher[2]);
            }else if (plainText[i] == 'D'){
                plainText[i] = toupper(cipher[3]);
            }else if (plainText[i] == 'E'){
                plainText[i] = toupper(cipher[4]);
            }else if (plainText[i] == 'F'){
                plainText[i] = toupper(cipher[5]);
            }else if (plainText[i] == 'G'){
                plainText[i] = toupper(cipher[6]);
            }else if (plainText[i] == 'H'){
                plainText[i] = toupper(cipher[7]);
            }else if (plainText[i] == 'I'){
                plainText[i] = toupper(cipher[8]);
            }else if (plainText[i] == 'J'){
                plainText[i] = toupper(cipher[9]);
            }else if (plainText[i] == 'K'){
                plainText[i] = toupper(cipher[10]);
            }else if (plainText[i] == 'L'){
                plainText[i] = toupper(cipher[11]);
            }else if (plainText[i] == 'M'){
                plainText[i] = toupper(cipher[12]);
            }else if (plainText[i] == 'N'){
                plainText[i] = toupper(cipher[13]);
            }else if (plainText[i] == 'O'){
                plainText[i] = toupper(cipher[14]);
            }else if (plainText[i] == 'P'){
                plainText[i] = toupper(cipher[15]);
            }else if (plainText[i] == 'Q'){
                plainText[i] = toupper(cipher[16]);
            }else if (plainText[i] == 'R'){
                plainText[i] = toupper(cipher[17]);
            }else if (plainText[i] == 'S'){
                plainText[i] = toupper(cipher[18]);
            }else if (plainText[i] == 'T'){
                plainText[i] = toupper(cipher[19]);
            }else if (plainText[i] == 'U'){
                plainText[i] = toupper(cipher[20]);
            }else if (plainText[i] == 'V'){
                plainText[i] = toupper(cipher[21]);
            }else if (plainText[i] == 'W'){
                plainText[i] = toupper(cipher[22]);
            }else if (plainText[i] == 'X'){
                plainText[i] = toupper(cipher[23]);
            }else if (plainText[i] == 'Y'){
                plainText[i] = toupper(cipher[24]);
            }else if (plainText[i] == 'Z'){
                plainText[i] = toupper(cipher[25]);
            }
        }
        i += 1;


    }

    printf("ciphertext: %s\n", plainText);







}
