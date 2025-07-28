#include <stdio.h>

int main(void){

	int x = 2;
	int y = 3;
	int z = 4;

	int* p = &x;

	printf("*p = %d\n*(p + 1) = %d\n*(p + 2) = %d\n" , *p , *(p + 1) , *(p + 2));

	*p = 5;
	*(p + 1) = 6;
	*(p + 2) = 7;

	printf("Changing\n*p = %d\n*(p + 1) = %d\n*(p + 2) = %d\n" , *p , *(p + 1) , *(p + 2));

	return 0;
}
