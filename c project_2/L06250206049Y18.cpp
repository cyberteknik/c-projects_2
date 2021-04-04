
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#define N_C 50	
#define N_R 20	


void draw_histogram(int Input_Array[N_C]);


int main(){
	int state;
	printf("enter a integer value in this interval[1,4]");
	scanf("%d",&state);
	
	int array1[50]={0};
	int array2[50]={0};
	int sayi=0,i=0;
	
	switch(state)
	{
		case 1:
		srand(0);
		
		for(i=1;i<=500;i++)
		{
		sayi = rand() % 50;
		array1[sayi]++;	
		}
		draw_histogram(array1);
		printf("\n");
		srand(0);
		
		for(i=1;i<=500;i++)
		{
		sayi =rand() % 50;
		array2[sayi]++;	
		}
		draw_histogram(array2);
		break;
	
	case 2:
		srand(0);
		for(i=1;i<=500;i++)
		{
		sayi =rand() % 50;
		array1[sayi]++;	
		}
		draw_histogram(array1);
		printf("\n");
		
		srand(15);
		for(i=1;i<=500;i++)
		{
		sayi =rand() % 50;
	
		array2[sayi]++;	
		}
		draw_histogram(array2);
		break;
		
			
    case 3:
   	srand(time(NULL));
	
	for(i=1;i<=500;i++)
	{
	
		sayi = rand() % 50;
		array1[sayi]++;
		
	}
		draw_histogram(array1);
		printf("\n");
		
		srand(time(NULL));
		
		for(i=1;i<=500;i++)
	{
	
		sayi = rand() % 50;

		array2[sayi]++;
		}
		draw_histogram(array2);
		
	
		break;
    
	case 4:
	
	srand(time(NULL));
		for(i=1;i<=500;i++)
	{
	
		sayi = rand() % 50;
		array1[sayi]++;
		
		}
		draw_histogram(array1);
	
	printf("\n");
			sleep(1);
	srand(time(NULL));
		for(i=1;i<=500;i++)
	{
	
		sayi = rand() % 50;
		array2[sayi]++;
		}
		draw_histogram(array2);
		
		break;
	}
		return 0;
		
		}
		
	
	
	

	
		



void draw_histogram(int Input_Array[N_C]){
	int i,j;
	int Hist[N_C];
	char fill=35;
	char horizontal_line=95;
	char horizontal_t_line=95;
	char vertical_line=47;
	char vertical_t_line=47;
	char northwest_corner=32;
	char northeast_corner=32;
	char southwest_corner=32;
	char southeast_corner=32;

	for(i=0;i<N_C;i++){
		if(N_R-Input_Array[i]<0){
			Hist[i]=0;
		}
		else{
			Hist[i]=N_R-Input_Array[i];				
		}	
	}
	
	for(i=0;i<N_C+1;i++){
		if(i==0){
			printf("  %c",northwest_corner);
		}
		else if(i==N_C){
			printf("%c%c%c%c",horizontal_line,horizontal_line,horizontal_line,northeast_corner);
		}
		else{
			printf("%c%c%c",horizontal_line,horizontal_line,horizontal_line);
		}
	}
	printf("\n");

	for(i=0;i<N_R;i++){
		for(j=0;j<N_C;j++){
			if(j==0){
				if(N_R-i<10){
					if(Hist[j]>0){
						printf(" %d%c   ",N_R-i,vertical_t_line);
						Hist[j]--;
					}
					else{
						printf(" %d%c %c ",N_R-i,vertical_t_line,fill);
					}
				}
				else{
					if(Hist[j]>0){
						printf("%d%c   ",N_R-i,vertical_t_line);
						Hist[j]--;
					}
					else{
						printf("%d%c %c ",N_R-i,vertical_t_line,fill);
					}
				}
			}
			else if(j==N_C-1){
				if(Hist[j]>0){
					printf("   %c",vertical_line);
					Hist[j]--;
				}
				else{
					printf(" %c %c",fill,vertical_line);
				}
			}
			else{
				if(Hist[j]>0){
					printf("   ");
					Hist[j]--;
				}
				else{
					printf(" %c ",fill);
				}
			}	
		}
		printf("\n");
	}

	for(i=0;i<N_C+1;i++){
		if(i==0){
			printf("  %c",southwest_corner);
		}
		else if(i==N_C){
			printf("%c%c%c%c",horizontal_line,horizontal_t_line,horizontal_line,southeast_corner);
		}
		else{
			printf("%c%c%c",horizontal_line,horizontal_t_line,horizontal_line);			
		}
	}
	printf("\n");

	for(i=0;i<N_C+1;i++){
		if(i==0){
			printf("   ");
		}
		else if(i<10){
			printf(" %d ",i-1);
		}
		else{
			printf(" %d",i-1);
		}
	}
	printf("\n");
}
