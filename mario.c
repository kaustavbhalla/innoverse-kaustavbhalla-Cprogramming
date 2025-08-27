#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getCorrectInput(){
    char inputStream[100];
    int requiredInt;

    while (true){
        printf("Enter: ");
        if (fgets(inputStream, sizeof(inputStream), stdin) == NULL){ //Used w3school, geeksforgeeks and stackoverflow to understand this :)
            break;
            return 1;
        }

        inputStream[strcspn(inputStream, "\n")] == 0; 

        if (strlen(inputStream) == 0) {
            continue;
        }

        char garbageCollector;
        if (sscanf(inputStream, "%d %c", &requiredInt, &garbageCollector) != 1){ //Used w3school, geeksforgeeks and stackoverflow to understand this :)
            continue;
        }

        if (requiredInt <= 0){
            continue;
        }


        return requiredInt;
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
        printf("\n");
    }

}