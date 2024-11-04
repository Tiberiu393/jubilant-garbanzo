#include<stdio.h>

char test_ordonare(int numar1, int numar2, int numar3)
{
    if((numar1 == numar2) && (numar2 == numar3))
        return 'I';
    else if((numar1 <= numar2) && (numar2 <= numar3))
        return 'C';
    else if ((numar1 >= numar2) && (numar2 >= numar3))
        return 'D';
    else return 'N';
}

int main ()
{
    int numar1, numar2, numar3;
    char caracter;

    printf("Introduceti cele trei numere de comparat\n");

    do
    {
        scanf ("%d", &numar1);
        scanf ("%d", &numar2);
        scanf ("%d", &numar3);
        printf("%c", test_ordonare(numar1, numar2, numar3));
        printf("\nDoriti sa testati un alt set de numere? Y sau N? ");
        fflush(stdin);
        scanf ("%c", &caracter);
    }
    while((caracter == 'Y') || (caracter == 'y'));

    return 0;
}
