#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, arr[50], pos, first, last, middle;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter %d numbers :",n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to find :");
	scanf("%d",&pos);
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < pos)
		{
			first = middle + 1;

		}
		else if(arr[middle] == pos)
		{
			printf("%d found at location %d",pos,middle+1);
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		printf("Not found! %d is not present in the list.",pos);
	}
	return 0;
}
