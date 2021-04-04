#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#define N_C 50
#define N_R 20

void draw_histogram()
{
	
}






int main()
{
	int dizi[50];
	int dizi2[50];
	int sayi;



	srand(time(NULL));
	
	for(i=1;i<=50;i++)
	{
		sayi = rand() % 50 +1;
		dizi[sayi]++;
		dizi2[sayi]++;
	}
	
}
