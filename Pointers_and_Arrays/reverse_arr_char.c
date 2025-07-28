#include <stdio.h>

int main(void){

	const int size = 6;
	char arr[size] = {};

	printf("Enter characters arr[%d]\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf(" %c" , (arr + i));
	}

	for(int i = 0 ; i < size/2 ; ++i){
		arr[i] ^= arr[size - i - 1];
		arr[size - i - 1] ^= arr[i];
		arr[i] ^= arr[size - i - 1];
	}
	
	printf("The result:\n");
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] =  %c\n" , i , *(arr + i));
	}
return 0;
}
