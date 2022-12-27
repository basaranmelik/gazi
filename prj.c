#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int asal_mi(int s2)
{
	int i;
	for(i=2;i<s2;i++)
	{
		if(s2%i == 0)
		{
			return 0;
		}
	}
	 return 1;
}
int fact(int s1){
	int i;
	int faktoriyel=1;
	for(i=1;i<=s1;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	return faktoriyel;
}
int tambolen(int sayi) {
	int i;
	int sayac=0;
	for(i=1;i<=sayi;i++)
	{
		if(sayi%i==0){
			sayac++;
		}
		
	}
	
	
		return sayac;
}
  struct bilgi{
  	char isim[30];
  	char soyisim[30];
  	int numara;  	
  	int dogum;
    int sifre;
  };

int main() {
	char kitap;
    FILE *kitapDosya=fopen("kitap.txt","r");

	srand(time(NULL));
	int rastgelesayi=(rand()%10)+1;
	int tahmin,kacdefa=0;
	

	int secim;
	int k=0;
	int tam,a;
	int fakal,b;
	int asal,c;
	int cevap[12];

    int sudoku [4][4]={{0,2,0,0},{0,3,0,2},{0,0,1,3},{0,1,2,0}};
    int sudoku_tmz [4][4]={{0,2,0,0},{0,3,0,2},{0,0,1,3},{0,1,2,0}};
    int ij,jk;
    
	int nesne;
	int i=0;
	int bos;
    printf("Bos ve karanlik bir odada uyandiniz. Uzerinizde bir agri ve yara izleriyle ayaga kalktiniz ve onunuzdeki feneri alip odayi incelemeye basladiniz. Bir kitap, iki adet pil ve kilitli bir kapi ilginizi cekti. Etkilesime girmek istediginiz nesneyi seciniz: ");
   do{
    printf("\nPiller icin 1\nKitap icin 2\nKapi icin 3 giriniz: ");
    scanf("%d", &nesne);

if(nesne==1)
    printf("Fenerde kullanmak icin pilleri yaniniza aldiniz.");
else if(nesne==2){
	do{
		kitap=getc(kitapDosya);
        printf("%c",kitap);
    }while(kitap!=EOF);
}
else if(nesne==3){
    printf("Kapi sudoku bulmacasiyla kilitlenmis durumda. Kilidi acmak icin bulmacayi cozunuz.\n");
    do{ // İlk sorulan sudoku for döngüsü yardımıyla tekrar yazılacak. Yanlış bilindiği sürece bu devam edecek.
	 
    	
    for(ij=0;ij<4;ij++){
         for(jk=0;jk<4;jk++)
            printf(" %d",sudoku_tmz[ij][jk]);
    
    printf("\n");
    }
    
    printf("\n1x1 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[0][0]);
    printf("1x3 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[0][2]);
    printf("1x4 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[0][3]);
    printf("2x1 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[1][0]);
    printf("2x3 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[1][2]);
    printf("3x1 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[2][0]);
    printf("3x2 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[2][1]);
    printf("4x1 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[3][0]);
    printf("4x4 kutucuguna girilmesi gereken sayiyi yaziniz: ");
    scanf("%d",&sudoku[3][3]);
    printf("\n");
    // 4 3 1 1 4 2 4 3 4
    
    
}while((sudoku[0][0]!=4) || (sudoku[0][2]!=3) || (sudoku[0][3]!=1)|| (sudoku[1][0]!=1) || (sudoku[1][2]!=4) || (sudoku[2][0]!=2) || (sudoku[2][1]!=4) || (sudoku[3][0]!=3) || (sudoku[3][3]!=4));
   }
   }while(nesne!=3); //nesne değişkenine 3 girildiği zaman sudokuyla karşılaşılacak ve doğru bilene kadar devam edilecek. Doğru bilindiğinde bitecek.

	printf("Kapidan cikmayi basardiniz.\nEtrafa baktiniz ve bircok olu denek ve kilitli dolaplar gordunuz. Beyaz onlukle yatan biri dikkatinizi cekti. \nYanina gittiniz, burada calisan bir doktor oldugunu fark ettiniz.\nOnlukte yazan dolap numarasina dogru ilerlediniz.\nKilidi acmak icin onceden belirlenmis sayiyi dogru tahmin etmeniz gerekmektedir.");
fclose(kitapDosya);
    	printf("Sayi tahmini \n\n");
	printf("Lutfen tahmininizi girin:");
	scanf("%d",&tahmin);
	
	while(rastgelesayi != tahmin)
	{
		kacdefa++;
		if(tahmin >rastgelesayi)
		{
			printf("Tahmini dusurun.\n");
			scanf("%d",&tahmin);
		}
		else if(tahmin <rastgelesayi)
		{
			printf("Tahmini arttirin.\n");
			scanf("%d",&tahmin);
		}
		
	}
	printf("%d defa deneyerek dogru cevabi buldunuz ve kilidi acmayi basardiniz.\n Dolabin icerisinde doktora ait yaka kartini buldunuz.",kacdefa);
    printf("Kartta sunlar yazmaktaydi:\nIsim: Sinan\nSoy isim: Engin\nGorevli Numaraniz: 21\nDogum yiliniz: 1984\nSifreniz: 2104\n");
	printf("Kapinin kilidini acmak icin doktorun bilgilerini giriniz: ");
	
   
    
	 struct bilgi kisi;
    printf("\nIsminizi giriniz:");
	scanf("%s",&kisi.isim);
    printf("Soy isminizi giriniz:");
	scanf("%s",&kisi.soyisim);
do{
	printf("Gorevli Numaranizi giriniz: ");
	scanf("%d",&kisi.numara);
	printf("Dogum yilinizi giriniz: ");
	scanf("%d",&kisi.dogum);
    printf("Sifrenizi giriniz: ");
    scanf("%d", &kisi.sifre);
		 //verilerin doğru girlip girilmediği if yardımıyla kontrol edilecek yanlışsa sormaya devam edilecek.
		
}while(kisi.sifre!=2104 || kisi.dogum!=1984 || kisi.numara!=21);


	
    printf("\nKapidan cikmayi basardiniz. Evin disarisinda guvenlik guclerinin oldugunu gordunuz.\nGuvenlik gucleri sizi denek sandilar ve silahlarini dogrulttular.\nDenek olmadiginizi ispatlamak ve akli dengenizin yerinde oldugunu olcmek icin size birtakim sorular yoneltmeye basladilar. \nSorulari dogru bilirseniz kontrol icin hasteneye goturucekler eger bilemezseniz denek oldugunuzu dusunup sizi vuracaklar.\n");
    printf("%s,Buradan cikmak icin asagidaki 5 konudan secim yapip gelicek 3 sorunun 3 unu dogru cevaplamalisin\n",kisi.isim);
	printf("KONULAR\n");
	printf("1.Matematik\n");
	printf("2.Spor\n");
	printf("3.Sinem ve Tiyatro\n");
	printf("4.Genel Kultur\n");
	printf("5.Tarih\n");
	printf("Seciminizi yapin:");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:printf("soru1: 120 sayisinin kac tam boleni oldugunu griin:\n");
			   scanf("%d",&tam);
			   a=tambolen(120);
			   if(a==tam)//16
			   {
			   	k++;
			   }	
		       printf("soru2: 8 sayisinin faktoriyelini girin:\n");
		       scanf("%d",&fakal);
		       b=fact(8);//40320
		       if(b==fakal)
		       {
		       	k++;
			   } 
			   printf("soru3: 91 sayisi asal midir asalsa=1 degilse=0 yazin:\n");
			   scanf("%d",&asal);
			   c=asal_mi(91);//0
			   if(c==asal)
			   {
			   	k++;
			   }
			   if(k==3)
			   	{
			   		printf("Guvenlik gucleri sizi hastaneye goturuyorlar. Basardiniz.\n"); 
					scanf("%d", &bos);
				   }
				   else
				   {
				   	printf("Vuruldunuz.\n OYUNU KAYBETTINIZ...");
					scanf("%d", &bos);
				   }break;
		
		case 2:printf("Sorular da dogru sikkin yanindaki rakami girin.\n");
			   printf("Soru1: Galatasaray uefa avrupa ligi kupasini hangi yilda almistir?\n");
			   printf("1-1999\n2-2000\n3-2001\n4-2002\n");
			   scanf("%d",&cevap[0]);
			   if(cevap[0]==2){
			   	k++;
			   }
			   printf("Soru2: 2008 yaz olimpiyatlarina kac spor dahil edildi?\n");
			   printf("1-30\n2-29\n3-28\n4-27\n");
			   scanf("%d",&cevap[1]);
			   if(cevap[1]==3){
			   	k++;
			   }
			   printf("Soru3: NBA de tarihin en uzun galibiyet serisi hangi takima aittir?\n");
			   printf("1-Los Angeles Lakers\n2-Golden States\n3-Boston Celtics\n4-Chicago Bulls\n");
			   scanf("%d",&cevap[2]);
			   if(cevap[2]==1){
			   	k++;
			   }
			    if(k==3)
			   	{
			   		printf("Guvenlik gucleri sizi hastaneye goturuyorlar. Basardiniz.\n");
					scanf("%d", &bos);
				   }
				   else
				   {
				   	printf("Vuruldunuz.\n OYUNU KAYBETTINIZ...");
					scanf("%d", &bos);
				   }break;
		case 3:	printf("Sorular da dogru sikkin yanindaki rakami girin.\n");
		        printf("Soru1: Ruzgar gibi gecti filminin unlu yonetmeni kimdir?\n");
				printf("1-Steven Spielberg\n2-Quentin Tarantino\n3-Victor Fleming\n4-Francis Ford Coppola\n");
				scanf("%d",&cevap[3]);
				if(cevap[3]==3){
					k++;
				}	   
			   	printf("Soru2: Cizgi kahramani Red Kit in kopeginin adi nedir?\n");
			   	printf("1-Rin Ton Ton\n2-Rin Ten Ten\n3-Rin Tan Tan\n4-Rin Tin Tin\n");
			   	scanf("%d",&cevap[4]);
			   	if(cevap[4]==4){
			   		k++;
			    }
			    printf("Soru3: Bir tiyatro oyunun da sahnedeki sanatciya hatirlatma yapan kisi?\n");
			    printf("1-Virtuoz\n2-Figuran\n3-Kondivit\n4-Suflor\n");
			    scanf("%d",&cevap[5]);
			    if(cevap[5]==4){
			    	k++;
				}
		         if(k==3)
			   	{
			   	 	printf("Guvenlik gucleri sizi hastaneye goturuyorlar. Basardiniz.\n");
					scanf("%d", &bos);
				   }
				   else
				   {
				   	printf("Vuruldunuz.\n OYUNU KAYBETTINIZ...");
					scanf("%d", &bos);
				   }break;
		case 4:	printf("Sorular da dogru sikkin yanindaki rakami girin.\n");
                printf("Soru1: Tsunami felaketin de en fazla zarar goren guney asya ulkesi hangisidir?\n");
				printf("1-Endonezya\n2-Srilanka\n3-Tayland\n4-Hindistan\n");
				scanf("%d",&cevap[6]);
				if(cevap[6]==1)
				k++;
				printf("Soru2: 2003 yilinda euro vizyon sarki yarismasinda ulkemizi temsil eden ve yarismada birinci gelen sanatcimiz kimdir?\n");
				printf("1-Grup Athena\n2-Sertap Erener\n3-Sebnem Paker\n4-Ajda Pekkan\n");
				scanf("%d",&cevap[7]);
				if(cevap[7]==2)
				k++;
				printf("Soru3: Mustafa Kemal Ataturk un nufusa kayitli il hangisidir?\n");
				printf("1-Bursa\n2-Ankara\n3-Istanbul\n4-Gaziantep\n");
				scanf("%d",&cevap[8]);
				if(cevap[8]==4)
				k++; 
				if(k==3)
			   	{
			   		printf("Guvenlik gucleri sizi hastaneye goturuyorlar. Basardiniz.\n");
					scanf("%d", &bos);
				   }
				   else
				   {
				   	printf("Vuruldunuz.\n OYUNU KAYBETTINIZ...");
					scanf("%d", &bos);
				   }break;	
		case 5:	printf("Sorular da dogru sikkin yanindaki rakami girin.\n");
			   	printf("Soru1: Osmanlida sadece 93 gun ile en az sure ile yonetimde kalmis olan padisah hangisidir?\n");
				printf("1-Sultan Vahdettin\n2-II.Osman\n3-V.Murad\n4-II.Mahmud\n");
				scanf("%d",&cevap[9]);
				if(cevap[9]==3)
				k++;
				printf("Soru2: Turkiye Cumhuriyetinin ilk basbakani kimdir?\n");
				printf("1-Ismet Inonu\n2-Celal Bayar\n3-Fethi Okyar\n4-Refik Saydam\n");
				scanf("%d",&cevap[10]);
				if(cevap[10]==1)
				k++;
				printf("Soru3: Cift basli kartal hangi Turk devletinin semboludur?\n");
				printf("1-Cagatay Hanligi\n2-Selcuklular\n3-Uygurlar\n4-Gokturkler\n");
				scanf("%d",&cevap[11]);
				if(cevap[11]==2)
				k++; 
				if(k==3)
			   	{
			   		printf("Guvenlik gucleri sizi hastaneye goturuyorlar. Basardiniz.\n"); 
					scanf("%d", &bos);
				   }
				   else
				   {
				   	printf("Vuruldunuz.\n OYUNU KAYBETTINIZ..."); 
					scanf("%d", &bos);
				   }break;	
				
				  	   
    }
    
    
    
     


	
	
	return 0;
}
