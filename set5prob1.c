#include <stdio.h>

int test_palindrom (int numar)
{
    int copie, cifra, palindrom = 0;

    copie = numar;

    while(numar)
    {
        cifra = numar % 10;
        palindrom = palindrom * 10 + cifra;
        numar = numar / 10;
    }

    if(palindrom == copie)
        return 1;
    else return 0;
}

int main ()

{
    int numar;

    printf("Introduceti un numar: ");
    scanf("%d", &numar);

    if (test_palindrom(numar) == 1)
        printf("Numarul introdus este palindrom.");
    else printf("Numarul nu este palindrom.");
    return 0;
}
