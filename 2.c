#include <stdio.h>
#define SWAP(a,b,t) ((t)=(a), (a)=(b), (b)=(t))

void printall(char *arr, int len)
{
	int i;
	for(i = 0; i < len ; i++)
		printf("%c ", arr[i]);
} 

int main(int argc, char *argv[]) {
	
	char arr[] = "apple";
	int i, j, temp, n = 0;
	int len = sizeof(arr)/sizeof(char);
	
	for(i = 1 ; i < len ; i++)
	{
		temp =  arr[i];
		for(j = i-1 ; j >= 0 ; j--)
		{
			n++;
			if(arr[j] <= temp)
			{
				break;
			}
			arr[j+1] = arr[j];
			n++;
		}
		arr[j+1] = temp;
	}
	
	printall(arr, len);

	
	return 0;
}