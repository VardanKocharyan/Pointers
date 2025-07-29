#include <stdio.h>

int main(void){

	char str[51] = {};
	char arr[51] =  {};
	int j = 0;

	printf("Enter the text(max 50 char):\n");
	scanf("%50s" , str);
	arr[0] = str[0];
	
	for(int i = 1 ; str[i] != '\0' ; ++i){
		for(j = i - 1 ; j >= 0 ; --j){
			if(str[i] ==str[j]){
				printf("First repearting char: %c\n" , str[i]);
				return 0;
			}
		}
	}
	printf("None\n");
	return 0;
}
