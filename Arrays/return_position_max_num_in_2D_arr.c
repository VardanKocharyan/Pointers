#include <stdio.h>
#include <limits.h>

int main(void){

	int const size = 3;
	int arr[size][size] = {};
	int max = INT_MIN;
	int row = 0;
	int column = 0;

	printf("Enter arr[%d][%d] numbers:\n" , size , size);
	for(int i = 0 ; i < size ; ++i){
			printf("	arr[%d]:\n" , i);
		for(int j = 0 ; j < size ; ++j){
			printf("arr[%d][%d] = " , i , j);
			scanf("%d" , &arr[i][j]);
			if(max < arr[i][j]){
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("(%d , %d) ->  %d\n" , row , column , max);
	return 0;
}
		
