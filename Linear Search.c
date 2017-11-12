#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10], i, num, n, flag=0, pos;
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
			flag=1;
			pos=i+1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Number not found..!!");
	}
	else
	{
		printf("%d found at position %d",num,pos);
	}
}
