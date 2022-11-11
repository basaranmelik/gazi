#include <stdio.h>

int main(){
int mesafe,gun,ucret;
char tip;

printf("Arac tipini giriniz: ");
scanf("%s", &tip);

printf("Arabayi kac gun kullandiniz: ");
scanf("%d", &gun);

printf("Araba ile kac km yol yaptiniz: ");
scanf("%d", &mesafe);

switch (tip){
    case 'a':
    case 'A': ucret = gun*20+18*mesafe; 
    printf("Borcunuz: %d$", ucret); break;
    case 'b':
    case 'B': ucret = gun*32+22*mesafe;  
    printf("Borcunuz: %d$", ucret); break;
    case 's':
    case 'S': ucret = gun*43+28*mesafe;
    printf("Borcunuz: %d$", ucret); break;
    case 'p':
    case 'P': ucret= gun*51+36*mesafe; 
    printf("Borcunuz: %d$", ucret); break;
    default: printf("Yanlis arac tipi girdiniz");

}























    return 0;
}