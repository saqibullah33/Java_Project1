#include <iostream>
#include <stack>
using namespace std;

void Copy(stack<int> &st, stack<int> &result)
{
    if (st.empty())
        return;

    int curr = st.top();
    st.pop();
    Copy(st, result);
    result.push(curr);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    stack<int> res;
    Copy(st, res);
    while (not res.empty())
    {
        int cur=res.top();
        cout<<cur<< " ";
        res.pop();
        
    }
    

    return 0;
}
