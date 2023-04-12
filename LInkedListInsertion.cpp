#include <iostream>
using namespace std;

// linked list Insertion base on value of linked List;

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

void InsertAtFirst(Node* &head , Node* &tail ,int data ){

  // empty case
  if(head ==NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return ;
  }

  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;

}

void InsertAtTail(Node* &head , Node* &tail , int data){
   if(head ==NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  Node* newNode = new Node(data);
  tail->next = newNode;
  tail = newNode; 

}

void insertValuePostion(Node* &head , Node* &tail ,int len, int data , int value){
  // empty case
  if(head ==NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  if(value == head->data){
    InsertAtFirst(head ,tail ,data );
    return;
  }
  
  Node* pre = head;
  int i =1;
  while(i<=len-1){
     pre = pre->next;
     if(pre->data == tail->data){
      InsertAtTail(head,tail,data);
      break;
     }
    if(pre->data == value){
      Node* curr = pre->next;
      Node* newNode = new Node(data);
      newNode->next = curr;
      pre->next = newNode;
       break;
    }
    

     len--;


  }

}


void print(Node* &head){
Node* temp  = head;
while(temp!=NULL){
  cout<< temp->data<<" ";
  temp = temp->next;
  }
}

int getLength(Node* &head){
  Node* temp = head;
  int len = 0;
  while(temp!=NULL){
    temp= temp->next;
    len++;
  }
  return len;
}



int main(){


  Node* head= NULL;
  Node* tail =NULL;
  InsertAtFirst(head,tail,10);
  InsertAtFirst(head,tail,20);
  InsertAtFirst(head,tail,30);
  
  print(head);
  cout<<endl;

  InsertAtTail(head ,tail ,40);


  print(head);
  int len = getLength(head);

  insertValuePostion(head , tail ,len, 50 , 20);

  cout<<endl;
  print(head);

    return 0;
}