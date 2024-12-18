#include<bits/stdc++.h>
using namespace std;
void deletemid_util(stack<char>&s, int sizeofstack, int current)
{
    if(current==sizeofstack/2)
    {
        s.pop();
        return;
    }
    int x = s.top();
    s.pop();
    current++;
    deletemid_util(s,sizeofstack,current);
    s.push(x);
}
void deletemid(stack<char>&s, int sizeofstack)
{
    deletemid_util(s,sizeofstack,0);
    for(int i = 0; i<sizeofstack; i++)
    {
        cout<<s.top()<<" - ";
    }
}
int main()
{
    stack<char>st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');
    deletemid(st, st.size());
}