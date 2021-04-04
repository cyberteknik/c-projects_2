#include <stdio.h>
#include <stdlib.h>

void add(int x,int y){
    printf("%d\n",x+y);
}
void division(int x,int y){
    printf("%d\n",x/y);
}
void multiplication(int x,int y){
    printf("%d\n",x*y);
}
void substraction(int x,int y){
    printf("%d\n",x-y);
}
void power(int x,int y){
    for(int x=1;x<y;x++){
y*=y;
    printf("%d",y);
    }}


int main(void){
    int a,b;
    int islem;
    int i=0;
    for (i=0;i<9999;i++)
    {
    	 printf("Enter the 1. number:");
    scanf("%d",&a);
    printf("Enter the 2.. number:");
    scanf("%d",&b);
    printf("Enter your choice");
    
    scanf("%d",&islem);
    
    switch (islem) {
      
        case 1:
          add(a,b);
            break;
        case 2:
            substraction(a,b);
            break;
        case 3:
         multiplication(a,b);
            break;
        case 4:
            division(a,b);
            break;
        case 5:
            power(a,b);
            
        default:
            printf("END\n");
            break;
    }
	}
    
   
}
