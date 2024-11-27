#include<stdio.h>

int main()
{
	int num ;
	printf("Moi nhap so phan tu trong mang :");
	scanf("%d",&num);
	int arr[num];
	for(int i = 0 ; i < num ; i++)
	{
		printf("\nMoi ban nhap phan tu thu %d la :",i+1);
		scanf("%d",&arr[i]);
		
	}
	return 0 ; 
}