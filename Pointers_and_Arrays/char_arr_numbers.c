#include <stdio.h>

int main(void){

	char arr[100];

	printf("Enter the text:");
	fgets(arr , sizeof(arr) , stdin);

	printf("The numbers\n");
	for(int i = 0 ; *(arr + i) != '\0' ; ++i){
		if(*(arr + i) > 48 && *(arr + i) < 57){

			printf("%d" , *(arr + i) - 48);
		}
	}
	printf("\n");
return 0;
}
