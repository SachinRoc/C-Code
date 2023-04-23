#include <iostream>
using namespace std;
// stack creation using Dynamic Array.

class Stack{
      
      public:
      int* arr;
      int top;
      int size;  // array of Size .
    
    Stack(int size){
        arr =  new int[size];
        this->size = size;
        top = -1;
    }

    //  function
      void push(int data){
        if(size - top > 1){
               // space avilable
               // insert
               top++;
               arr[top] = data;
        }
        else{
              // space not avilable
              cout<< "stack Overflow"<<" ";
        }

      }

      void pop(){
          if(top == -1){
               cout<<" Stack underflow, cant delete element" << endl;
           }
          else{
               top--;
          }

      }

      int getTop(){
        if(top == -1){
              cout<<" there is no element in stack"<<endl;
        }
        else{
            return arr[top];
        }


      }
       // return number of valid element present in stack 
      int getSize(){
         return top+1;

      }

      bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

      }

};



int main(){

// Creation of stack.
Stack s(5);

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
//s.push(60); stack over flow.

while(!s.isEmpty()){
    cout<<s.getTop()<<" ";
    s.pop();
}
    

 cout<< " Size of Stack " << s.getSize() << endl;   

return 0;
}