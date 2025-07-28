#include <stdio.h>

int main(void){

	int num = 0;
	short* ptr = (short*)&num;
	
	printf("num =  %d\nshort* ptr = %hd\n" , num , *ptr);

	printf("Adding *(ptr + 1) -> 8\n");
	*(ptr + 1) = 8;

	printf("num = %d\nshort* ptr = %hd\nshort ptr + 1 = %hd\n" , num , *ptr , *(ptr + 1));

	return 0;
}
