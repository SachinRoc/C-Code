#include <iostream>
using namespace std;

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

int getLength(Node* &head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    } 
    return len;
}



Node* reverseKNodes(Node* & head , int k){
    if(head == NULL){
        cout<< "LL is Empty"<<endl;
        return NULL;
    }
    int len = getLength(head);

    if(k > len){
     //   cout<<"Enter valid value of  K"<<endl;
        return head;
    }
     
     // it means number of node in LL >=K

     // step A : reverse first K node of LL
     Node* prev = NULL;
     Node* curr = head;
     Node* forward = curr->next;
     int count = 0 ;
     while(count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward; 
        count++;
     }
     // step B : recursive call
     if(forward != NULL){
        // we still have nodes left to reverse
        Node* recursionKaAns = reverseKNodes(forward , k);
        head->next =  recursionKaAns;
     }

     // step C: return head of the modified LL
     return prev;

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


    head = reverseKNodes(head , 4);
    cout<< endl;
    Print(head);
}