/*
E30. Remove All Occurrences of a Character

Problem: Remove every occurrence of a given character from a string.

Explanation: Shift the remaining characters left when a match is found, or copy non-
matching characters to a write index.

Sample:
HeLLo WorLd!, L -> Heo Word!
Bangalore, a -> Bnglore

*/
#include<stdio.h>

void occur(char* str, char ch){
	int i = 0;
	for( ; str[i] != '\0'; i++){
		if(str[i] == ch){
			int j = i;
			for( ;str[j] != '\0'; j++){
				str[j] = str[j+1];	
			}
			
			i--;
		}

	}
	
	
}

int main(){
	char str[30] = "Cubbon Park";
	char ch = 'b';

	occur(str, ch);
	printf("%s", str); 

return 0;
}
