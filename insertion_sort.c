#include<stdio.h>


int main()
{
    int n, data[100], i, d, temp;

    printf("Enter number of elements\n");
    scanf("%d",&n);

    printf("Enter %d integers : ",n);
    for (i = 0; i < n; i++) {
    	scanf("%d",&data[i]);
    }

    for (i = 1 ; i <= n - 1; i++) {
        d = i;
        while ( d > 0 && data[d] < data[d-1]) {
            temp          = data[d];
            data[d]   = data[d-1];
            data[d-1] = temp;
            d--;
        }
    }

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) {
   	 printf("%d  ",data[i]);
    }

    return 0;
}
