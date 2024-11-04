#include<stdio.h>

int cifre_si_numar_cifre(int numar, int *c1, int *c2, int *c3)
{
    int copie, numarcifre=0, cifra;
    copie = numar;
    while(copie != 0)
    {
numarcifre++;
copie/=10;
    }
    if(numarcifre == 1)
       {
        *c1 = numar % 10;
}
    if(numarcifre == 2)
        {*c1 = numar / 10 % 10;
        *c2 = numar % 10;
        }
    if(numarcifre==3)
    {*c1 = numar / 10 / 10 % 10;
        *c2 = numar / 10 % 10;
        *c3 = numar % 10;}
return numarcifre;
}

int main()
{
    int nr, cifra, nrcifre = 0, cifra1, cifra2, cifra3, x, valoarefunctie;
    printf("Introduceti un numar de trei cifre: ");
    scanf("%d", &nr);
    x=nr;
    while(nr)
    {
        nrcifre = nrcifre + 1;
        nr = nr / 10;
    }
    while(nrcifre > 3)
    {
        printf("Numarul introdus are mai mult de 3 cifre. Introduceti alt numar: ");
        scanf("%d", &nr);
        nrcifre = 0;
        x=nr;
        while(nr)
        {
            nrcifre = nrcifre + 1;
            nr = nr / 10;
        }
    }
    valoarefunctie = cifre_si_numar_cifre(x, &cifra1, &cifra2, &cifra3);
    if(nrcifre == 3)
    printf("Numarul are %d cifre si acestea sunt: %d %d %d", valoarefunctie, cifra1, cifra2, cifra3);
    if(nrcifre == 2)
    printf("Numarul are %d cifre si acestea sunt: %d si %d", valoarefunctie, cifra1, cifra2);
    if(nrcifre == 1)
    printf("Numarul are %d cifra si aceasta este: %d", valoarefunctie, cifra1);
    return 0;
}
