#include <stdio.h>

int main()
{
    int item[100],i,n,step,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&item[i]);
    }

    for(step=0;step<n;step++)
    for(i=0;i<n-step;i++)
    {
        if(item[i]>item[i+1])
        {
            temp=item[i];
            item[i]=item[i+1];
            item[i+1]=temp;
        }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
         printf("%d\t",item[i]);
    return 0;
}
