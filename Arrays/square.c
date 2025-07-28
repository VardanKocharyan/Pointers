#include <stdio.h>

int main(void){

	int n = 0;

	do{
		printf("Enter the square side lenght(>0):");
		scanf("%d" , &n);
	}while(n < 1);

	for(int i = 0 ; i < n ; ++i){
		printf("\n");
		for(int j = 0 ; j < n ; ++j){
			if(i == 0 || i == n - 1){
				printf(" * ");
			}
			else if(j == 0 || j == n - 1){
				printf(" * ");
			}
			else{
				printf("   ");
			}
		}
	}
	printf("\n");
	return 0;
}
