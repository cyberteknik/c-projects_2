#include <stdio.h>
#include <stdlib.h>
int prime(int sayi)
{
    int i;
    for( i = 2; i <= sayi/2; i++ ) {
        if(sayi % i == 0 ) return 0;
    }
    return 1;
}
int main(void)
{
    int n;
    int k;
    int j;
   for(j=0;j<100;j++){
   	printf( "Enter a positive integer number: " );
        scanf( "%d",&n );
        k = prime( n );
        if( k )
            printf("This is a prime number.\n");
    else
    printf( "This is not a prime number.\n" );
   }
    
    system("pause");
    return 0;
}
