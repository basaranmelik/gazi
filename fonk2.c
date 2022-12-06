#include <stdio.h>

 int i,eleman,buyuk;

float enBuyuk(){
     printf("Toplam eleman sayisini girin: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayiyi giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }

    
    for(i = 1; i < eleman; ++i)
    {
       if(sayilar[0] < sayilar[i])
           sayilar[0] = sayilar[i];
    }
    printf("En buyuk eleman = %.2f", sayilar[0]);

    return buyuk;
}
int main(){
enBuyuk();
    return 0;
}