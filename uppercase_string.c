#include <stdio.h>

int main()
{
	int const size = 5;
	char arr[size] = {};	
	for(int i = 0 ; i < size ; i++)
	{
		printf("arr[%d] = " , i);
		scanf(" %c" , arr + i);
		printf("\n");
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
            		arr[i] ^= 32;
        	}
    	}

    	printf("Uppercase array is:\n");
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %c\n", i, arr[i]);
	}
return 0;
}
