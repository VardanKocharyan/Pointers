#include <stdio.h>

int main(void){

	const int size = 5;
	int arr[size] = {};
	int qount = 0;

	printf("Enter the arr[%d] numbers:\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , arr + i);
		if(*(arr + i) & 1){
			++qount;
		}
	}

	printf("The qount of odd numbers is %d:\n" , qount);
	return 0;
}
