#include <stdio.h>

int main(void){

	const int size = 5;
	int arr[size] = {};

	printf("Enter the arr[%d] numbers:\n" , size);
	printf("arr[0] = ");
	scanf("%d" , arr);
	for(int i = 1 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , &arr[i]);
		if(arr[i-1] > arr[i]){
			printf("false\n");
			return 0;
		}
	}
	printf("true\n");
	return 0;
}
			

