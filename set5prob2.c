#include<stdio.h>

void test_numar_perfect(int numar)
{
    int i, suma = 0;

    for(i = 1; i <= numar/2; i++)
        if (numar % i == 0)
        {
            suma = suma + i;
        }

    if (numar == suma)
        printf("Numarul introdus este perfect.");
    else printf("Numaarul introdus nu este perfect");
}

int main ()
{
    int numar;

    printf("Introduceti un numar: ");
    scanf("%d", &numar);

    test_numar_perfect(numar);

    return 0;
}
