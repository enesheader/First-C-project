#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int secenek;
	int menu;
	int duraklatma;
	int tarhanatur;
	int klasiktarhanacesit;
	int cipstarhanacesit;
	int kgklasik;
	int kgcips;
	int kgbklasik;
	int kgbcips;
	int kgbcorbalik;
	int kgaklasik;
	int kgacips;
	int kgacorbalik;
	int kgcklasik;
	int kgccips;
	int kgcorbalik;
	int tarhanacesit;
	int corbalikcesit;
	int secenek2=1;
	int toplam=0;
	char siparistekrar;
	char isim[50];
	char soyisim[50];
	char adres[50];
	char telno[11];
	
	Karsilama_metni();
	while(1)
{
	printf("*********************Ne yapmak isterseniz?*********************\n\n\n Secenekleri gormek icin 1'i tuslayiniz.\n Sistemden cikmak icin 2'yi tuslayiniz\n");
	scanf("%d",&secenek);
	printf("\n\n"); 
	if(secenek==2)
		break;
	
	else if(secenek==1)
	{
	printf("Tarhanain icindekileri gormek icin 1'i tuslayiniz.\nFiyat listesini gormek icin 2'yi tuslayiniz.\nSiparis vermek icin 3'u tuslayiniz,\n\n"); 
	scanf("%d",&menu);
    }
     if(menu<1 || menu>3)
		{
			printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");
			continue;
		}
	if(menu==1) // tarhana_icerik 
	{
		tarhana_icerik();
		scanf("%d",&duraklatma); 
		
		if(duraklatma==1)
			continue;
	 	
		else if(duraklatma==0)
			 {
			 printf("*****Ýyi gunler tekrar bekleriz*****");  
			 break;
			 }
		else 
		  	{
			printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");
			continue;
			}
		
	}
	
	else if(menu==2) // tarhana_fiyat
	{
		tarhana_fiyat();
	    scanf("%d",&duraklatma); 
		if(duraklatma==1)
			continue;
		else if(duraklatma==0)
			 {
			 printf("*****Ýyi gunler tekrar bekleriz*****"); 
			 break;
			 }
			 
		else 
		  	{
			printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");
			continue;
			}
	}
	
	else if(menu==3)
	{
		printf("Adinizi giriniz:\n");
		scanf("%s",&isim);
		
		printf("Soyadinizi giriniz:\n");
		scanf("%s",&soyisim);
		
		
		printf("Adresinizi giriniz:\n");
		gets(adres);
		gets(adres);
		
		printf("Telefon numaranizi giriniz giriniz:\n");
		scanf("%s",&telno);
		
		printf("\n\n");
		
		while(secenek2==1)
		{
		
		printf("Hangi tur tarhana siparis vermek istersiniz.\n\nCerezlik tarhana icin 1'i tuslayiniz.\nCorbalik tarhana icin 2'yi tusalyiniz.\n");
		scanf("%d",&tarhanatur);
		
		if(tarhanatur<1 || tarhanatur>2)
	    {
	    printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");
		continue;			
	    }
	if(tarhanatur==1)
		{
			printf("Hangi tur cerezlik tarhana siparisi vermek istersiniz.\n\nKLasik tarhana cesitleri icin 1'i tuslayiniz.\nCips tarhana cesitleri icin 2'yi tuslayiniz.\n"); 
			scanf("%d",&tarhanacesit);
			
			if(tarhanacesit<1 || tarhanacesit>2)
		    {
		    printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");
			continue;			
		    }
				
		if(tarhanacesit==1)
			{
				cesitlerimiz();
				printf("Normal klasik tarhana icin 1'i tuslayiniz.\nBaharatli klasik tarhana icin 2'yi tusalyiniz.\nAcili klasik tarhana icin 3'u tuslayiniz.\nCorekotlu klasik tarhana icin 4'u tuslayiniz.\n "); 
				scanf("%d",&klasiktarhanacesit); 
				
				if(klasiktarhanacesit<1 || klasiktarhanacesit>4)
	    		{		
	    		printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");
				continue;			
	    		}
				
				
				else if(klasiktarhanacesit==1)
				{
					printf("Kac kilogram klasik tarhana almak istersiniz. \n");
					scanf("%d",&kgklasik);
					toplam+=kgklasik*80;   
					printf("Toplam tutar %d tl dir\n\n",toplam); 
                	
                	printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				
		
				}
			
				else if(klasiktarhanacesit==2)
				{
					printf("Kac kilogram baharatli klasik tarhana almak istersiniz.\n");
					scanf("%d",&kgbklasik); 
					toplam+=kgbklasik*100;
					printf("Toplam tutar %d tl dir\n\n",toplam);
				
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}
				
				
				else if(klasiktarhanacesit==3)
				{
					printf("Kac kilogram acili klasik tarhana almak istersiniz.\n");
					scanf("%d",&kgaklasik); 
					toplam+=kgaklasik*100;
					printf("Toplam tutar %d tl dir\n\n",toplam);
					
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}
				
				
				else if(klasiktarhanacesit==4)
				{
					printf("Kac kilogram corekotlu klasik tarhana almak istersiniz.\n\n");
					scanf("%d",&kgcklasik); 
					toplam+=kgcklasik*90;
					printf("Toplam tutar %d tl dir\n",toplam);
					
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}
			
			}
		if(tarhanacesit==2)
			{
				cesitlerimiz(); 
				printf("Normal cips tarhana icin 1'i tuslayiniz.\nBaharatli cips tarhana icin 2'yi tusalyiniz.\nAcili cips tarhana icin 3'u tuslayiniz.\nCorekotlu cips tarhana icin 4'u tuslayiniz.\n\n "); 
				scanf("%d",&cipstarhanacesit);
				
				if(tarhanacesit<1 || tarhanacesit>4)
	    		{
	    		printf("*****Yanlis tusa bastiniz lutfen tekrar deneyiniz.*****\n\n");			
	    		continue;
				}
	    	
				
				
				else if(cipstarhanacesit==1)
				{
					printf("Kac kilogram cips tarhana almak istersiniz. \n");
					scanf("%d",&kgcips);
					toplam+=kgcips*80;   
					printf("Toplam tutar %d tl dir\n\n",toplam); 
					
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}
				
				
				else if(cipstarhanacesit==2)
				{
					printf("Kac kilogram baharatli cips tarhana almak istersiniz.\n");
					scanf("%d",&kgbcips); 
					toplam+=kgbcips*100;
					printf("Toplam tutar %d tl dir\n\n",toplam);
				
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}
				
				
				else if(cipstarhanacesit==3)
				{
					printf("Kac kilogram acili cips tarhana almak istersiniz.\n");
					scanf("%d",&kgacips); 
					toplam+=kgacips*100;
					printf("Toplam tutar %d tl dir\n\n",toplam);
			
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}
				
				
				else if(cipstarhanacesit==4)
				{
					printf("Kac kilogram corekotlu cips tarhana almak istersiniz.\n");
					scanf("%d",&kgccips); 
					toplam+=kgccips*90;
					printf("Toplam tutar %d tl dir\n\n",toplam);
				
					printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
					scanf("%d",&secenek2); 
				}			
			}
		
	
		} 
	if(tarhanatur==2)	
			{
				printf("Hangi tur corbalik tarhana siparisi vermek istersiniz.\n\n");
				cesitlerimiz();
				printf("\n\n");
				printf("Klasik corbalik tarhana icin 1'i tuslayiniz.\nKlasik baharatli corbalik icin 2' tuslayiniz.\nAcili corbalik icin 3'u tuslayiniz.\n");
				scanf("%d",&corbalikcesit);
		
			if(corbalikcesit==1)
			
			{
				printf("Kac kilogram klasik corbalik tarhana almak istersiniz");
				scanf("%d",&kgcorbalik); 
				toplam+=kgcorbalik*30;		
				printf("Toplam tutar %d tl dir\n\n",toplam); 
			
				printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
				scanf("%d",&secenek2); 
			} 
			
			
			else if(corbalikcesit==2)		
		    {
				printf("Kac kilogram baharatli corbalik tarhana almak istersiniz");
				scanf("%d",&kgbcorbalik); 
				toplam+=kgbcorbalik*40;		
				printf("Toplam tutar %d tl dir\n\n",toplam); 
		
				printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
				scanf("%d",&secenek2); 
			} 
	
	        else if(corbalikcesit==3)		
		    {
				printf("Kac kilogram acili corbalik tarhana almak istersiniz");
				scanf("%d",&kgacorbalik); 
				toplam+=kgacorbalik*40;		
				printf("Toplam tutar %d tl dir\n\n",toplam); 
			
				printf("Alisverise devam etmek icin 1'i tuslayiniz cikmak icin 0'i tuslayiniz.\n");
				scanf("%d",&secenek2); 
			
			}
			}
	
		
			if(secenek2==0)
				{
					printf("************Bizi tercih ettiginiz icin tesekkur ederiz.************\n\n");
					printf("Sayin %s %s , %d Tl tutarindaki siparisiniz %s adresinize teslim edilecektir. Kuryemiz adresinize gelince %s numaranizdan sizi arayacaktir.\n\n...Saglikli gunler dileriz...",isim,soyisim,toplam,adres,telno);
					break;
				
				} 
		
	}
		  
		
    } // menu3
		return 0;
}	//while
}//int maýn

	
	


int Karsilama_metni()
{
    printf("**************************Hosgeldiniz**************************\n");
}     
int cesitlerimiz()
{
	printf("*****Cesitlerimiz******\n\n");
}

void tarhana_fiyat()
{
	FILE *dosya;

int c=0;

dosya=fopen("tarhana_fiyat.txt","r");

if(dosya==NULL)

{
	printf("Boyle bir dosya yok\n");
}

else
{

	do

	{

		c=getc(dosya);
		putchar(c);

	}while(c!=EOF);

}
	fclose(dosya);
	printf("\n\n"); 
}

void tarhana_icerik()
{
	FILE *dosya;

int c=0;

dosya=fopen("tarhana_icerik.txt","r");

if(dosya==NULL)

{
	printf("Boyle bir dosya yok\n");
}

else
{

	do

	{

		c=getc(dosya);
		putchar(c);

	}while(c!=EOF);

}
	fclose(dosya);
	printf("\n\n"); 
}
