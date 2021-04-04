#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	printf("dört sayı giriniz: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b,a>c,a>d)
	printf("%d is the greatest number",a);
	else if(b>a,b>c,b>d)
	printf("%d is the greatest number",b);
	else if(c>a,c>b,c>d)
	printf("%d is the greatest number",c);
	else(d>a,d>b,d>c);
	printf("%d is the greatest number",d);
	
	
	return 0;
}
