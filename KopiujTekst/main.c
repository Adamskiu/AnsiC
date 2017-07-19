#include <stdio.h>

/*
 * odczytaj znak
 * while (znak nie jest znacznikiem końca pliku)
 *  wyprowadź odczytany znak
 * odczytaj znak
 */

main()
{
    int c;
    printf("EOF = CTRL+D\n");
    while ( (c = getchar()) != EOF )
        putchar(c);
}
