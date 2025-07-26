#include <stdio.h>

int main(void){

	int a = 2;
	int *ptr = &a;

	printf("a = 2\n*ptr = a = %d\n" , *ptr);

	return 0;
}
