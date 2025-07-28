#include <stdio.h>

int main(void){

	const int size = 4;
	int arr1[size] = {};
	int arr2[size] = {};

	printf("Enter arr1[%d] numbers\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , (arr1 + i));
	}
	printf("\n");

	printf("Enter arr2[%d] numbers\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr1[%d] = " , i);
		scanf("%d" , (arr2 + i));
	}

	printf("The result is\n");
	for(int i = 0 ; i < size ; ++i){
		printf("arr1[%d] * arr2[%d] = %d\n" , i , i , *(arr1 + i) * *(arr2 + i));
	}
	return 0;
}
