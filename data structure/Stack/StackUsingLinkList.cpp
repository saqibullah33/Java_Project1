#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        this->value = data;
        this->next = NULL;
    }
};

class Stack
{
    Node *head;
    int capacity;
    int cursize;

public:
    Stack(int c)
    {
        this->capacity = c;
        cursize = 0;
        head = NULL;
    }

    void push(int d)
    {
        if (cursize == capacity)
        {
            cout << "overflow";
            return;
        }

        Node *new_node = new Node(d);
        new_node->next = this->head;
        this->head = new_node;
        cursize++;
    }

    void pop() // fix this function
    {
        if (head == NULL)
        {
            cout << "underflow";
            return;
        }

        Node *toremove = this->head;
        this->head = this->head->next;
        toremove->next = NULL;
        delete toremove;
        cursize--;
    }

    void getTop()
    {
        if (head == NULL)
        {
            cout << "underflow";
            return;
        }
        cout << head->value;
    }

    bool isFull()
    {
        return cursize == capacity;
    }

    int getsize(){
        return this->cursize;
    }

};

int main()
{
    Stack *st = new Stack(4);
    st->push(1);
    st->push(2);
    st->push(3);
    st->pop();
    st->pop();

    st->getTop();
    cout<<st->isFull();
    cout<<st->getsize();

    return 0;
}
