#include <stdio.h>

int main(void){

	const int size = 6;
	int arr[size] = {};

	printf("Enter the arr[%d] numbers" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , arr + i);
	}

	for(int i = 0 ; i < size ; ++i){
		for(int j = 0 ; j < size - i - 1 ; ++j){
			if(arr[j] > arr[j + 1]){
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];
			}
		}
	}

	for(int i = 0 ; i < size ; ++i){
		printf("%d " , *(arr + i));
	}
	printf("\n");
return 0;
}
