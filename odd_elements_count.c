#include <stdio.h>

int main(){

	int const size = 5;
	int arr[size] = {};
	int sum = 0;

	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		scanf(" %d" , arr + i);
		printf("\n");
	}

	for(int i = 0 ; i < size ; i++){
		if(*(arr + i) & 1){
			sum++;
		}
	}
	
	printf("The odd elements count is %d \n" , sum);
	


return 0;
}
