#include <stdio.h>

int main(void){

	const int size = 6;
	int arr[size] = {};

	printf("arr[%d]\n\n" , size);

	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = "  , i + 1 );
		scanf("%d" , (arr + i));
	}

	int max = *arr;
	int min = *arr;

	for(int i = 1 ; i < size ; ++i){
		if(max < *(arr + i)){
			max = *(arr + i);
		}

		if(min > *(arr + i)){
			min = *(arr + i);
		}
	}
	printf("Arr max number is %d\nArr min number is %d\n" , max , min);

return 0;
}
