#include<stdio.h>
#include<conio.h>
int fibonacci(int n){
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter the size of Fibonacci Series: ");
    scanf("%d", &n);
    if(n<1){
        printf("Please Enter a Positive Integer.");
    }
    else
    {
        printf("Fibonacci Series (First %d Numbers): ",n);
        for(int i=0; i<=n-1; i++)
        {
            printf("%d\t",fibonacci(i));
        }
    }

}
