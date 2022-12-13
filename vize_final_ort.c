#include <stdio.h>

int vize[5];
int final[5];
float ort[5];
void notHesaplayici(){


for(int i=0;i<5;i++){
    printf("%d. ogrencinin vize notunu giriniz: ", i+1);
    scanf("%d", &vize[i]);
    printf("%d. ogrencinin final notunu giriniz: ", i+1);
    scanf("%d", &final[i]);
}

for(int i=0;i<5;i++){
    ort[i]=(vize[i]*0.4)+(final[i]*0.6);
}
}
int main(){

notHesaplayici();
for(int i=0;i<5;i++){
    printf("\n%d. ogrencinin vize notu: %d",i+1,vize[i]);
    printf("\n%d. ogrencinin final notu: %d",i+1,final[i]);
    printf("\n%d. ogrencinin not ortalamasi: %.2f\n",i+1,ort[i]);
}

    

    return 0;
}