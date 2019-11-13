#include <stdio.h>
#include <locale.h>

main()
{
	int i,girdi;
	float a,b,sonuc;
	char c;
	setlocale(LC_ALL,"Turkish");
	
	printf("///////////////////////\t\t Hesap Makinesine Hoþ Geldiniz! \t\t");
	printf("\n\n Lütfen iþleminizi giriniz: ");
	scanf("%f %s %f",&a,&c,&b);
		
	if(a<0|| b<0)
	{
		printf("\nNegatif sayý girdiniz!!! \n\n");
	}
	
	else if(fmod(a,2)==0 && fmod(b,2)==0)
	{
		printf("\nHer iki sayýyý da çift sayý girdiniz\n\n");
	}
	else if(fmod(a,2)!=0 && fmod(b,2)!=0)
	{
		printf("\nHer iki sayýyý da tek sayý girdiniz\n\n");
	}
	else if(fmod(a,2)==0 || fmod(b,2)==0)
	{
		printf("çift sayý girdiniz, ");
		if(fmod(a,2)!=0 || fmod(b,2)!=0)
	{
		printf("tek sayý girdiniz.");
	}
	}

	switch(c){
	
	case '+': sonuc = a + b; break;
	case '-': sonuc = a - b; break;
	case '*': sonuc = a * b; break;
	case '/': sonuc = a / b; break;
	case '%': sonuc = fmod(a,b); break;
	default:
		printf("Bilinmeyen bir deðer girdiniz!\nLütfen bir daha deneyin.");
		
           }
        printf("\nIþleminizin sonucu: %6.0f",sonuc);
	getch();
		
	
}

