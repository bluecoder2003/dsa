#include<iostream>
using namespace std;
 
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
            data = val;
            left = NULL;
            right = NULL;
    }
};

class bst
{
    Node *root;
    public:
        bst(){
            root = NULL;
        }

    Node* insertbst(Node *root,int val)
    {   
        if(root==NULL)
        {
            return new Node(val);
        }
        if(val<root->data)
        {
            root->left=insertbst(root->left,val);
        }
        else
        {
            root->right=insertbst(root->right,val);
        }
        return root;
    }  

    // Node* deletebst(Node *root,int key)
    // {
    //     if(key<root->data)
    //     {
    //         root->left=deletebst(root->left,key);
    //     }
    //     if(key>root->data)
    //     {
    //         root->right=deletebst(root->right,key);
    //     }

    // }

    void inorder(Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }  

    void preorder(Node *root)
    {
        if(root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node *root)
    {
        if(root == NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    int findmin(Node* root)
    {
        if(root==NULL)
        {
            return -1;
        }
        Node* current = root;
        while(current->left!=NULL)
        {
            current=current->left;
        }
        return current->data;
    }

    int findmax(Node* root)
    {
        if(root==NULL)
        {
            return -1;
        }
        Node* current = root;
        while(current->right!=NULL)
        {
            current=current->right;
        }
        return current->data;
    }

    int countnodes(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            return 1+ countnodes(root->left)+countnodes(root->right);
        }
    }

    Node* search(Node* root,int key)
    {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data==key)
        {
            return root;
        }
        if(root->data>key)
        {
            return search(root->left,key);
        }
        else
        {
            return search(root->right,key);
        }
    }

};

int main()
{
    bst tree;
    Node *root=NULL;
    root=tree.insertbst(root,5);
    tree.insertbst(root,1);
    tree.insertbst(root,3);
    tree.insertbst(root,4);
    tree.insertbst(root,6);

    // tree.postorder(root);
    // cout<<endl;

    // if(tree.search(root,0)==NULL)
    // {
    //     cout<<"key doesn't exist";
    // }
    // else
    // {
    //     cout<<"key exists";
    // }

    // cout << "Smallest element: " << tree.findmin(root) << endl;
    // cout << "Largest element: " << tree.findmax(root) << endl;
    cout << "Total number of nodes: " << tree.countnodes(root) << endl;
    return 0;

}