#include <stdio.h>

main()
{
    int c;
    int previous = EOF;
    while ((c = getchar()) != EOF){
        if (previous == ' ' && c == ' ')
            ;
        else putchar(c);
        previous = c;
    }
}
