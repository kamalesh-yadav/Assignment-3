#include <bits/stdc++.h>
using namespace std;

bool balanced(string expr)
{
    stack<char> temp;
    for (int i = 0; i < expr.length(); i++)
    {
        if (temp.empty())
        {
            temp.push(expr[i]);
        }
        else
        {
            if (temp.top() == '(' && expr[i] == ')' || temp.top() == '{' && expr[i] == '}' || temp.top() == '[' && expr[i] == ']')
              {
                temp.pop();
              }  
              else
              {
                temp.push(expr[i]);
              }
        }
        
    }
    if(temp.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    string expr = "{()}[](";
    if(balanced(expr))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not balanced";
    }
    return 0;
}