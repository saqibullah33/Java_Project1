#include <iostream>
#include <stack>
using namespace std;

stack<int> insertAtbottom(stack<int> &st, int x)
{

    stack<int> temp;
    while (not st.empty())
    {
        int cur = st.top();
        st.pop();
        temp.push(cur);
    }

    // temp has filled in reverse order

    stack<int> result; // push first x to so to get position at bottom

    result.push(x);
    while (!temp.empty()) // now push value of temp stack
    {
        int cur = temp.top();
        temp.pop();
        result.push(cur);
    }

    return result;
}
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    stack<int> res=insertAtbottom(st,0);
     while (not res.empty())
    {
        int cur=res.top();
        cout<<cur<< "\n";
        res.pop();
        
    }

}