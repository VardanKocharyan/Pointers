#include <stdio.h>

int main(void){

	const int size = 6;
	int arr[size] = {};

	printf("arr[%d]\n\n" , size);

	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = "  , i);
		scanf("%d" , (arr + i));
        }
	printf("The result is:`:\n");
        for(int i = 0 ; i < size ; ++i){
		*(arr + i) /= 6;
		printf("arr[%d] = %d\n", i , *(arr + i));
	}

return 0;
}

