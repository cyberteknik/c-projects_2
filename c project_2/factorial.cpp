#include<stdio.h>
#include<stdlib.h>

int  main()
{
	int fak=1, sayi;
	printf("bir say� gir:");
	scanf("%d",&sayi);
	
	do
	{
		fak = fak * sayi;
		sayi--;
	}
	while(sayi>=1);
	{
		printf("fakt�riyel = %d ",fak);
	}

	system("pause");
	return 0;
}
