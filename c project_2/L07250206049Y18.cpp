#include<stdio.h>
#include<stdlib.h>
#define SIZE 40

void printword(char sentence[],int wordNum);
int findLength(char word[]);
void findWord(char sentence[],char word[],int wordLength);



int main()
{
    char sentence[]=" EE103 Introduction to Programming ";
    int wordNum=0;
    char word[SIZE];
//	printf("enter the word number:\n");
//	scanf("%d"&wordNum);
	printword;
	printf("enter the word:\n");
	gets(word);	
	printf("word length is %d\n",findLength(word));
	system("pause");
	return 0;
}

/*void printword(char sentence[],int wordNum)
{
	int i,j;
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]=' ')
		wordNum++;
		
		for
		printf("%c"word[j]);
		j++;
	}
   
	}
}*/

int findLength(char word[])
{
	int i,sayac=0;
	for(i=0;word[i]!='\0';i++)
	sayac++;
	return sayac;
}
//findWord(sentence,word,findLength(word))
//{
	//for(i=0;word)
//}
