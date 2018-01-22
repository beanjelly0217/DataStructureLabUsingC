#include<stdio.h>
#include<conio.h>

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
	int num;
	printf("Enter the number to find : ");
	scanf("%d",&num);
	printf("Enter the number to find : %d", fact(num));

}
