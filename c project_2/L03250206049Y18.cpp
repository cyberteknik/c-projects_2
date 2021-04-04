#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int array1[100];
	int array2[100];
	int array3[100];
	int i,wanted;
	for(i=0; i<100; i++)
	{
		array1[i]=i;
	}
	for(i=0; i<100; i++)
    {
    	array2[i]=(99-i);
    	
	}
	for(i=0; i<100; i++)
	{
		array3[i]=array1[i]*array2[i];
	}
printf("Please enter the Array3:\n");
scanf("%d",&wanted);
printf("Array[%d]=%d\n",wanted,array3[wanted]);

system("pause");
return 0;
}
