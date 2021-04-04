#include <stdio.h>

int main()
{
	int a;
	float c;
	
	printf("enter fahrenheit temperature: ");
	scanf("%d",&a);
	c =(a-32)*5/9;
	printf("%.2f",c);
	
	
	return 0;
}
#include <stdio.h>
int recursive_toplam(int sayı);
{
	if(sayı==99)
	return 0;
	return (1/sayı)+(1/sayı+4);
}
int main()
{
	recursive_toplam(99);
	printf("recursive_toplam(99)");

	
	return 0;
}
