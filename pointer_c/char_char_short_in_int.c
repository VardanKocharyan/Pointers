#include <stdio.h>

int main(){

	int num = 0;

	char* c1 = (char*)&num;
	char* c2 = (char*)(c1 + 1);
	short* sh = (short*)(c2 + 1);

	printf("c1 = %p\nc2 = %p\nsh = %p\n" , c1 , c2 , sh);

return 0;
}
