    #include <stdio.h>
    #include <stdlib.h>

    int main()
	{
    	int n1,bol,bolum,k=0,c=0;
    	
		printf("Please enter the number: ");
    	scanf("%d",&n1);
    	printf("\n");
    	
	for(bol=2;bol<n1;bol++)
		{
    		bolum=n1 % bol;
    		
			if(bolum==0)
			{
				k++;
    			printf("%d is divisible by %d \n",n1,bol);
    			printf("\n");
    		
    		}
    	}
    	for(bol=2;bol<=n1;bol++)
    		if(n1 % bol==1)
    		c++;
    		if(c==0)
    		printf("%d is a prime number.\n",n1);
    		else
    		printf("%d is not a prime number.\n",n1);
		
		
    		printf("%d has %d divisiors.\n",n1,k);
    			
    		system("pause");
    	return 0;
    }
