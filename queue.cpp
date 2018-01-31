#include <stdio.h>
#include<queue>
using namespace std;


int main ()
{
    queue <int> queue_data; /* Declare a queue */
    if(queue_data.empty()){
        printf("The queue is empty and ready to PUSH data\n\n");
    }
    queue_data.push (5); /* Add some values to the queue */
    queue_data.push (6);
    queue_data.push (3);
    printf("After Entering 3 data.\n");
    printf("There are currently %d data in the queue.\n", queue_data.size ());
    printf( "The data at the front of the queue is %d\n", queue_data.front ());
    printf( "The data at the back of the queue is %d\n\n" , queue_data.back () );
    printf( "%d has been deleted!\n" , queue_data.front () );
    queue_data.pop ();
    printf("There are currently %d data in the queue.\n", queue_data.size ());
    printf( "The data at the front of the queue is %d\n", queue_data.front ());
    printf("%d is still at the back!", queue_data.back () );
    return 0;
}
