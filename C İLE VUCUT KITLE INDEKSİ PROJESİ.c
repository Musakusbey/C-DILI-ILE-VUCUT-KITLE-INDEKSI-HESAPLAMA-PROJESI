#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float boy,kilo,vki;
	
	printf("boyunuzu giriniz:");
	
	scanf("%f",&boy);
	
	printf("kilonuzu giriniz:");
	
	scanf("%f",&kilo);
	
	vki=kilo/pow(boy/100,2);
	
	printf("vucut kitle indeksiniz %2f",vki);
	
	printf("durumunuz:");
	
	if(vki<=18.5)
	{
		printf("zayif");
		
		printf("%2f kilogrram almaniz lazim",18.5*pow(boy/100,2-kilo));
	}
	
	else if(vki<=24.9)
	{
		printf("normal");
	}
	
	else if(vki<=29.9)
	{
		printf("fazla kilolu");
		
		printf("%2.f kilogram vermeniz lazim",kilo-24.9*pow(boy/100,2));
	}
	
	else
	
	{
		printf("asiri obez");
		
		printf("%2f kilogram vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
	}
	
	return 0;
}
