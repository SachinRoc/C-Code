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

//  first Method  count the zero, one and 2

// void sortZeroOneTwo(Node* &head){
//     // step 1: find count zero one and twos.
//     int zero= 0;
//     int one = 0;
//     int two = 0;

//    Node* temp = head;
//    while(temp != NULL){
//     if(temp->data == 0){
//         zero++;
//     }
//     else if(temp->data == 1){
//         one++;
//     }
//     else if(temp->data == 2){
//         two++;
//     }
//     temp = temp->next;
//    }

//    //step: 2 fill 0,1 ans 2s in the original LL
//    temp = head;

//         while(zero--){
//             temp->data = 0;
//             temp = temp->next;
//         }
//         while(one--){
//             temp->data = 1;
//             temp = temp->next;
//         }
//         while(two--){
//             temp ->data = 2;
//             temp = temp->next;
//         }
   


// }

Node* sort2(Node* &head){
    if(head == NULL){
        cout<< "LL is Empty"<<endl;
    }
    if(head->next == NULL){
        // singal Node
        return head;
    }

    // create dummy node zero, one, and two,

    Node* zeroHead = new Node(-101);
    Node* zeroTail = zeroHead ;

    Node* oneHead = new Node(-101);
    Node* oneTail = oneHead ;

    Node* twoHead = new Node(-101);
    Node* twoTail = twoHead ;

    Node* curr = head;

    while(curr != NULL){
      
        if(curr->data == 0){
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the zero node in ZeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;

        }
       else if(curr->data ==1){
         Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the zero node in ZeroHead LL
            oneTail->next = temp;
            oneTail = temp;

       }
       else if(curr->data == 2 ){
         Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the zero node in ZeroHead LL
            twoTail->next = temp;
            twoTail = temp;

       }

       
        
    }
    // ab yaha pr zero , one , two wali link list ready hai

    // join them and remove dummy node

    // modify one wali list 

    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // modify second wali node
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    // join list

    if(oneHead != NULL){
          // one wali list is non empty
         // Zero wali list ko one se connect krenga
         zeroTail->next = oneHead;
         if(twoHead != NULL){
            oneTail->next = twoHead;
         }

    }
    else{
        // one wali list empty hoti.
        zeroTail->next = twoHead;   
    }

    // remove zero dummy list;
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

return zeroHead;

}




int main(){
   
Node* head = new Node(2);
Node* second = new Node(2);
Node* third = new Node(2);
Node* fourth = new Node(0);
Node* fifth = new Node(0);
Node* sixth = new Node(0);

head->next = second;
second->next = third;
third->next = fourth ;
fourth->next = fifth;
fifth->next = sixth;

Print(head);

cout<<endl;
  // first approach.
// sortZeroOneTwo(head);

// Print(head);

cout<<"after sorted list"<<endl;

head =  sort2(head);
Print(head);

    return 0;
}