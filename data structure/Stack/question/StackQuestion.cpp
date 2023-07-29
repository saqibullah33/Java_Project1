#include <iostream>
#include <stack>
using namespace std;

stack<int> copy(stack<int> &input){
    stack<int> temp;

    while(not input.empty()){
        int topv=input.top(); //get top value
        input.pop(); //delete it
        temp.push(topv); //push to temp value
    }
    stack<int> result;


    while (!temp.empty())
    {
        int topv=temp.top();
        temp.pop();
        result.push(topv);

    }

    return result;
    
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> newstack=copy(st);
    cout<<newstack.top();
}