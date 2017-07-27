#include <stdio.h>
#include <string.h>

// reverse - odwraca ciąg "w miejscu"

void reverse(char s[]);

int main()
{
    char napis[] = "kuna demona";
    reverse(napis);
    printf("%s\n", napis);
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
