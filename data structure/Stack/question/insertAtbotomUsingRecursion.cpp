#include <iostream>
#include <stack>
using namespace std;

void inserAtbotom(stack<int> &st, stack<int> &result, int val)
{
    if (st.empty())
    {
        result.push(val);
        return;
    }

    int curr = st.top();
    st.pop();
    inserAtbotom(st, result, 0);
    result.push(curr);
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    stack<int> res;
    inserAtbotom(st, res, 0);

    while (not res.empty())
    {
        int cur = res.top();
        cout << cur << "\n";
        res.pop();
    }
}