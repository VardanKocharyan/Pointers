#include <stdio.h>

int main(void){

	int const size = 4;
	int arr[size][size] = {};
	int sum = 0;

	printf("Enter the arr numbers\n");
	for(int i = 0 ; i < size ; ++i){
		printf("    arr[%d]\n" , i);
		for(int j = 0 ; j < size ; ++j){
			printf("arr[%d][%d] = " , i , j);
			scanf("%d" , &arr[i][j]);
		}
	}

	for(int i = 0 ; i < size ; ++i){
		printf("\n");
		for(int j = 0 ; j < i ; ++j){
			printf("%d " , arr[i][j]);
			sum += arr[i][j];
		}
	}

	printf("\n\nSum of below the diagonal is %d:\n" , sum );
return 0;
}
