#include <stdio.h>



struct Tree{
       int data;
       Tree* Right;
       Tree* Left;
       };

int main(){
   Tree* Root = NULL;
   Tree* RightBranch = NULL;
   Tree* LeftBranch = NULL;
   Tree* Current = NULL;

    Root = new Tree;
    RightBranch = new Tree;
    LeftBranch = new Tree;
    Current = new Tree;


    Root->data = 1;
    Root->Left = LeftBranch;
    Root->Right = RightBranch;

    RightBranch->data = 3;
    RightBranch->Left = NULL;
    RightBranch->Right = NULL;

    LeftBranch->data = 2;
    LeftBranch->Left = NULL;
    LeftBranch->Right = NULL;

    Current = Root;
    if(Current != NULL){
        printf("Root Node  : %d\n", Current->data );
        printf("Left Node  : %d\n", Current->Left->data );
        printf("Right Node : %d\n", Current->Right->data );
    }
    return 0;
}
