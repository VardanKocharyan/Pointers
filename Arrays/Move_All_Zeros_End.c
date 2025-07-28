#include <stdio.h>

int main(void){

	const int size = 5;
	int arr[size] = {};
	int res[size] = {};
	int target = 0;
	printf("Enter the arr[%d] numbers:\n" , size);
	for(int i = 0 , j = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , arr + i);
		if(arr[i] != 0){
			res[j++] = arr[i];
		}
		target ^= arr[i];
	}
	
	for(int i = 0 ; i < size ; ++i){
		printf("%d " , res[i]);
	}
	printf("\n");

	int i = 0;
	int j = 0;
	while(i < size && j < size){
		while(arr[i] == 0 && target){
			++i;
		}
		arr[j] ^= arr[i];
		arr[i] ^= arr[j];
		arr[j++] ^= arr[i];
		target ^= arr[i++]
		}
	}
	for(int k = 0 ; k < size ; ++k){
		printf("%d " , arr[i]);
	}
	printf("\n");
return 0;
}
