#include <stdio.h>

int main(void){

	const int size = 6;
	char arr[size] = {};
	
	printf("Enter the characters\n");
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%i] = " , i);
		scanf(" %c" , (arr + i));
	}
	printf("The result is \n");
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = %c\n" , i , ~(~*(arr + i) | 32));

	}

	return 0;
}
		
