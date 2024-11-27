#include<stdio.h>
#include<math.h>

int main()
{
	int arr[5]={1,2,3,4,5}, min=arr[0] , max=arr[0];
	
	for(int i = 1 ; i < 5 ; i++)
	{
		if(arr[i]<min){
		min=arr[i];
		}
		if (arr[i]>max){
		max=arr[i];
		}
	}
	
	printf("Gia tri nho nhat la : %d va Gia tri lon nhat la : %d",min,max);
	return 0 ; 
	
}



