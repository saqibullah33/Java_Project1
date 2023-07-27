#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CircularLinklist
{
public:
    Node *head;

    CircularLinklist()
    {
        head = NULL;
    }

    // inserting value at start

    void insertAtstart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            head->next = new_node; // to show behaviour of circular linklist
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        // tail has reached last node
        tail->next = new_node; // last node point to head again
        new_node->next = head;
        head = new_node;
    }

    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout<<endl;
    }

    void insertAtend(int val)
    {
        Node *new_node = new Node(val);

        Node *tail = head;

        if (head == NULL)
        {
            head = new_node;
            head->next = new_node; // to show behaviour of circular linklist
            return;
        }
        while (tail->next != head)
        {
            tail = tail->next;
        }

        // tail is at last node 

        tail->next=new_node;
        new_node->next=head;
    }

    void deleteAtstart(){
        Node* temp=head; //for deleteion
        Node* tail=head; //for traversing
        while (tail->next!=head)
        {
            tail=tail->next;
        }
        tail->next=head->next;
        head=head->next;
        free(temp);
        
    }

    void deleteAtend(){
        Node* temp=head;
        while (temp->next->next!=head) //run untill when temp point to 2nd last node
        {
            temp=temp->next;
        }

        // temp is at 2nd last node 
        Node* tail=temp->next; //tail point to last node;
        temp->next=head; //2nd last node which will be last node now,point to head
        free(tail);
        
    }
};

int main()
{
    CircularLinklist *c1 = new CircularLinklist;
    c1->insertAtstart(1);
    c1->insertAtstart(2);
    c1->insertAtstart(3);


    c1->display();
   c1->deleteAtend();
    c1->display();
}