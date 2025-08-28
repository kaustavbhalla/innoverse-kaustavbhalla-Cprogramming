#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getCorrectInput(){
    char inputStream[100];
    int requiredInteger;

    while (true){
        printf("Enter: ");
        if (fgets(inputStream, sizeof(inputStream), stdin) == NULL){
            continue;
        }
        inputStream[strcspn(inputStream, "\n")] == 0;

        if (strlen(inputStream) == 0){
            continue;
        }

        char garbageCollect;
        if (sscanf(inputStream, "%d %c", &requiredInteger, &garbageCollect) != 1){
            continue;
        }

        if (requiredInteger <= 0){
            continue;
        }

        if (requiredInteger > 8){
            continue;
        }

        return requiredInteger;

    }
    
}

int main(){
    int iterable = getCorrectInput();
    for (int i = 0; i < iterable; i++){
        for (int j = i; j < iterable; j++){
            printf(" ");
        }

        for (int k = 0; k<i+1; k++){
            printf("#");

        }

        printf("  ");

        for (int k = 0; k<i+1; k++){
            printf("#");

        }
        printf("\n");
    }

}