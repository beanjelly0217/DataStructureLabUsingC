#include<stdio.h>


struct node {
  int x;
  node *next;
};

int main()
{
    node *root;      // This will be the unchanging first node
    root = new node; // Now root points to a node struct
    root->next = new node;  //  set to a null pointer
    root->next->next=0;
    root->x = 5;
    root->next->x=7;
    while ( root != NULL )
    {
        printf("-> %d" ,root->x);
        root = root->next;
    }
}
