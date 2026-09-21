#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>

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

void topView(Node *root)
{
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *currNode = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if (m.find(currHD) == m.end())
        {
            m[currHD] = currNode->data;
        }

        if (currNode->left != NULL)
        {
            q.push({currNode->left, currHD - 1});
        }
        if (currNode->right != NULL)
        {
            q.push({currNode->right, currHD + 1});
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

    topView(root);

    return 0;
}