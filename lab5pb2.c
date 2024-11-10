///Scrieți şi testaţi o funcţie C care verifică dacă un număr este perfect. Numărul perfect este un număr
///întreg egal cu suma divizorilor săi, din care se exclude numărul însuși. Ex. 6=1+2+3; 28=1+2+4+7+14

#include<stdio.h>

    int nrperfect(int n){
    int i;
    int suma=0;
    int copie=n;
    for(i=1; i<n; i++)
    {
        if(n%i==0)suma+=i;

    }
    if(copie==suma)return 1;
                   else return 0;
    }


int main(){
int n;
printf("Citeste n : ");
scanf("%d",&n);
if(nrperfect(n))printf("Numarul e perfect");
                else printf("Numarul nu e perfect");
}

