#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,i,k=0;
	printf("enter a number: ");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	if(a%i==0)
	k++;
	if(k==1)
	printf("%d is a prime number\n",a);
	else
	printf("%d is not a prime number\n",a);
	system("pause");
	
	return 0;
}
