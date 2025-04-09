#include <stdio.h>

int main(){

	int const size = 10;
	int arr[size] = {};
	int target = 0;

	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		scanf("%d" , arr + i);
		printf("\n");
	}

	printf("target = ");
	scanf("%d" , &target);
	printf("\n");

	for(int i = 0 ; i < size ; i++){
		if(*(arr + i) ^ target && i^(size - 1)){
			continue;
		}
		else if( (*(arr + i) ^ target) ^ 1){
			printf("arr[%d] = %d \n" , i , *(arr + i));
			break;
		}
		else{
			printf("-1 \n");
		}
	}
	

return 0;
}
