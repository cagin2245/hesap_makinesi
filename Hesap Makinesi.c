#include <stdio.h>
#include <locale.h>

main()
{
	int i,girdi;
	float a,b,sonuc;
	char c;
	setlocale(LC_ALL,"Turkish");
	
	printf("///////////////////////\t\t Hesap Makinesine Ho� Geldiniz! \t\t");
	printf("\n\n L�tfen i�leminizi giriniz: ");
	scanf("%f %s %f",&a,&c,&b);
		
	if(a<0|| b<0)
	{
		printf("\nNegatif say� girdiniz!!! \n\n");
	}
	
	else if(fmod(a,2)==0 && fmod(b,2)==0)
	{
		printf("\nHer iki say�y� da �ift say� girdiniz\n\n");
	}
	else if(fmod(a,2)!=0 && fmod(b,2)!=0)
	{
		printf("\nHer iki say�y� da tek say� girdiniz\n\n");
	}
	else if(fmod(a,2)==0 || fmod(b,2)==0)
	{
		printf("�ift say� girdiniz, ");
		if(fmod(a,2)!=0 || fmod(b,2)!=0)
	{
		printf("tek say� girdiniz.");
	}
	}

	switch(c){
	
	case '+': sonuc = a + b; break;
	case '-': sonuc = a - b; break;
	case '*': sonuc = a * b; break;
	case '/': sonuc = a / b; break;
	case '%': sonuc = fmod(a,b); break;
	default:
		printf("Bilinmeyen bir de�er girdiniz!\nL�tfen bir daha deneyin.");
		
           }
        printf("\nI�leminizin sonucu: %6.0f",sonuc);
	getch();
		
	
}

