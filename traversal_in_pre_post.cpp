#include<stdio.h>
#include<stdio.h>


struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

void Preorder(struct Node *root) {
	if(root == NULL) return; // exit while no data in tree

	printf("%d\t",root->data); // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}

//Function to visit nodes in Inorder
void Inorder(struct Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	printf("%d\t",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void Postorder(struct Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	printf("%d\t",root->data); // Print data
}

// Function to Insert Node in a Binary Search Tree
 Node* Insert(struct Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)// check if the data is smaller than root-> and place to left node
		root->left = Insert(root->left,data);
	else // check if the data is greater than root-> and place to left node
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	printf("Preorder : ");
	Preorder(root);
	printf("\nInorder  : ");
	Inorder(root);
	printf("\nPostorder: ");
	Postorder(root);
	printf("\n");
}
