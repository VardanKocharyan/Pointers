#include <stdio.h>

int main(void){

	const int size = 4;
	int arr[size][size] = {};

	printf("Enter the arr[%d][%d] numbers:\n" , size , size);
	for(int i = 0 ; i < size ;++i){
		printf("    arr[%d]\n" , i);
		for(int j = 0 ; j < size ; ++j){
			printf("arr[%d][%d] = " , i , j);
			scanf("%d" , &arr[i][j]);
		}
	}

	int max_i = 0;
	int max_j = 0;
	int max = arr[0][0];

	for(int i = 0 ; i < size ; ++i){
		for(int j = 0 ; j < size ; ++j){
			if(max < arr[i][j]){
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}

	printf("The max number is arr[%d][%d] = %d\n" , max_i , max_j , arr[max_i][max_j]);

return 0;
}
