#include <iostream>
using namespace std;

     // 2 stack in array.

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

   // function 
   void push1(int data){

    if(top2 - top1 == 1){
        // space not avilable
        cout<<"Stack Overflow In Stack 1"<<endl;
    }
    else{
        // space avilable
        top1++;
        arr[top1] = data;
    }

   }
   void pop1(){
      if(top1 == -1){
        // stack 1 is empty
        cout<<"Stack UnderFlow in Stack 1"<<endl;
      }
      else{
        // stack is not empty
        arr[top1] = 0;
        top1--;
      }

   }

   void push2(int data){
    if(top2 - top1 == 1){
        //space not avilable
        cout<<"Stack Overflow in Stack 2"<<endl;
    }
    else{
        // space avilable
        top2--;
        arr[top2] = data;
    }


   }
   void pop2(){
     if(top2 == size){
        // stack 2 is empty
        cout<<"Stack UnderFlow in Stack 2"<<endl;
      }
      else{
        // stack is not empty.
        arr[top2] = 0;
        top2++;
      }

   }
    
    // yeh function only array mai element check krna ke liya hai.reality mai hme yeh nhi 
    // krna hai.
   void print(){
    cout<<endl;
    cout<< "top1: " << top1 <<endl; 
    cout<< "top2: " << top2 << endl;

      for(int i = 0 ; i<size ; i++){
        cout<< arr[i] << " ";
      }
      cout<<endl;
}


};


int main(){
    Stack s(10);
 
 // push element in stack 1
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();
    s.push1(60);
    s.print();

// push element in stack 2

    s.push2(100);
    s.print();
    s.push2(200);
    s.print();
    s.push2(300);
    s.print();
    s.push2(400);
    s.print();

    // check stack overflow in stack 2
    // s.push2(1000);
    // s.print();


// check for underflow in stack 1
    s.pop1();
    s.print();
     s.pop1();
    s.print();
     s.pop1();
    s.print();
     s.pop1();
    s.print();
     s.pop1();
    s.print();
     s.pop1();
    s.print();
     s.pop1();
    s.print();
   

    return 0;
}