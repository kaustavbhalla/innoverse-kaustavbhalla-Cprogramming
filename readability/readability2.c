#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main() {
    //Lets define the variables :)
    double index;
    int roundedIndex;

    double avgL;
    int letterCountforavgL = 0;
    int wordCount = 0;

    double avgS;
    int SentenceCount = 0;

    string text = get_string("Text: ");
    
    // Letters count :)
    for(int i = 0; i < strlen(text); i++){
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')){
            letterCountforavgL++;
        }
    }

    //Sentence count :)
    for(int i = 0; i < strlen(text); i++){
        if(text[i] == '.' || text[i] == '!' || text[i] == '?'){
            SentenceCount++;
        }
    }

    //word count :)
    char *word = strtok(text, " ");
    while(word != NULL){
        wordCount++;
        word = strtok(NULL, " ");
    }


    avgL = ((double) letterCountforavgL / wordCount) * 100;
    avgS = ((double) SentenceCount / wordCount) * 100;

    index = 0.0588 * avgL - 0.296 * avgS - 15.8;
    roundedIndex = (int)round(index);

    if(roundedIndex < 1){
        printf("Before Grade 1\n");
    }
    else if(roundedIndex >= 16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %d\n", roundedIndex);
    }

}
