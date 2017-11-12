#include <stdio.h>
#include<iostream>
#include<queue>
using namespace std;


int main ()
{
    queue <int> names; /* Declare a queue */
    if(names.empty()){
        printf("The queue is empty and ready to PUSH data\n\n");
    }
    names.push (5); /* Add some values to the queue */
    names.push (6);
    names.push (3);
    printf("After Entering 3 number.\n");
    printf("There are currently %d number in the queue.\n", names.size ());
    printf( "The number at the front of the queue is %d\n", names.front ());
    printf( "The number at the back of the queue is %d\n\n" , names.back () );
    cout << names.front () << " has been deleted!" << endl;
    names.pop ();
    printf("There are currently %d people in the queue.\n", names.size ());
    printf( "The number at the front of the queue is %d\n", names.front ());
    printf("%d is still at the back!", names.back () );
    cin.get ();
    return 0;
}
