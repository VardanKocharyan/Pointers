#include <stdio.h>

int main(void){

	int a = 0;
	int b = 0;
	int c = 0;
	int* p = &a;

	*p = 10;
	*(p + 1) = 20;
	*(p + 2) = 30;

	printf("a = %d\nb = %d\nc = %d\n", *p , *(p + 1) , *(p + 2));

	printf("Adding 5 with pointers\n");
	*p += 5;
	*(p + 1) += 5;
	*(p + 2) += 5;
	printf("a = %d\nb = %d\nc = %d\n", *p , *(p + 1) , *(p + 2));

return 0;
}
