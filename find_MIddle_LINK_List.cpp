#include<iostream>
using namespace std;


// Create a link list.
class Node{
    public:
    int data;
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
// Print the link List
void Print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* getMiddle(Node* &head){
    // LL is Empty ho toh.
    if(head == NULL){
        cout<< " LL is Empty"<<" ";
        return head;
    }
    // if singal Node in LL 
    if(head->next == NULL){
         return head;
    }

    // LL is greater then 1 Node
     //create a slow and fast pointer

     Node* slow = head;
     //Node* fast = head;
     // if you want to print middle 30 in LinkList
     Node* fast = head->next;

     while(slow != NULL && fast != NULL ){
        // 1 step move
        fast = fast->next;
        // check again fast not NULL
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
     }
     return slow;

}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next  =  fourth;
    fourth->next = fifth;
    fifth->next  = sixth;
    sixth->next = NULL;

    Print(head);

   cout<<endl;
   cout<< "The Middle Node is: " << getMiddle(head)->data;
  
    return 0;
}