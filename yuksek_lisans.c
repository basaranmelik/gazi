#include  <stdio.h>

int main(){

int ales,yds,mezun,sonuc;

    printf("ALES puaninizi giriniz: ");
        scanf("%d", &ales);
    printf("YDS puaninizi giriniz: ");
        scanf("%d", &yds);
    printf("Mezuniyet not ortalamanizi giriniz: ");
        scanf("%d", &mezun);

    sonuc = (ales/2)+(yds/4)+(mezun/4);

    if(sonuc>60 && yds>70){
        printf("Tebrikler lisansustu alimlara hak kazandiniz.");
    }
    else  {
        printf("Maalesef lisansustu alimina hak kazanamadiniz.");
    }
    return 0;
    
}