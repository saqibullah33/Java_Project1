#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* prev;

    Node(int data){
        value=data;
        next=NULL;
        prev=NULL; }
};

class LinkList{
    public:
    Node* head;
    Node* tail;
public:
    LinkList(){
        
        head=NULL;
        tail=NULL;
    }

    void inserAtstart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }

    void insertAtend(int val){
        Node* new_node=new Node(val);
        if(tail==NULL) //if no node in linklist
        {
            tail=new_node;
            head=new_node;
            return;
        }

        tail->next=new_node;
        new_node->prev=tail;
         tail=new_node;
        new_node->next=NULL;
       
        return;
    }


    void deleteAtStart(){
        Node* temp=head;
        head=temp->next;
        if(head!=NULL) //check if other node is available after 1st or not
        {
            head->prev=NULL; //if available then point it to NULL
            return;
        }
        free(temp);
        return;
    }
   
   void deleteAtend(){

    if (tail==NULL) return;
    
    Node* temp=tail;
    tail=tail->prev;
    if(tail==NULL) //check k agr last node tho sirf akela nahi hai
    {
        head==NULL;
    }else{
        tail->next=NULL;
    }
    free(temp);
    return;
   }
    void display(){
        Node* temp=head;
        while (temp!=NULL) 
        {
            cout<<temp->value <<" <->";
            temp=temp->next;
        }cout<<endl;
        
    }


    void deleteAtPosition(int k){
        Node* temp=head;
        int count=1;
        while (count!=k)
        {
        temp=temp->next;
        count++;
        }
        
        //temp is pointing at k k-1 position
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }

void insertAtPosition(int val,int k){
    Node* new_node=new Node(val);
    int count=1;
    Node* temp=head;
    while (count!=k)
    {
        temp=temp->next;
        count++;
    }
    // temp has reached kth position 
    new_node->next=temp;
    new_node->prev=temp->prev;
    temp->prev=new_node;
    new_node->prev->next=new_node; // node before kth position point to new node
    return;
    
}
};
int main(){
    LinkList* l=new LinkList();
   

   l->insertAtend(1);
 l->insertAtend(2);
 l->insertAtend(3);
 l->display();

l->deleteAtend();
l->display();
      


}