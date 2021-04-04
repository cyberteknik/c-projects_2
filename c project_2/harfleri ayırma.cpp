#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdio>

int main()
{
	char sentence[100];
	int a=0;
	int small=0;
	int capital=0;
	int others=0;
	gets(sentence);
	
	while(sentence[a]){
	
	if(islower(sentence[a]))
	small++;
	
	else if(isupper(sentence[a]))
	capital++;
	
	else{
		others++;
		
	}
	a++;
	
}
	printf("%d :small_letter\n",small);
	printf("%d :capital_letter\n",capital);
	printf("%d :others_letters\n",others);
	
	return 0;
}

