#include<bits/stdc++.h>
using namespace std;

/* spiral order traversal of tree */
void printspiral(struct node *root)
{
    if(!root)
    {
        return;
    }
    stack<struct node*> s1;
    stack<struct node*> s2;
    s1.push(root);
    while(!s1.empty()|| !s2.empty())
    {
        while(!s1.empty())
        {
            struct node* temp = s1.top();
            s1.pop();
            cout<<temp->data<<" -> ";
        }
    }
}