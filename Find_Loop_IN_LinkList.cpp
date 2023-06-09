#include <iostream>
using namespace std;
// create a node;
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


// Check loop is present in LL
bool checkForLoop(Node* &head){
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

     while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;

        }

        if(fast == slow ){
            return true;
        }
     }

     return false;

}

Node* startingPointOfLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

     while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;

        }
         // step 1 : slow aur fast ko meet karwaya.
        if(fast == slow ){
            //step:2
            slow = head;
            break;
            
        }
     }
      // jab tak slow aur fast mil nhi jata.
     while(slow != fast){
        // 1 -1 step aage badaya
        slow = slow->next;
        fast = fast->next;
     }
     return slow;

   
}


Node* removeLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

     while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;

        }
         // step 1 : slow aur fast ko meet karwaya.
        if(fast == slow ){
            //step:2
            slow = head;
            break;
            
        }
     }
      // jab tak slow aur fast mil nhi jata.
      Node* prev = fast;
     while(slow != fast){
        // 1 -1 step aage badaya
        prev = fast;
        slow = slow->next;
        fast = fast->next;
     }

     prev->next = NULL;
   //  return slow;

   
}


int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next  =  fourth;
    fourth->next = fifth;
    fifth->next  = sixth;
    sixth->next =  seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;

     //->check loop is present in LinkList

    if(checkForLoop(head)){
        cout<< "Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }

   // Print(head);


     // starting point of loop
    cout<< "Starting point of loop is: "<<startingPointOfLoop(head)->data <<endl; 

    // remove loop
    removeLoop(head);
    Print(head);

    return 0;
}