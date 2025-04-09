#include <stdio.h>

int main(){

	int const size = 5;
	char arr[size] = {};
	
	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		scanf(" %c" , arr + i);
		printf("\n");
	}

	printf("uppercases array is \n");
	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		if(arr[i] & 32){
			printf(" %c" , arr[i]^32);
		}
		else{
			printf(" %c" , arr[i]);
		}

		printf("\n");
	}

return 0;
}
