#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int gunler;
	int a;

    printf("býr sayý gýr: ",'a');
	scanf("%d",&a);
	switch(a) {
	case 1: printf("pazartesi");
	break;
	case 2: printf("salý");
	break;
	case 3: printf("çarþamba");
	break;
	case 4: printf("perþembe");
	break;
	case 5: printf("cuma");
	break;
	case 6: printf("cumartesi");
	break;
	case 7: printf("pazar");
	break;
	default: printf("yanlýþ sayý girdin.");
}
	
	
	
	return 0;
}
