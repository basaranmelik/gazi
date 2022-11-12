#include <stdio.h>

int main(){
int n,k;
 float sonuc=0;

 printf("n değeri: ");
 scanf("%d",&n);
 
 for(k=1;k<=n;k++)
 {
sonuc+=(k+1.0)/k;

 }
    
 
printf("%f", sonuc);

return 0;
}