#include <stdio.h>


int main(){

	int const size = 4;
	int arr1[size] = {};
	int arr2[size] = {};
	int sum = 0;

	for(int i = 0 ; i < size ; i++){
		printf("arr1[%d] = " , i);
		scanf("%d" , arr1 + i);
		printf("\n");
	}

	for(int i = 0 ; i < size ; i++){
		printf("arr2[%d] = " , i);
		scanf("%d" , arr2 + i);
		printf("\n");
        }

	for(int i = 0 ; i < size ; i++){ 
		if(*(arr1 + i) ^ *(arr2 + i)){
			sum++;
		}
	}
	
	printf("sum = %d \n" , sum);
	
	if(sum | 0 ){
		printf("false \n");
	}
	else{
		printf("true \n");
	}
				
return 0;
}
