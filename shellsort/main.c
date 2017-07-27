// Algorytm opracowany przez D.L. Shella w 1959.

#include <stdio.h>

void shellsort(int v[], int n);
/* Podstawową zaletą działania tego algorytmu jest rozpoczęcie porównywania od
 * elementów najbardziej odległych od siebie (w odróżnieniu od porównywania elementów
 * sąsiadujących, stosowanego w prostszych algorytmach). Prowadzi to do szybkiego
 * zmniejszenia "poziomu nieuporządkowania" tablicy dzięki czemu na kolejnych etapach funkcja
 * ma już mniej pracy. Odstęp między porównywanymi elementami jest stopniowo zmiejszany, aż do
 * wartości 1, przy której procedura staje się w istocie sortowaniem bąbelkowym.
 * */

#define SIZE 100

int main()
{
    int i;
    int toSort[SIZE];
    // Odwrócona kolejność elementów
    for (i = SIZE - 1; i >= 0; --i)
        toSort[i] = SIZE - 1 - i;
    shellsort(toSort, SIZE);

    for (i = 0; i < SIZE; i++)
        printf("%d\n", toSort[i]);
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for(gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j] > v[j+gap]; j-=gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}
/* Zewnętrzna pętla steruje wielkością odstępu między porówywanymi elementami. i zmniejsza
 * go w każdym przebiegu o połowę, począwszy od n/2 do zera. Druga pętla to kolejne postąpienia od elementu do elementu.
 * Pętla wewnętrzna porównuje pary elementów odległych od siebie o gap i zamienia miejscami te, których kolejność jest
 * nieprawidłowa. Ponieważ gap ostatecznie spada do 1, wszystkie elementy zostają uporządkowane.
 */
