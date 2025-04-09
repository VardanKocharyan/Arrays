#include <stdio.h>

int main(){

	int const size = 5;
	char arr[size] = {};

	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		scanf(" %c" , arr + i);
		printf("\n");
	}

	for(int i = 0 ; i < size/2 ; i++){
		*(arr + i) = *(arr + size - 1 - i) ^ *(arr + i);
		*(arr + size - 1 - i) = *(arr + size - 1 - i) ^ *(arr + i);
		*(arr + i) = *(arr + size - 1 - i) ^ *(arr + i);
	}

	printf("The reverse of char arrey is \n");
	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = %c \n" , i , *(arr + i));
	}
	
	printf("\n");

return 0;
}
