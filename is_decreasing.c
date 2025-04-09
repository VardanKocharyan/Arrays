#include <stdio.h>

int main(){

	int const size = 5;
	int arr[size] = {};

	for(int i = 0 ; i < size ; i++){
		printf("arr[%d] = " , i);
		scanf("%d" , arr + i);
		printf("\n");
	}

	for(int i = 0 ; i < (size - 1) ; i++){
		if(*(arr + i) < *(arr + i + 1)){
			if((i + 1)^(size - 1)){
				continue;
			}
			else{
				printf("YES \n");
			}
		}
		else{
			printf("NO \n");
			break;
		}
	}

return 0;
}
