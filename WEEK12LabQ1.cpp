#include<stdio.h>
//This c program calculates 'a' count in every word.

int main(){
	char str[50];
	int i,cnt = 0,word_count = 1;
    printf("Enter a sentence: \n"); gets(str);	
	
	for(i=0;str[i]!=NULL;i++){
		
		if(str[i] == 'a')
		cnt++;
		
		if(str[i] == ' '){
		printf("%d. word has this much a:%d \n",word_count,cnt);	
		word_count++;
		cnt = 0;	
		}
		
		
	}
	
	printf("%d. word has this much:%d \n",word_count,cnt);
	
	return 0;
}
