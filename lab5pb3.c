/// Sa se scrie şi să se testeze o funcţie C care, analizând 3 valori numerice întregi, să verifice dacă
///acestea sunt ordonate crescător, descrescător, sunt identice sau sunt neordonate (ţinând cont de
///ordinea în care au fost precizate). Rezultatul va fi furnizat ca valoare de tip caracter: ’C’, ’D’, ’I’ sau ’N’.
///Se recomandă testarea funcţiei în cadrul unui program C care să permită execuţia în buclă, pentru mai
///multe seturi de câte 3 valori introduse de la tastatură (similar cu un exemplu prezentat la curs).
///Variantă de enunţ: rezultatul va fi furnizat ca valoare de tip întreg, cu semnificaţie prestabilită.

#include<stdio.h>

char ordonare(int a,int b, int c)
{
    if(a==b&&b==c)return 'I';
    if(a<b&&b<=c)return 'C';
                else if(a<=b&&b<c)return 'C';
    if(a>b&&b>=c) return 'D';
                  else if(a>=b&&b>c)return'D';
    return 'N';
}

int main(){
    int a,b,c;
    printf("Citeste valorile: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%c",ordonare(a,b,c));

}
