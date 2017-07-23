#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    int i;
    for (i = 0; i < 256; i++)
        printf("Ilosc aktywnych bitow w %d to %u\n", i, bitcount(i));
}

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}
