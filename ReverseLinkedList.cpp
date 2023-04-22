#include<iostream>
using namespace std;
     // Reverse a linklist code
class Node{
      public:
      int data ;
      Node* next;

      Node(){
        this->data = 0;
        this->next = NULL;

      }

      Node(int data){
        this->data = data;
        this->next = NULL;
      }
};

    // First Method -> Reverse the linkList Using Loop
    Node* ReverseLinkList(Node* &head){
        Node* previous = NULL;
        Node* current = head;

       while(current != NULL){
        Node* temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
       }
       return previous;

    }


    // Second Method-> using Recursion LinkList Reverse

    Node* ReverseLinkList(Node *&previous , Node* &current){

        // Base case 
        if(current == NULL){
            return previous;
        }

        // 1 case solve
        Node* temp = current->next;
        current->next  = previous;

        // Recursive call
       return  ReverseLinkList(current ,temp);
    }


void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
Node* head = new Node(10);
Node* second = new Node(20);
Node* third = new Node(30);
Node* fourth = new Node(40);


head->next = second;
second->next = third;
third->next = fourth;
fourth->next = NULL; 

Print(head);
cout<<endl;
   
   // using Loop Reverse The linkList
//  Node* res =  ReverseLinkList(head);
//  Print(res);


    // Reverse LinkList Using Recursion  
    Node* previous = NULL;
    Node* current = head;
    Node* res = ReverseLinkList(previous ,current);

    Print(res);

    return 0;
}