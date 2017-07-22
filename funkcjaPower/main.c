#include <stdio.h>

int power(int , int );

// Test funkcji power
int main()
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(i,2), power(i,3));
    return 0;
}

// power: podnosi podstawę do potęgi n; n >= 0
int power(int base, int n)
{
    int  p;

    for (p =1; n > 0; --n)
        p = p * base;
    return p;
}
