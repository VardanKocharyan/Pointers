#include <stdio.h>

int main(void){

	const int size = 3;
	int arr[size][size] = {};
	int sum = 0;
	
	printf("Enter arr[%d][%d] numbers:\n" , size , size);
	for(int i = 0 , row = 0 , column = size -1 ; i < size ; ++i){
		printf("	arr[%d]:\n" , i);
		for(int j = 0 ; j < size ; ++j){
			printf("arr[%d][%d] = " , i , j);
			scanf("%d" , &arr[i][j]);
		}
		sum += arr[row++][column--];
	}
	printf("The sum of the secondary diagonal is %d:\n" , sum);
	return 0;
}
