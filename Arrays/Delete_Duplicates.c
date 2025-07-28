#include <stdio.h>

int main(void){

	const int size = 8;
	int arr[size] = {};
	int res_size = 1;
	printf("Enter arr[%d] sorted numbers:\n" , size);

	printf("arr[0] = ");
	scanf("%d" , &arr[0]);

	for(int i = 1 ; i < size ; ++i){
		do{
			printf("arr[%d] = " , i);
			scanf("%d" , &arr[i]);
		}while(arr[i] < arr[i - 1]);
	
		if(arr[i] != arr[i - 1]){
			++res_size;
		}
		
	}

	int res[res_size] = {};
	res[0] = arr[0];
	for(int i = 1 , j = 1 ; i < size && j < res_size ; ++i){
		if(arr[i] != arr[i - 1]){
			res[j] = arr[i];
			++j;
		}
	}

	printf("\nThe result is:\n");
	for(int i = 0 ; i < res_size ; ++i){
		printf("%d " , res[i]);
	}
	printf("\n");
	return 0;
}
