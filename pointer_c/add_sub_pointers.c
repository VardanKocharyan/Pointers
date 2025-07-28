#include <stdio.h>

int main(void){

	int a = 3;
	int b = 2;

	int* ptr = &a;
	int* fmt = &b;

	printf("a + b = %d\na - b = %d\n" , *ptr + *fmt , *ptr - *fmt);

	return 0;
}
