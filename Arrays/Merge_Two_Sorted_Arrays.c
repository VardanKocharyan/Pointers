#include <stdio.h>

int main(void){

	const int size = 3;
	int res_size = size * 2;
	
	int arr1[size] = {};
	printf("\nEnter arr1[%d] sorted numbers:\n" , size);

	printf("arr1[0] = ");
	scanf("%d" , &arr1[0]);

	for(int i = 1 ; i < size ; ++i){
		do{
			printf("arr1[%d] = " , i);
			scanf("%d" , &arr1[i]);
		}while(arr1[i] <= arr1[i - 1]);
	}	

	int arr2[size] = {};
	printf("\nEnter arr2[%d] sorted numbers:\n" , size);

        printf("arr2[0] = ");
        scanf("%d" , &arr2[0]);

        for(int i = 1 ; i < size ; ++i){
                do{
                        printf("arr2[%d] = " , i);
                        scanf("%d" , &arr2[i]);
		}while(arr2[i] <= arr2[i - 1]);
	}

	int res[res_size] = {};

	int i = 0;
	int idx1 = 0;
	int idx2 = 0;
	while(idx1 < size && idx2 < size){
		if(arr1[idx1] == arr2[idx2]){
			++idx1;
			res[i++] = arr2[idx2++];
		}
		else if(arr1[idx1] < arr2[idx2]){
			res[i++] = arr1[idx1++];
		}
		else {
			res[i++] = arr2[idx2++];
		}
	}
	while(idx1 < size) res[i++] = arr1[idx1++];
	while(idx2 < size) res[i++] = arr2[idx2++];

	for(int k = 0 ; k < i ; ++k){
		printf("%d " , res[k]);
	}
	printf("\n");

return 0;
}
