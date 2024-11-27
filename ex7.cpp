#include<stdio.h>

int main()
{
	int n ; 
	printf("Moi ban nhap so phan tu:");
	scanf("%d",&n);
	int num[n] ; 
	for(int i = 0 ; i<n;i++)
	{
		printf("moi ban nhap phan tu:");
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		{
			printf("moi ban nhap lai :");
			scanf("%d",&num[i]);
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		printf("\nso phan tu ban da nhap la :  %d", num[i]);
	}
	return 0 ; 
}