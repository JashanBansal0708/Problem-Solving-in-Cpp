// Function problem

int sum(Node *root){
    if(root == NULL){
        return 0;
    }
    return (root->data + sum(root->left) + sum(root->right));

}


int sum(Node *root){
    if(root == NULL){
        return 0;
    }
    return (root->data + sum(root->left) + sum(root->right));

}

bool isSumTree(Node* root)
{
     if(root == NULL){
         return true;
     }
     if(root->left == NULL && root->right == NULL){
         return true;
     }
     return ((root->data == (sum(root->left) + sum(root->right))) && isSumTree(root->left) && isSumTree(root->right));
}
