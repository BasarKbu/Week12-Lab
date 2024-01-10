#include<stdio.h>
#include<string.h>
#include<conio.h>
//This program takes two words from keyboard and prints the reverse of the first word after second word.
int main(){
    char str1[30], str2[30], str3[50];
    int i, j, length;

    printf("Enter the first word: \n");  gets(str1);
    printf("Enter the second word: \n"); gets(str2);
	
    for (j = 0; str2[j] != '\0'; j++) {
        str3[j] = str2[j];
    }
	
    str3[j++] = ' ';
    length = strlen(str1);
	
    for (i = 0; i < length; i++) {
        str3[j++] = str1[length - i - 1];
    }
	
    str3[j] = '\0';
	
    printf("The final string is: %s \n", str3);
	getch();
    return 0;
}
