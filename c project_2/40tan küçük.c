#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	
	int a;
	int b;
	int mutlak;
	
	printf("iki sayý gir: ");
	scanf("%d %d",&a,&b);
	mutlak = abs(a-b);
	if(a+b<40)
	printf("%d",mutlak);
	
	else
	printf("%d",a*b);
	return 0;

}
