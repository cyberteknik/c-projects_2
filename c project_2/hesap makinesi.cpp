#include <stdio.h>
void substraction(int x,int y){
    printf("%d\n",x-y);
}void add(int x,int y){
    printf("%d\n",x+y);
}
void division(int x,int y){
    printf("%d\n",x/y);
}
void multiplication(int x,int y){
    printf("%d\n",x*y);
}
void power(int x,int y){
    for(int x=1;x<y;x++){
y*=y;
    printf("%d",y);
    }}


int main(void){
    int k,l;
    int yap;
    
    printf("Enter the 1. number:");
    scanf("%d",&k);
    printf("Enter the 2.. number:");
    scanf("%d",&l);
    printf("Enter choice");
    
    scanf("%d",&yap);
    
    switch (yap) {
      
        case 1:
          add(k,l);
            break;
        case 2:
            substraction(k,l);
            break;
        case 3:
         multiplication(k,l);
            break;
        case 4:
            division(k,l);
            break;
        case 5:
            power(k,l);
            
        default:
           
            break;
    }
}
