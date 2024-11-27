#include<stdio.h>

int main()
{
	int x[5];
	 
	for(int i = 0 ; i <  5 ; i++)
	{
		printf("\nMoi ban nhap so thu %d : ",i);
		scanf("\n%d",&x[i]);
	}
	printf("\nDuyet cac phan tu trong mang : ");
	for(int i = 0 ; i < 5 ;i++ )
	{
		printf("%d, ",x[i]);
	}
	return 0 ; 
	
}	