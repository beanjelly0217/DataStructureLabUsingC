#include<stdio.h>


int main(){
int id=10;

printf("ID : %d\n",id);
printf("Address of ID : %d\n", &id);
printf("ID Using Address : %d\n", *(&id));
}
