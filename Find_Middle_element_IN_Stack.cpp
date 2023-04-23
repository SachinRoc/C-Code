  #include <iostream>
  #include <stack>
  using namespace std;

     // Question - Find Middle element in stack.

void printMiddle(stack<int>&st , int totalSize){

    if(st.size() == 0){
        cout<< "No element in Stack"<<endl;
    }

   // base case
   if(st.size() == totalSize/2 +1){
    cout<<"Middle element of stack is : " <<st.top() << endl;
    return ;
   }

   // 1 case solve 
   int temp = st.top();
   st.pop();

   // Recusive call
   printMiddle(st , totalSize);

   // Backtrack
   st.push(temp);

}

  int main(){

    stack<int>st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
  
   
  int totalSize  = st.size();

printMiddle(st , totalSize);
    

  }
