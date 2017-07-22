#include <stdio.h>
#define ALPHABETLENGTH 26

int main(){
    int c, i, j;
    int smallLetters[ALPHABETLENGTH];
    int bigLetters[ALPHABETLENGTH];
    for(i = 0; i < ALPHABETLENGTH; i++){
        smallLetters[i] = 0;
        bigLetters[i] = 0;
    }


    while((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++smallLetters[c - 'a'];
        else if (c >= 'A' && c <= 'Z')
            ++bigLetters[c - 'A'];


    for (i = 0; i < ALPHABETLENGTH; i++){
        printf("%c ", i + 'a');
        for (j = 0; j < smallLetters[i]; j++)
            printf("-");
        printf("\n");

        printf("%c ", i + 'A');
        for (j = 0; j < bigLetters[i]; j++)
            printf("-");
        printf("\n");
    }
}
