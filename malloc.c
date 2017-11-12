#include <stdlib.h>
#include <string.h>
#include<stdio.h>


int main() {

   char name[100];
   char *description;

   strcpy(name, "Rahman");

   /* allocate memory dynamically */
   description = (char*) malloc(20* sizeof(char) );

   if( description == NULL ) {
      printf("Error - unable to allocate required memory\n" );
   }
   else {
      strcpy( description, "Rahman a CSE student.");
   }

   printf("Name : %s\n",name);
   printf("Description: %s\n", description );
   return 0;
}
