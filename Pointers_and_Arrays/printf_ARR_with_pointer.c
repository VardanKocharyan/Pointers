#include <stdio.h>

int main(void){

	int arr[6] = {[3] = 9 , 7 , 8};
	int *ptr = arr;

	printf("printing arr[6] = { 0 , 0 , 0 , 9 , 7 , 8 }\n");

	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = %d\n" , i + 1 ,  *ptr++);
	}

	return 0;
}
