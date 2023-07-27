#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;



    Node(int data){
        value=data;
        next=NULL;
    }
};

class Linkedlist{
    public:
    Node* head;

    Linkedlist(){
        head=NULL;
    }

    void insertAttail(int val){

        Node* new_node=new Node(val);
     
        if(head==NULL){
            head=new_node;
            return;
        }

           Node* temp=head;
           while(temp->next!=NULL){
            temp=temp->next;
           }

            temp->next=new_node;

    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value <<" ->";
            temp=temp->next;
        }cout<<"NULL";
    }
};


void deleteAlternativeNode(Node* head){
    Node* current_node=head; //for iteration

    while (current_node!=NULL && current_node->next!=NULL)
    {
        Node* temp=current_node->next;
        current_node->next=current_node->next->next;
        free(temp);
        current_node=current_node->next;  //becxz current node has now adress of node after alternative one
    }
    


}


void ReversePrint(Node* head){

//base case 
if(head==NULL){
    return;
}

//recursive case

ReversePrint(head->next);
cout<<head->value <<" -> ";

}



// recursive solution

// recursive solution
Node* ReverseLinkList(Node* head)
{
    // base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // recursive solution
    Node* new_head = ReverseLinkList(head->next);
    head->next->next = head;
    head->next = NULL;

    return new_head;
}



//reverse Linklist using iteritive solution

Node* ReversLL(Node* head){

    Node* current_ptr=head;
    Node* preptr=NULL;

    while(current_ptr!=NULL){
Node* nextptr=current_ptr->next;  //to hold link of current ka next ka address
    current_ptr->next=preptr;
    preptr=current_ptr;
    current_ptr=nextptr;
    }

    //when loops end preptr will pointing to last node
    Node* new_head=preptr;
    return new_head;
}
int main(){
Linkedlist l1;
l1.insertAttail(1);
l1.insertAttail(2);
l1.insertAttail(3);
l1.insertAttail(4);
l1.insertAttail(5);
l1.insertAttail(6);
l1.display();
deleteAlternativeNode(l1.head);
cout<<endl;
l1.display();
cout<<endl;
l1.head=ReversLL(l1.head);
l1.display();





}