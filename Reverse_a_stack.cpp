#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>&st , int target){
    // base case
    if(st.empty()){
        st.push(target);
        return ;
    }

    int temp = st.top();
    st.pop();

    // recursive call
    insertAtBottom(st , target);

    // backtrack
    st.push(temp);
}



void reverseStack(stack<int>&st){

    // base case
    if(st.empty()){
        return ;
    }

    int target = st.top();
    st.pop();

    // recusive call
    reverseStack(st);

    // backtrack
    insertAtBottom(st , target);
}

int main(){

stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

reverseStack(st);

cout<<"printing stack " << endl;
while(!st.empty()){
    cout << st.top() << endl;
    st.pop();
}




    return 0;
}

