#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	char a;
	int edge;
	printf("enter edge of square that you want: ");
	scanf("%d",&edge);
	
	a=getchar();
	printf("enter a character that you want: ");
	scanf("%c",&a);
	
	
	for(i=1;i<=(edge*edge);i++)
	{
	 
	 putchar(a);
	 printf(" ");
	
		if(i % edge==0)
		printf("\n");
			
	}
	
	return 0;
}
