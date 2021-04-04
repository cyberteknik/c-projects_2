#include<stdio.h>

int main()
{
	int dizi[5]={13,5,9,0,26};
	int yedek,i,j;
	
	for(j=1;j<5;j++)
	{
		for(i=0;i<4;i++)
		{
		if(dizi[i]>dizi[i+1])
		{
		yedek = dizi[i];
		dizi[i] = dizi[i+1];
		dizi[i+1] = yedek;
		
		}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("dizi[%d] = %d\n",i,dizi[i]);
	}
	
	return 0;
}
