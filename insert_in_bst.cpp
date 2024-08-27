#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};



int main()
{
    Node *root = input_tree();

    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);
    level_order(root);
    return 0;
}