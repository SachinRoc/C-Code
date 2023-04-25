#include <iostream>
using namespace std;

class Node{
       public:
       int data;
       Node* next;
 
        Node(int data){
           this->data = data;
           this->next = NULL;
       }

};

Node* reverse(Node* head ){
     Node* prev = NULL;
     Node* curr = head;
     Node* next = curr->next;
      
     while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
     }
     return prev;
}

bool checkPalindrom(Node* &head){
    
      if(head == NULL){
        
        return true;
      }
         // singal Node
      if(head->next == NULL){
        return true;
      }

     // >1 node in LL

     // step1: find Middle Node;
    Node* slow = head ;
    Node* fast = head->next;
   
   while(fast != NULL){
    fast = fast->next;
      if(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
      }
   }
   // slow pointer is pointing to middle node
     
   // step 2: Reverse LL after middle/slow Node.
    Node* reverseLLKaHead = reverse(slow ->next);
   

   // join the linkList after middle
    slow->next = reverseLLKaHead;

    //Step:C  start comparision

    Node* temp1 = head;
    Node* temp2 = reverseLLKaHead;
   

    while(temp2 != NULL){
          // data not equal
         
        if(temp1->data != temp2->data){
            return false;
        }
        else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;

}


int main(){

    Node* head = new Node(10);
    Node* second  = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    bool isPalindrom = checkPalindrom(head);

    if(isPalindrom){
        cout<<"LL is valid Palindrom"<<endl;
    }
    else{
        cout<<"LL is not valid Palindrom"<<endl;
    }
   


    return 0;
}