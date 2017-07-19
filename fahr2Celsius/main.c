#include <stdio.h>

#define LOWER 0    // Dolne ograniczenie skali temperatury.
#define UPPER 300  // Górne ograniczenie.
#define STEP 20    // Krok.

main()
{
    float fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}
