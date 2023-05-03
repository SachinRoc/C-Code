#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int>&st , int &target){

    // base  case
    if(st.empty()){
         st.push(target);
         return ;
    }


    int temp = st.top();
    st.pop();

    // Recursive call
    InsertAtBottom(st, target);
    // backtraack
    st.push(temp);

}


int main(){

stack<int>st;
st.push(100);
st.push(200);
st.push(300);
st.push(400);
st.push(500);
st.push(600);

if(st.empty()){
    cout<<"you can not insert at bootom in stack because stack is empty"<<endl;

}


int target = st.top();
st.pop();
cout<< target<< endl;

InsertAtBottom(st , target);

cout<<"after insert bottom"<<endl;
cout<<endl;
while(!st.empty()){
    cout<< st.top() << endl;
    st.pop();
}


    return 0;
}

