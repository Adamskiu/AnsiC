#include <stdio.h>

// Funkcja itoa
void i2a(int n, char s[]);
void reverse(char s[]);

int main()
{
    int number = -55;
    char s[10];
    i2a(number, s);
    printf("%s\n", s);
}

void i2a(int n, char s[])
{
    int i, sign;

    if ( (sign = n) < 0) // zapisz znak
        n = -n;         // niech n będzie dodatnie
    i = 0;
    do{ // wygeneruj cyfry w odwróconej kolejności
        s[i++] = n % 10 + '0'; // pobierz następną cyfrę
    } while ( (n /= 10) > 0);   // usuń cyfrę
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


