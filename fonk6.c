#include <stdio.h>

 int i,eleman;
 float ortKck,toplam,ort;
float ortKucuk(){
     printf("Toplam eleman sayisini girin: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayiyi giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }
    
    for(i=0;i<eleman;++i)
        toplam+=sayilar[i];
    
    ort=toplam/eleman;
    printf("\nOrtalamadan kucuk sayilar: ");
    for(i=0;i<eleman;++i){
        if(sayilar[i]<ort)
           printf("\n%.2f", sayilar[i]);

    }

return ortKck;
}




int main(){
ortKucuk();
    return 0;
}