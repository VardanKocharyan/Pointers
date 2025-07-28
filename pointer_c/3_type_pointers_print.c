#include <stdio.h>

int main(){

	int x = 2;
	float y = 5.2;
	char c = 'A';

	int* ptr = &x;
	float* fmt = &y;
	char* ch = &c;

	printf("int* = %d\nfloat* = %f\nchar* = %c\n" , *ptr , *fmt , *ch);

	return 0;
}
