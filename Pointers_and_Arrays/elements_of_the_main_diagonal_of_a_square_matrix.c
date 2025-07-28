#include <stdio.h>

int main(void){

	const int size = 3;
	int arr[size][size] = {};
	int res[size] = {};

	for(int i = 0 ; i < size ; ++i){
		printf("    arr[%d]\n" , i);
		for(int j = 0 ; j < size ; ++j){
			printf("arr[%d][%d] = " , i , j);
			scanf("%d" , &arr[i][j]);
		}
	}

	printf("\nThe result is:\n");
	for(int i = 0  ; i < size ; ++i){
		res[i] = arr[i][i];
		printf("res[%d] = %d\n" , i , res[i]);
	}

	return 0;
}

