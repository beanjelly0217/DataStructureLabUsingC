#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10], i, num, n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter Array Elements one by one : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to find : ");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			printf("%d found at position %d",num,i+1);
			break;
		}
	}
	if(n==i)
	{
		printf("Number not found..!!");
	}
}
