#include <stdio.h>
int main(){

int marka,renault,mazda,honda,ford,a;
float tutar1,tutar2,tutar3,tutar4,tutar;
marka=renault=mazda=honda=ford=0;
tutar=tutar1=tutar2=tutar3=tutar4=0;

while(marka!=111)
{   
     printf("Marka kodunu giriniz: ");
    scanf("%d", &marka);
    printf("Tutar giriniz: ");
    scanf("%f", &tutar);
    switch(marka){
        case 1: ++renault;
        tutar1+=tutar; 
        continue;
        case 2: ++mazda;
        tutar2+=tutar;
        continue;
        case 3: ++honda;
        tutar3+=tutar;
        continue;
        case 4: ++ford;
        tutar4+=tutar;
        continue;
    
   }
}
if(renault>=mazda && renault>=honda && renault>=ford)
printf("En cok gelen arac: Renault");
else if(mazda>=renault && mazda>=honda && mazda>=ford)
printf("En cok gelen arac: Mazda");
else if(honda>=mazda && honda>=renault && honda>=ford)
printf("En cok gelen arac: Honda");
else if(ford>=mazda && ford>=honda && ford>=renault)
printf("En cok gelen arac: Ford");


if(tutar1>=tutar2 && tutar1>=tutar3 && tutar1>=tutar4)
printf("\nEn cok satis yapilan arac: Renault (%.2f)", tutar1);
else if(tutar2>=tutar1 && tutar2>=tutar3 && tutar2>=tutar4)
printf("\nEn cok satis yapilan arac: Mazda (%.2f)", tutar2);
else if(tutar3>=tutar2 && tutar3>=tutar1 && tutar3>=tutar4)
printf("\nEn cok satis yapilan arac: Honda (%.2f)", tutar3);
else if(tutar4>=tutar1 && tutar4>=tutar3 && tutar4>=tutar1)
printf("\nEn cok satis yapilan arac: Ford (%.2f)", tutar4);



return 0;
}













