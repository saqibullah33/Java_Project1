#include <iostream>
using namespace std;

class Node{
public:
int value;
Node *next;

Node(int data){
    value=data;
    next=NULL;
}
};


//function to insert at head
void insertAthead(Node* &head,int value){
Node* new_node=new Node(value);
new_node->next=head;
head=new_node;

}

//function to insert at tail
void insertAtTail(Node* &head,int value){

    Node* new_node=new Node(value);
    Node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;  //temp has reached last node
}

//function to insert at kth-position

void insertAtposition(Node* &head,int k,int value){
    if(k==0){
        insertAthead(head,value);
        return;
             }
    
    Node* temp=head;
    Node* new_node=new Node(value);
    

    int current_pos=0;
    while(current_pos!=k-1){
        temp=temp->next;
        current_pos++;
    }
    //temp has reached k-1 position
   
    new_node->next=temp->next;
    temp->next=new_node;


}

//updating value at k-th position

void updateAtposition(Node* &head,int k,int val){
    if (k==0)
    {
        insertAthead(head,val);
        return;
    }
    
    Node* temp=head;
    int current_pos=0;
    while (current_pos!=k)
    {
        temp=temp->next;
        current_pos++;
    }

    // temp has reached k position

    temp->value=val;
    
}

//deleting node at head

void deleteAthead(Node* &head){
    Node* temp=head;
    head=temp->next;
    free(temp);
}

//deleting node at tail

void deleteAtTail(Node* &head){
    Node* sec_last=head; //sec-last has to reached 2nd-last node __ traversal node

    while (sec_last->next->next!=NULL) //when temp has not reached 2nd-last node
    {
        sec_last=sec_last->next;
    }

   //sec-last has reached 2ndlast node

   Node* temp=sec_last->next; //temp has address of last node
   sec_last->next=NULL;
   free(temp);

    
}
//deleting node at kth-position


void deleteAtposition(Node* &head,int k){

    if (k==0)
    {
        deleteAthead(head);
        return;
    }
    
    Node* prev=head; //prev is used to reached to pos-1 node
    int current_pos=0;
    while (current_pos!=k-1)
    {
        prev=prev->next;
    }

    // prev has reached k-1 node

    Node* temp=prev->next; //temp has stored address of  k node
    // prev->next=prev->next->next; //prev is poiting to k+1 node
    prev->next=temp->next;

    

}

void show(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value <<" ->";
        temp=temp->next;
    }
    cout<<"NULL";
    
}
int main(){
Node *head=NULL;
insertAthead(head,1);
insertAthead(head,2);
insertAtTail(head,10);
insertAthead(head,30);
show(head);
insertAtposition(head,2,55);
cout<<endl;
show(head);
updateAtposition(head,2,0);
cout<<endl;
show(head);
deleteAthead(head);
cout<<endl;
show(head);
deleteAtTail(head);
cout<<endl;
show(head);
deleteAtposition(head,1);
cout<<endl;
show(head);
// insertAthead(head,3);
// insertAthead(head,4);
// insertAthead(head,6);

// cout<<endl;
// cout<<"inserting at Tail";



// show(head);
// insertAtTail(head,1);
// insertAtTail(head,2);
// insertAtTail(head,3);
// insertAtTail(head,4);
// insertAtTail(head,5);
// show(head);

return 0;


}