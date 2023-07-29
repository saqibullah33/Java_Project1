#include <iostream>
using namespace std;

class Stack
{
    
    int *arr;
    int top;
    int capcity;

    public:
    Stack(int c)
    {
        this->capcity = c;
        arr = new int[c];
        this->top = -1;
        
    }

    
    void push(int data){
        if (this->top==capcity-1)
        {
            cout<<"overFlow";
            return;
        }
        
        this->top++;
        arr[this->top]=data;
    }

    int pop(){
        if (this->top==-1)
        {
            cout<<"underflow";
           return INT16_MIN;
        }
        
        this->top--;
        return 1;
    }


    int getTop(){
        if (this->top==-1)
        {
            cout<<"underflow";
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top==-1;
    }
    
    bool isFull(){
        return this->top==capcity-1;
    }

    int size(){
        return this->top+1;
    }
    void show(){

        while (this->top!=-1)
        {
            int curr=this->getTop();
            cout<<curr <<"\n";
            this->pop();
        }
        
    }
};

int main()
{
Stack* st =new Stack(5);
st->push(3);
st->push(2);
st->push(1);
st->pop();
st->show();
// st.pop();
// cout<<st.getTop();
return 0;
}