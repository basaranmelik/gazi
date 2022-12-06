#include <stdio.h>

 int i,eleman;
 float parametreByk,referans;
float parametreBuyuk(){
     printf("Toplam eleman sayisini girin: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayiyi giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }
    
    printf("\nVerilerin kendisinden kucuk olmasini istediginiz sayiyi giriniz: ");
    scanf("%f", &referans);
    printf("\nGirdiginiz degerden kucuk olan sayilar: ");
    for(i=0;i<eleman;++i){
        if(sayilar[i]<referans)
            printf("\n%.2f", sayilar[i]);
    }

      
    
   

return parametreByk;
}

int main(){
parametreBuyuk();
    return 0;
}