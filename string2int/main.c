#include <stdio.h>
#include <ctype.h>

int stringToInt(char s[]);
/*przekształca ciąg s na liczbę całkowitą. Algorytm:
 * pomiń białe znaki jeśli występują
 * pobierz znak, jeśli występuje
 * pobierz liczbę i przeprzowadź konwersję */


int main()
{
    char stringNumber[] = "72";
    int number = stringToInt(stringNumber);
    printf("Przekonwertowana liczba to %d\n", number);
}

int stringToInt(char s[])
{
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++) // Pomiń białe znaki.
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') // Pomiń znak liczby.
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}
