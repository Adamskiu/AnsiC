#include <stdio.h>
#define SIZE 10


/*binsearch znajduje x w v[0] <= v[1] <= ... <= v[n-1] (posortowanej tablicy) */
int binsearch(int x, int v[], int n);


int main()
{
    int i, index;
    int lookingFor = 80;
    int numbers[SIZE];
    for (i = 0; i < SIZE; i++){
        numbers[i] = i*i;
    }
    index = binsearch(lookingFor, numbers, SIZE);
    if (index != -1)
        printf("Liczba %d znajduje się w tablicy w miejscu nr %d\n", lookingFor, index);
    else
        printf("Liczba %d nie znajduje sie w tablicy.\n", lookingFor);
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low < high){
        mid = (low + high)/2;
        printf("mid=%d ", mid);
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else /*znaleziono*/
            return mid;
        printf("low=%d high=%d\n", low, high);
    }
    return -1; /*nie znaleziono*/
}
