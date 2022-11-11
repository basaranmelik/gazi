#include <stdio.h>

int main(){

    float boy;
    int kilo,vki;

    printf("Boyunuzu giriniz: ");
    scanf("%f", &boy);

    printf("Kilonuzu giriniz: ");
    scanf("%d", &kilo);
    vki=kilo/(boy*boy);

    printf("Vücut kitle endeksiniz: %d\n", vki);

    if(vki<18){
        printf("Zayıfsınız, kilo alın.");
    }
    else if(vki<25){
        printf("İdeal kilodasınız, formunuzu koruyun.");
    }
    else if(vki<30){
        printf("İdeal kilonuzun üstündesiniz, kilo verin.");
    }
    else if(vki<35){
        printf("İdeal kilonuzun çok üstündesiniz (obez), bir an önce doktora görünün.");
    }
    else {
        printf("İdeal kilonuzun çok üstündesiniz (aşırı obez), bir an önce doktora görünün.");
    }
    return 0;
}