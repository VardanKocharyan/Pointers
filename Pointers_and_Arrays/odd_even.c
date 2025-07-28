#include <stdio.h>

int main(void){

	const int size = 6;
	int arr[size] = {};

	printf("arr[%d]\n\n" , size);

	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = "  , i + 1 );
		scanf("%d" , (arr + i));
	}

	int idx1 = 0;
	int idx2 = size - 1;

	while(idx1 <= idx2){
		if((*(arr + idx1) & 1) == 0){
			++idx1;
		}
		else if(*(arr + idx2) & 1){
			--idx2;
		}
		else{
			arr[idx1] ^= arr[idx2];
			arr[idx2] ^= arr[idx1];
			arr[idx1] ^= arr[idx2];
			++idx1;
			--idx2;
		}
	}

	for(int i = 0 ; i < size ; ++i){
		printf("%d " , *(arr + i));
	}
	printf("\n");
return 0;
}
				
