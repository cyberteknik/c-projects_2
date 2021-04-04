#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,m,j,k=0;
	printf("enter two defined integer numbers:");
	scanf("%d %d",n,m);
	for(i=n;i<=m;i++)
	{
		for(j=2;j<=m;j++)
		{
			if(i % j== 0)
			printf("%d",(i%j==0));
		}
	}
	
	system("pause");
	return 0;
}
