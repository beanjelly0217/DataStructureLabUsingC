#include<stdio.h>

int main() {
     int int_var = 12, *int_ptr;
     float float_val = 4.15, *float_ptr;

     /* Initialize pointers */

     int_ptr = &int_var;
     float_ptr = &float_val;

     printf("Address of int_var = %d\n", int_ptr);
     printf("Address of float_var = %d\n\n", float_ptr);

     /* Incrementing pointers */
     int_ptr++;
     float_ptr++;
     printf("After increment address in int_ptr = %d\n", int_ptr);
     printf("After increment address in float_ptr = %d\n\n", float_ptr);

     /* Adding 2 to pointers */
     int_ptr = int_ptr + 2;
     float_ptr = float_ptr + 2;

     printf("After addition address in int_ptr = %d\n", int_ptr);
     printf("After addition address in float_ptr = %d\n\n", float_ptr);


     /* Decrementing pointers */
     int_ptr--;
     float_ptr--;
     printf("After decrement address in int_ptr = %d\n", int_ptr);
     printf("After decrement address in float_ptr = %d\n\n", float_ptr);



     /* Subtract 2 to pointers */
     int_ptr = int_ptr - 1;
     float_ptr = float_ptr - 1;

     printf("After subtract address in int_ptr = %d\n", int_ptr);
     printf("After subtract address in float_ptr = %d\n\n", float_ptr);
     return 0;
}
