#include <iostream>
#include <stack>
using namespace std;
     // Reversr string using Stack.

int main(){
    
    string str = "sachin";
   
    stack<char> st;

    for( int i = 0 ; i<str.length() ; i++){
        st.push(str[i]);
    }

    while(!st.empty()){
        cout<< st.top();
        st.pop();
    }
    cout<<endl;
  
 
    return 0;
}