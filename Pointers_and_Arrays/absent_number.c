#include <stdio.h>

int main(){

	const int size = 6;
	int arr[size] = {};
	int sum = 0;
	int sum_idx = (size*(size + 1))/2;
	printf("%d" , sum_idx);

	printf("Enter the arr[%d] numbers:\n" , size);
	for(int i = 0; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , (arr + i));
	}

	for(int i = 0 ; i < size ; ++i){
		sum += *(arr + i);
	}
		printf("The absent number is %d\n" , -(sum - sum_idx));
return 0;
}
