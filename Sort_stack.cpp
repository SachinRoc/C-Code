 #include <iostream>
 #include <stack>
using namespace std;

 void insertSortElemnt(stack<int>&st , int topElemnet){
       // base case
      if(st.empty()){
        st.push(topElemnet);
        return ;
      }
      if(st.top() >= topElemnet){
         st.push(topElemnet);
         return ;
      }

      int temp = st.top();
      st.pop();
      // recursive call
      insertSortElemnt(st ,topElemnet);
      
      // backtrack
      st.push(temp);

 }


void sortStack(stack<int>&st){
    // base case
    if(st.empty()){
        return ;

    }

    int topElemnet = st.top();
   st.pop();
   // recursive call
   sortStack(st);
   // backtrack
   insertSortElemnt(st , topElemnet);


}

int main(){
stack<int>st;

st.push(3);
st.push(8);
st.push(4);
st.push(12);
st.push(9);

sortStack(st);
while(!st.empty()){
    cout<< st.top() << endl; 
    st.pop();
}



}