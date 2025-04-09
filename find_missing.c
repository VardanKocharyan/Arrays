#include <stdio.h>

int main(){

	int const size = 9;
	int arr[size] = {};
	int res = 0;

	printf("Give me the numbers from 1 to 10, except for some number in between. \n");
	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		scanf("%d" , arr + i);
		printf("\n");
	}

	for(int i = 0 ; i < size ; i++){
		res = res ^ (i + 1) ^ *(arr + i);
	}
	printf("the number is %d \n" , res^(size + 1));
	
return 0;
}
