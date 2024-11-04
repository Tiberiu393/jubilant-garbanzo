#include<stdio.h>
int functie(int numar, int *numar_par)
{
    int v[10], numarcifre = 0, cifra, numar_construit = 0;
    while(numar)
    {
        cifra = numar % 10;
        if(cifra % 2 == 0)
        {
            v[numarcifre] = cifra;
            numarcifre++;
        }
        numar = numar / 10;
    }

    for(int i = 0; i < numarcifre; i++)
        printf("%d  ", v[i]);

    if (numarcifre > 0)
    {
        for (int i = numarcifre - 1; i >= 0; i--)
        {
            numar_construit = numar_construit * 10 + v[i];
        }
        printf("\n %d", numar_construit);
        *numar_par = numar_construit;
        return 1;
    }
    return 0;
}
int main ()
{
    int numar, nr_par, result;

    printf("Introduceti un numar de la tastatura: ");
    scanf ("%d", &numar);
    result = functie(numar, &nr_par);


    if (result == 0)
        printf("Numarul nu a putut fi construit");
    else printf ("Numarul construit este %d.", nr_par);

    return 0;
}
