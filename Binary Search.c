#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i, arr[50], item, first, last, middle;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter %d numbers :",n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to find :");
	scanf("%d",&item);
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < item)
		{
			first = middle + 1;

		}
		else if(arr[middle] == item)
		{
			printf("%d found at location %d",item,middle+1);
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
		printf("Not found! %d is not present in the list.",item);
	}
	return 0;
}
