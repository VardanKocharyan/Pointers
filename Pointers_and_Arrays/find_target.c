#include <stdio.h>

int main(){

	const int size = 6;
	int arr[size] = {};
	int target = 0;

	printf("Enter the arr[%d] numbers:\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , (arr + i));
	}

	printf("Enter the target:");
	scanf("%d" , &target);

	for(int i = 0 ; i < size ; ++i){
		if(*(arr + i) == target){
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
