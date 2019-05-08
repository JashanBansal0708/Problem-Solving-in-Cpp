// Function Problem

{
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
Node* insert(Node* node, int data)
{

    if(node == NULL)return(newNode(data));
    else
    {
        if (data <= node->data)node->left = insert(node->left, data);
        else node->right = insert(node->right, data);
        return node;
    }
}
int minValue(Node* root);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, tmp;
        cin>>n>>tmp;
        Node* root = NULL;
        root = insert(root, tmp);
        n--;
        while(n--){
            cin>>tmp;
            insert(root, tmp);
        }
        cout<<minValue(root)<<endl;
    }
return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the binary search tree is as
struct Node
{
	int data;
	Node* left;
	Node* right;
};
*/
// your task is to complete the below function
int minValue(Node* root)
{
    if(root == NULL){
        return -1;
    }
    if(root->left == NULL){
        return root->data;
    }
    minValue(root->left);
}
