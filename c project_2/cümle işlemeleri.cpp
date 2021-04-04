#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char dizi[50];
	puts("enter a sentence:");
	gets(dizi);
	
	for(i=0;dizi[i] !='\0';i++)
	{
		i++;
	}
	printf("length of the sentence:%d\n",i);
	
	system("pause");
	return 0;
}
