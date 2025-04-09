#include <stdio.h>

int main(){

	int const size = 5;
	int arr[size] = {1,11,1,1,1};
	int sum = 0;

	for(int i = 0 ; i < (size - 1) ; i++){
		if(*(arr + i) ^ *(arr + i + 1)){
			if(((i + 2) ^ size) &&  *(arr + i) ^ *(arr + i + 2) || *(arr) ^ *(arr + i)){
				printf("arr[%d] = %d \n" , i , *(arr + i));
				break;
			}
			else{
				printf("arr[%d] = %d \n" , i+1 , *(arr + i + 1));
				break;
			}
		}
	}
return 0;
}
