#include <stdio.h>


void tower(int a,char from,char aux,char to){
    if(a==1){
       printf("Move disc 1 from %c to %c \n",from,to);
       return;
    }
    else{
       tower(a-1,from,to,aux);
       printf("Move disc %d from %c to %c \n",a,from,to);
       tower(a-1,aux,from,to);
    }
}

int main(){
     int n;
     printf("\t\t*****Tower of Hanoi*****\n\n");
     printf("Enter number of discs : ");
     scanf("%d",&n);
     printf("\n");
     tower(n,'A','B','C');
}
