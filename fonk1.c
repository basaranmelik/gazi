#include <stdio.h>

float referans;
int i,eleman,sayi;

int kacKez(){
    
 printf("Toplam eleman sayisini girin: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayiyi giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }
    printf("\nDizide hangi sayinin kac defa gectigini ogrenmek istiyorsunuz: ");
    scanf("%f", &referans);
    sayi=0;

    for(i=0;i<eleman;++i){
        if(referans==sayilar[i])
            sayi++;
    }
    printf("%.2f sayiniz bu dizide %d defa var.", referans,sayi);
}
    int main(){
        kacKez();
        return 0;
    }