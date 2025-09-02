#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <cs50.h>

int main(){
    double avgL;
    double avgS;

    int letterCount = 0;
    int wordCount = 0;
    int sentenceCount = 0;
    int tempCount = 0;

    double LiamIndex;
    int LiamIndexRounded;

    //Let's take input :)
    string textInput = get_string("Input: ");

    //Logic for counting :)
    for (int i = 0; i < strlen(textInput); ++i){
        if (isalpha(textInput[i])){
            letterCount += 1;
        }

        if (textInput[i] == ' '){
            tempCount += 1;
        }

        if (textInput[i] == '.' || textInput[i] == '?' || textInput[i] == '!'){
            sentenceCount += 1;
        }
    }

    wordCount = tempCount + 1;

    //Formulating the Liam Index :)
    avgL = ((double)letterCount / wordCount) * 100;
    avgS = ((double)sentenceCount / wordCount) * 100;

    LiamIndex = (0.0588 * avgL) - (0.296 * avgS) - 15.8;
    LiamIndexRounded =  (int)round(LiamIndex);

    //Conditionals on the Coleman-Liau index :)
    if (LiamIndexRounded < 1){
        printf("Before Grade 1\n");
    }else if (LiamIndexRounded > 16){
        printf("Grade 16+\n");
    }else{
        printf("Grade %d\n", LiamIndexRounded);
    }

}
