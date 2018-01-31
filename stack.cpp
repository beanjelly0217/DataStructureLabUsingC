#include<stdio.h>
#include <stack>
using namespace std;

int main ()
{
    stack <int> stack_data; /* Simple enough to create a stack */
    if(stack_data.empty())
    {
        printf("Stack is empty\n");
    }
    printf("After Pushing data.\n");
    stack_data.push(8);
    printf("%d Pushed into the stack.\n",stack_data.top());
    stack_data.push(7);
    printf("%d Pushed into the stack.\n",stack_data.top());
    stack_data.push(6);
    printf("%d Pushed into the stack.\n", stack_data.top());
    printf("There are %d data in stack.\n",stack_data.size ());
    printf("Data on top of the stack is : %d\n",stack_data.top());
    stack_data.pop();
    printf("After Deleting one top data is now : %d\n" ,stack_data.top());
    printf("Size of stack is now : %d",stack_data.size());
    return 0;
}
