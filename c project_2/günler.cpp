#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int gunler;
	int a;

    printf("b�r say� g�r: ",'a');
	scanf("%d",&a);
	switch(a) {
	case 1: printf("pazartesi");
	break;
	case 2: printf("sal�");
	break;
	case 3: printf("�ar�amba");
	break;
	case 4: printf("per�embe");
	break;
	case 5: printf("cuma");
	break;
	case 6: printf("cumartesi");
	break;
	case 7: printf("pazar");
	break;
	default: printf("yanl�� say� girdin.");
}
	
	
	
	return 0;
}
