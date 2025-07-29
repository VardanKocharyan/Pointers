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
	}
	
	for(int i = 0 ; i < size ; ++i){
		printf("%d " , res[i]);
	}
	printf("\n");
/*
	int z = 0;
	int nz = 0;
	while(z < size && nz < size){
		while(arr[z] != 0) ++z;
		while(arr[nz] == 0 || nz < z) ++nz;
		arr[z] ^= arr[nz];
		arr[nz] ^= arr[z];
		arr[z++] ^= arr[nz++];
	}
	
	for(int i = 0 ; i < size ; ++i){
		printf("%d " , arr[i]);
	}
*/
return 0;
}
