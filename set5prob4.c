#include <stdio.h>

void transformareinliteremari(char *a, char *b, char *c)
{
     if ((a < 'a') && (a > 'z') && (b >= 'a') && (b <= 'z') && (c >= 'a') && (c <= 'z'))
        printf("Primul caracter introdus de la tastatura nu a fost o litera mica.");

    else {if ((a >= 'a') && (a <= 'z') && (b < 'a') && (b > 'z') && (c >= 'a') && (c <= 'z'))
        printf("Al doilea caracter introdus de la tastatura nu a fost o litera mica.");

    else {if ((a >= 'a') && (a <= 'z') && (b >= 'a') && (b <= 'z') && (c < 'a') && (c > 'z'))
        printf("Al treilea caracter introdus de la tastatura nu a fost o litera mica.");

    else {if ((a < 'a') && (a > 'z') && (b < 'a') && (b > 'z') && (c >= 'a') && (c <= 'z'))
        printf("Primele doua caractere introduse de la tastatura nu au fost litere mici.");

    else {if ((a < 'a') && (a > 'z') && (b >= 'a') && (b <='z') && (c < 'a') && (c > 'z'))
        printf("Primul si ultimul caracter introduse de la tastatura nu au fost litere mici.");

    else {if (( a>= 'a') && (a <= 'z') && (b < 'a') && (b > 'z') && (c < 'a') && (c > 'z'))
        printf("Ultimele doua caractere introduse de la tastatura nu au fost litere mici.");

    else {if ((a < 'a') && (a > 'z') && (b < 'a') &&(b > 'z') && (c < 'a') && (c > 'z'))
        printf("Niciun caracter introdus de la tastatura nu a fost o litera mica.");

    else if ((a >= 'a') && (a <= 'z') && (b >= 'a') &&(b <= 'z') && (c >= 'a') && (c <= 'z'))
    {
        *a = *a - 32;
        *b = *b - 32;
        *c = *c - 32;
        printf("%c\t %c\t %c\t", &a, &b, &c);
    }
    }}}}}}
}
int main()
{
    char caracter1, caracter2, caracter3;
    printf("Primul caracter este: ");
    scanf("%c", &caracter1);
    fflush(stdin);
    printf("Al doilea caracter este: ");
    scanf("%c", &caracter2);
    fflush(stdin);
    printf("Al treilea caracter este: ");
    scanf("%c", &caracter3);
    transformareinliteremari(&caracter1, &caracter2, &caracter3);
    return 0;
}
