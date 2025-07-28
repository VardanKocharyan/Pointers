#include <stdio.h>

int main(void){

	const int size = 6;
	int arr[size] = {};

	printf("arr[%d]\n\n" , size);

	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = "  , i + 1 );
		scanf("%d" , (arr + i));
	}

	int max_idx = 0;
	int min_idx = 0;

	for(int i = 1 ; i < size ; ++i){
		if(*(arr + max_idx) < *(arr + i)){
			max_idx =  i;
		}

		if(*(arr + min_idx) > *(arr + i)){
			min_idx = i;
		}
	}
	printf("Arr max number's index is %d\nArr min number's index is %d\n" , max_idx , min_idx);

return 0;
}

