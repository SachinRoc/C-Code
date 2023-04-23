#include <iostream>
#include <stack>
using namespace std;

int main(){

// creation of stack
stack<int> st;

// Insertion in stack.
st.push(10);
st.push(20);
st.push(30);
st.push(40);


// Remove Opertaion.
st.pop();


// check top element in stack.
cout<<"element is top on "<< st.top()<<endl;

// size check

cout<<"size of stack Is " << st.size()<< endl;

//check stack is empty or not 

if(st.empty()){
    cout<<" stack is Empty"<< endl;
}
else{
    cout<< " stack is not empty"<< endl;
}




    return 0;
}