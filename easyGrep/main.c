#include <stdio.h>
#define MAXLINE 1000        // dopuszczalna długość wiersza

int getlinia(char s[], int lim);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";    // Wzorzec do wyszukania


// Wyszukuje wszystkie wiersze zawierające wzorzec
int main()
{
    char line[MAXLINE];
    int found = 0;

    while (getlinia(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0){
            printf("%s", line);
            found++;
        }
    return found;
}

// getline - pobiera wiersz do s, zwraca długość
int getlinia(char s[], int lim)
{
    int c, i;

    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

// strindex: zwraca index t w s lub -1, jeżeli nie występuje
int strindex(char source[], char searchfor[])
{
    int i, j, k;

    for (i = 0; source[i] != '\0'; i++){
        for(j = i, k = 0; searchfor[k] != '\0' && source[j] == searchfor[k]; j++, k++)
            ;
        if (k > 0 && searchfor[k] == '\0')
            return i;
    }
    return -1;
}
