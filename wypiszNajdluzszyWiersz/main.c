#include <stdio.h>

#define MAXLINE 1000 // Dopuszczalna długość wiersza danych wejściowych

int getlinia (char line[], int maxline);
void copy(char to[], char from[]);

// Wypisywanie najdłuższego wiersza danych wejściowych.

int main()
{
    int len; // Długość bieżącego wiersza
    int max; // Największa znana długość
    char line[MAXLINE]; // Bieżący wiersz wejścia
    char longest[MAXLINE];  // Najdłuższy wiersz

    max = 0;
    while ((len = getlinia(line, MAXLINE)) > 0)
        if (len > max){
            max = len;
            copy(longest, line);
        }

    if (max > 0) // dane zawierały co najmniej jeden wiersz
        printf("%s", longest);
    return 0;
}

// getline: pobiera wiersz do tablicy s, zwraca długość
int getlinia(char s[], int lim)
{
    int c,i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++ )
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
