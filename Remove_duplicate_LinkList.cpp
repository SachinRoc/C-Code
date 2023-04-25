#include <iostream>
using namespace std;
   
   class Node{

       public:
       int data ;
       Node* next ; 

       Node(int data){
       this->data = data;
       this->next = NULL;
       }

};

void Print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}

void removeDuplicate(Node* &head){
    if(head == NULL){
        cout<< "LL is Empty"<< endl;
        return ;

    }

    if(head->next == NULL){
        cout<<"Singal node in LL"<< endl;
        return ;
    }
    //>1 Node in LL
    // step:1
    Node* curr = head;

    while(curr != NULL){
        //step:2
        // node is equal
        if((curr->next !=NULL ) &&(curr->data == curr->next->data)){
             
             Node* temp = curr->next;
            curr ->next = curr->next ->next;
            // delete node
            temp->next = NULL;
            delete temp;

        }
        else{
            // not equal

            curr = curr->next;
        }
    }

}



int main(){
   
Node* head = new Node(1);
Node* second = new Node(2);
Node* third = new Node(2);
Node* fourth = new Node(3);
Node* fifth = new Node(4);
Node* sixth = new Node(4);

head->next = second;
second->next = third;
third->next = fourth ;
fourth->next = fifth;
fifth->next = sixth;

Print(head);   

cout<<endl;

removeDuplicate(head);
Print(head);
 
    return 0;
}