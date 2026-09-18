#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> preOrder)
{
    idx++;
    if (preOrder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

int height (Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}


int count(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount + rightCount + 1;
}

int sum(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int sumOFNode = 0;

    sumOFNode += root->data;

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);

    return leftSum + rightSum + sumOFNode;

}



int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

    // cout << "Height of the tree is " << height(root) << " ";
    // cout<< endl;

    // cout << "Count of the tree is " << count(root) << " ";
    // cout<< endl;

    cout << "Sum of the tree is " << sum(root) << " ";
    cout<< endl;

    
    cout << endl;

    return 0;
}